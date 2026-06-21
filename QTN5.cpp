#include <iostream>
#include <cmath>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std; 

int main(int argc, char** argv) {
    float R, L, C, f, w, XL, XC, Z, phi, pf;
	const float PI = 3.142;
	
	cout<<"R L C f:";
	cin>>R>>L>>C>>f;
	
	w = 2 * PI *f;
	XL = w * L;
	XC = 1/ (w * C);
	Z = sqrt (R * R + pow (XL - XC,2));
	phi = atan2(XL - XC, R) * 180 / PI;
	pf = cos(phi);
	cout<<"Z="<<Z<<"ohms\nPhase"<<"="<<phi*180/PI<<"deg\nPF"<<"="<<pf<<endl;
	return 0;
}
