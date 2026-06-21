#include <iostream>
#include <cmath>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	double Q, R, eps_r, r;
	const double eps0= 8.85e-12;
	cout<<"Q R eps_r r:";
	cin>>Q>>R>>eps_r>>r;
	
	double eps= eps0 * eps_r;
	double E, V;
	
	if(r>=R){
		E= Q/ (4 * M_PI * eps0 * r);
		V= Q/(4 * M_PI * eps0 * r);
	}
	else{
		E= Q * r / (4 * M_PI * eps0 * R);
		V= Q * (3 * R - r * r) / (8 * M_PI * eps0 * R);
	}
	cout <<"E="<<E<<"N/C"<<endl;
	cout <<"V="<<V<<"V";
	return 0;
}
