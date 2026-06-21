#include <iostream>
#include <cmath>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	double l, d;
	const double mu0= 4 * M_PI * 1e-7;
	cout<<"Enter length l in m and separation d in m:";
	cin>>l>>d;
	
	double M= (mu0 * l / (2 * M_PI)) * (log(2 * l / d) - 1);
	cout<<"Mutual Inductance M="<<M<<"H"<<endl;
	cout<<"Induced emf for dI/dt=1 A/s"<<-M<<"V";
	return 0;
}

