#include <iostream> // Standard library for input and output
#include <fstream>  // Library for file manipulation
#include "farao.h"  // Header with the declaration of `heat_diffusion_2d`

int main(){
        std::cout<< "Ich bin Daria M." << std::endl;

        // Matrix dimensions
    const int M = 1000; // Number of rows
    const int N = 1000; // Number of columns

// Dynamic memory allocation for matrices A and B
    double** A = new double*[M];
    double** B = new double*[M];
    for (int k = 0; k < M; k++) {
        A[k] = new double[N];
        B[k] = new double[N];
    }

    // Calls the function that simulates heat diffusion
    heat_diffusion_2d(A, B, M, N);

    // Creates an object to handle output files
    std::ofstream out_file;

    // Opens (or creates) the file "simul30seg.txt"
    out_file.open("simul30seg.txt");

    // Saves the indices and the value of each element of A to the file
    for (int m = 0; m < M; m++) {
        for (int n = 0; n < N; n++) {
            out_file << m << ' ' << n << ' ' << A[m][n] << std::endl;
        }
    }
    // Adds a blank line and closes the file
    out_file << std::endl;
    out_file.close();

    // Frees the dynamically allocated memory
    for (int k = 0; k < M; k++) {
        delete[] A[k];
        delete[] B[k];
    }
    delete[] A;
    delete[] B;

    return 0; // Ends the program
}
