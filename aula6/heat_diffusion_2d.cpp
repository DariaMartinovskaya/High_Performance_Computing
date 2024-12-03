#include <iostream> // Library for console messages
#include <omp.h>    // Library for parallelism with OpenMP

void heat_diffusion_2d(double** A, double** B, int M, int N) {
    // Indicates in the console that the function was called
    std::cout << "heat_diffusion_2d" << std::endl;

    // Simulation parameters
    double alfa_gold = 127;  // Thermal diffusion coefficient (mm²/s)
    double T0 = 25.0;        // Initial temperature (Celsius)
    double Tb = 100.0;       // Temperature at the edges (Celsius)

    // Initialization of the internal values of the matrix
    for (int m = 0; m < M; m++) {
        for (int n = 0; n < N; n++) {
            A[m][n] = T0;
            B[m][n] = T0;
        }
    }

    // Initialization of the edges with fixed temperature
    for (int m = 0; m < M; m++) {
        A[m][0] = Tb;       // First column
        B[m][0] = Tb;
        A[m][N-1] = Tb;     // Last column
        B[m][N-1] = Tb;
    }
    for (int n = 0; n < N; n++) {
        A[0][n] = Tb;       // First row
        B[0][n] = Tb;
        A[M-1][n] = Tb;     // Last row
        B[M-1][n] = Tb;
    }

    // Total simulation time (30 seconds)
    int final_time = 30000;

// Time evolution using OpenMP for parallelism
    #pragma omp parallel for
    for (int t = 0; t < final_time; t++) {
        // Update the internal values of the matrix
        for (int m = 1; m < M-1; m++) {
            for (int n = 1; n < N-1; n++) {
                double a0 = A[m][n];       // Current value
                double aW = A[m+1][n];     // Neighbor to the left
                double aE = A[m-1][n];     // Neighbor to the right
                double aN = A[m][n+1];     // Neighbor above
                double aS = A[m][n-1];     // Neighbor below

                // Updates the value in B[m][n] based on the diffusion equation
                B[m][n] = a0 + (aW + aE + aS + aN - 4.0 * a0) / alfa_gold;
            }
        }

        // Copies the values from B to A
        for (int m = 1; m < M-1; m++) {
            for (int n = 1; n < N-1; n++) {
                A[m][n] = B[m][n];
            }
        }
    }
}
