#ifndef _FARAO
#define _FARAO

// Declaration of the `heat_diffusion_2d` function
extern void heat_diffusion_2d(double** A,
                              double** B,
                              int M,
                              int N);

#endif
// Protection against multiple inclusions of the header file
