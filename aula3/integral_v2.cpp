/*
HPC
aula3.cpp
Daria Martinovskaya
2024-11-02

To compil (=process of converting source code written in a programming language (such as C++) into machine code that can be executed by a computer): g++ integral_v2.cpp -o integral_v2 -fopenmp

To run the program: ./integral_v2

An example of integral summation for calculating areas: the code below is developed to calculate the number π using the method of numerical integration. Integration is a way to find the area under a curve. In this case. we use a function that describes a quarter of a circle to estimate π. 
*/

/*
Connecting libraries which are required to work with numbers, mathematical functions and parallel tasks performance.
*/

#include <iostream>
#include <math.h>
#include <omp.h>
#include <unistd.h>

/*
Determining functions:
f1, f2 and f_pi - simple mathematical functions.
f_pi returns the value for the given x that corresponds to a quarter of a circle.
*/

double f1(double x) {
	return 1.0;
}

double f2(double x) {
	return x * x;
}

double f_pi(double x) {
	return sqrt(1.0 - x * x);
}

/*
Function fot integration:
this functions takes two numbers a and b (integration boarders), amount of steps N and finction f which should be integrated.
Then it divides the segment between a and b into small parts and calculates the area under the curve.
*/

double soma_integral(double a, double b, int N, double (*f)(double) ) {
	double s = 0.0;
	double dx = (b - a) / N;

	for (int k = 0; k < N; k++) {
		s += f(a + k * dx) * dx;
	}
	return s;
}

/*
The main function:
from this the programm executin begans:
we set the integration boundaries (0 and 1) and the number of steps (5 million).
Then we call the integration function and calculate π from the resulting area.
*/

int main() {
	std::cout << "Hello World!"
		  << std::endl;

	double a = 0.0;
	double b = 1.0;
	int N = 5000000;

	double s = soma_integral(a, b, N, f_pi);
	double pi = 4 * s;

	std::cout << "pi = " << pi << std::endl;

	//for(int k = 0; k < 10; k++) {
	//   std::cout << k << std::endl;
	//   }
	
/*Parallel running:
this code part allows multiple threads (parallel parts of the program) to run at the same time.
Each thread does the integration and prints out its ID so we can see which threads were running.
*/

	#pragma omp parallel
	{
		int thread_id = omp_get_thread_num();
		for (int n = 0; n < 5; n++) {
			double s = soma_integral(a, b, N, f_pi);
			std::cout << thread_id << std::endl;
		}
	}
	return 0;
}

/*At the end, the program outputs the calculated value of π and the thread IDs that were running.
*/




