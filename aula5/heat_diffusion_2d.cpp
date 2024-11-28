#include "farao.h"
#include <iostream>
#include <fstream>

void heat_diffusion_2d() {
    double alfa_gold = 127; // (mm^2) / milliseconds
    int M = 100; // 100 mm
    int N = 100; // 100 mm

    // Initial memory for the temperatures of the plate
    double** A = new double*[M];
    double** B = new double*[M];
    for (int m = 0; m < M; m++) {
        A[m] = new double[N];
        B[m] = new double[N];
    }

    double T0 = 25.0; // 25 degrees Celsius
    double Tb = 100.0; // 100 degrees Celsius

    // Initial inner conditions
    for (int m = 0; m < M; m++) {
        for (int n = 0; n < N; n++) {
            A[m][n] = T0;
            B[m][n] = T0;
        }
    }

    // Boundary conditions
    for (int m = 0; m < M; m++) {
        A[m][0] = Tb;
        B[m][0] = Tb;
        A[m][N - 1] = Tb;
        B[m][N - 1] = Tb;
    }
    for (int n = 0; n < N; n++) {
        A[0][n] = Tb;
        B[0][n] = Tb;
        A[M - 1][n] = Tb;
        B[M - 1][n] = Tb;
    }

    // Time evolution in milliseconds
    double t = 0.0;
    double final_time = 30000.0; // 30 seconds = 30000 milliseconds
    double dt = 1.0; // milliseconds

    while (t < final_time) {
        for (int m = 1; m < M - 1; m++) {
            for (int n = 1; n < N - 1; n++) {
                double a0 = A[m][n];  // Center
                double aW = A[m + 1][n];  // West
                double aE = A[m - 1][n];  // East
                double aN = A[m][n + 1];  // North
                double aS = A[m][n - 1];  // South

                B[m][n] = a0 + (aW + aE + aN + aS - 4.0 * a0) / alfa_gold;
            }
        }

        // The new array of temperatures is copied into A
        for (int m = 1; m < M - 1; m++) {
            for (int n = 1; n < N - 1; n++) {
                A[m][n] = B[m][n];
            }
        }
        t += dt;
    }

    // Write the simulation result into a file
    std::ofstream out_file;
    out_file.open("simul30seg");
    for (int m = 0; m < M; m++) {
        for (int n = 0; n < N; n++) {
            out_file << m << ' ' << n << ' ' << A[m][n] << std::endl;
        }
        out_file << std::endl;
    }
    out_file.close();

    // Free allocated memory
    for (int m = 0; m < M; m++) {
        delete[] A[m];
        delete[] B[m];
    }
    delete[] A;
    delete[] B;
}

