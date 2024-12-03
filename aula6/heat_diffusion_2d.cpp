Last login: Sat Nov 30 16:34:25 on ttys000
(base) dariamartinovskaya@Air-Daria ~ % ssh tei26610@rolf.ipbeja.pt            
Welcome to Ubuntu 22.04.3 LTS (GNU/Linux 5.15.0-107-generic x86_64)

 * Documentation:  https://help.ubuntu.com
 * Management:     https://landscape.canonical.com
 * Support:        https://ubuntu.com/advantage

  System information as of ter 03 dez 2024 18:01:51 WET

  System load:                      0.1181640625
  Usage of /:                       66.2% of 876.64GB
  Memory usage:                     2%
  Swap usage:                       10%
  Processes:                        1348
  Users logged in:                  4
  IPv4 address for docker0:         172.17.0.1
  IPv4 address for enp97s0f1:       194.210.138.123
  IPv4 address for enxb03af2b6059f: 169.254.3.1
  IPv4 address for wg0:             10.253.3.100

 * Strictly confined Kubernetes makes edge and IoT secure. Learn how MicroK8s
   just raised the bar for easy, resilient and secure K8s cluster deployment.

   https://ubuntu.com/engage/secure-kubernetes-at-the-edge

Manutenção de Segurança Expandida para Applications não está ativa.

82 as atualizações podem ser aplicadas imediatamente.
Para ver as actualizações adicionais corre o comando: apt list --upgradable

30 atualizações de segurança adicionais podem ser aplicadas com ESM Apps.
Saiba mais sobre como ativar o serviço ESM Apps at https://ubuntu.com/esm

New release '24.04.1 LTS' available.
Run 'do-release-upgrade' to upgrade to it.


15 updates could not be installed automatically. For more details,
see /var/log/unattended-upgrades/unattended-upgrades.log

*** System restart required ***
Last login: Thu Nov 28 22:42:12 2024 from 194.210.136.33
 
:: initializing oneAPI environment ...
   -bash: BASH_VERSION = 5.1.16(1)-release
   args: Using "$@" for setvars.sh arguments: 
:: advisor -- latest
:: ccl -- latest
:: compiler -- latest
:: dal -- latest
:: debugger -- latest
:: dev-utilities -- latest
:: dnnl -- latest
:: dpcpp-ct -- latest
:: dpl -- latest
:: ipp -- latest
:: ippcp -- latest
:: mkl -- latest
:: mpi -- latest
:: tbb -- latest
:: vtune -- latest
:: oneAPI environment initialized ::
 
tei26610@rolf:~$ ls
cd  hpc2
tei26610@rolf:~$ cd hpc2
tei26610@rolf:~/hpc2$ ls
farao  farao.c  hello  hello.c  main  my-repo
tei26610@rolf:~/hpc2$ cd my-repo
tei26610@rolf:~/hpc2/my-repo$ ls
README.md  aula2  aula3  aula4  aula5  aula6
tei26610@rolf:~/hpc2/my-repo$ cd aula6
tei26610@rolf:~/hpc2/my-repo/aula6$ ls
CMakeCache.txt  CMakeFiles  CMakeLists.txt  Makefile  cmake_install.cmake  farao  farao.cpp
tei26610@rolf:~/hpc2/my-repo/aula6$ cd ..
tei26610@rolf:~/hpc2/my-repo$ mkdir aula7
tei26610@rolf:~/hpc2/my-repo$ cd aula7
tei26610@rolf:~/hpc2/my-repo/aula7$ cd ..
tei26610@rolf:~/hpc2/my-repo$ ls
README.md  aula2  aula3  aula4  aula5  aula6  aula7
tei26610@rolf:~/hpc2/my-repo$ ls
README.md  aula2  aula3  aula4  aula5  aula6  aula7
tei26610@rolf:~/hpc2/my-repo$ cd aula6
tei26610@rolf:~/hpc2/my-repo/aula6$ ls
CMakeCache.txt  CMakeFiles  CMakeLists.txt  Makefile  cmake_install.cmake  farao  farao.cpp
tei26610@rolf:~/hpc2/my-repo/aula6$ vim CMakeLists.txt
tei26610@rolf:~/hpc2/my-repo/aula6$ ls
CMakeCache.txt  CMakeFiles  CMakeLists.txt  Makefile  cmake_install.cmake  farao  farao.cpp
tei26610@rolf:~/hpc2/my-repo/aula6$ vim farao.cpp
tei26610@rolf:~/hpc2/my-repo/aula6$ vim farao.cpp
tei26610@rolf:~/hpc2/my-repo/aula6$ vim farao.h
tei26610@rolf:~/hpc2/my-repo/aula6$ vim heat_diffusion_2d.cpp
tei26610@rolf:~/hpc2/my-repo/aula6$ vim Codeexplanation.txt
tei26610@rolf:~/hpc2/my-repo/aula6$ ls
CMakeCache.txt  CMakeFiles  CMakeLists.txt  Codeexplanation.txt  Makefile  cmake_install.cmake  farao  farao.cpp  farao.h  heat_diffusion_2d.cpp
tei26610@rolf:~/hpc2/my-repo/aula6$ cd ..
tei26610@rolf:~/hpc2/my-repo$ cd aula7
tei26610@rolf:~/hpc2/my-repo/aula7$ cd ..
tei26610@rolf:~/hpc2/my-repo$ cd aula6
tei26610@rolf:~/hpc2/my-repo/aula6$ ls
CMakeCache.txt  CMakeFiles  CMakeLists.txt  Codeexplanation.txt  Makefile  cmake_install.cmake  farao  farao.cpp  farao.h  heat_diffusion_2d.cpp
tei26610@rolf:~/hpc2/my-repo/aula6$ cd ..
tei26610@rolf:~/hpc2/my-repo$ mkdir 6.1
tei26610@rolf:~/hpc2/my-repo$ cd ..
tei26610@rolf:~/hpc2$ cd my-repo
tei26610@rolf:~/hpc2/my-repo$ cd aula6
tei26610@rolf:~/hpc2/my-repo/aula6$ mv CMakeLists.txt Codeexplanation.txt farao.cpp farao.h heat_diffusion_2d.cpp ../aula6.1
mv: target '../aula6.1' is not a directory
tei26610@rolf:~/hpc2/my-repo/aula6$ cd ..
tei26610@rolf:~/hpc2/my-repo$ cd aula7
tei26610@rolf:~/hpc2/my-repo/aula7$ cd ..
tei26610@rolf:~/hpc2/my-repo$ cd aula6
tei26610@rolf:~/hpc2/my-repo/aula6$ ls
CMakeCache.txt  CMakeFiles  CMakeLists.txt  Codeexplanation.txt  Makefile  cmake_install.cmake  farao  farao.cpp  farao.h  heat_diffusion_2d.cpp
tei26610@rolf:~/hpc2/my-repo/aula6$ cd CMakeLists.txt
-bash: cd: CMakeLists.txt: Not a directory
tei26610@rolf:~/hpc2/my-repo/aula6$ vim CMakeLists.txt
tei26610@rolf:~/hpc2/my-repo/aula6$ vim farao.cpp
tei26610@rolf:~/hpc2/my-repo/aula6$ vim farao.h 
tei26610@rolf:~/hpc2/my-repo/aula6$ vim heat_diffusion_2d.cpp
tei26610@rolf:~/hpc2/my-repo/aula6$ vim heat_diffusion_2d.cpp

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
