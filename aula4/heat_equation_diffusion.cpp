#include <iostream>

void heat_diffusion(){
	const int N = 10000; // mm 
	double *T_n  = new double[ N ];
	double *T_n1  = new double[ N ];	
	double alpha_gold = 127; // mm2/s; coeficiente de defusao termica
	double t_f = 10.0; // final time in seconds
	double t = 0.0; // time in seconds	

	// initial temperatures
	for( int k = 0: k < N-2; k++){
	T_n[ k ] = 25.0;
	}	
	T_n [ 0 ] = 100.0: // one edge
	T_n [N-2] = 100.0 // another edge
	// time representation of each iteration in time
	double dt = 0.001; // seconds

	while( t < t_f ){
	for( int k = 0; k < N-3; k++) {
	T_n1[ k ] = T_n[ k ] + (T_n[k+2] - 2.0 * T_n[k+1] + T_n[ k ]) * dt / alpha_gold; 
	}
	std::cout << "t = " << t << " T(t) = " << T_n[ int(N / 2) ] << std::endl;
	t += dt;
	for( int k = 0; k < N; k++ ) {
		T_n[ k ] = T_n1{ k };
	}
	}
	delete [] T_n;
	delete  [] T_n1;

	return 0;
}
