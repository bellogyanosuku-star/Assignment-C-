#include <iostream>
#include <cmath>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std; 
int main(int argc, char** argv) {
	double I, x, y, z;
	const double mu0= 4 * M_PI * 1e-7;
	cout<<"I x y z:";
	cin>>I>>x>>y>>z;
	
	double r= sqrt(y * y + z * z);
	double B= mu0 * I / (2 * M_PI * r);
	cout<<"B="<<B<<endl;
	cout<<"flux density="<<B<<"Wb/m^2";
	return 0;
}
