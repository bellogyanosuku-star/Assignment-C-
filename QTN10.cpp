#include <iostream>
#include <cmath> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	float Vll, phi, R, X;
	cout<<"Vll phi R X:";
	cin>>Vll>>phi>>R>>X;
	
	float Z= sqrt(R * R + X * X);
	float Vph= Vll / sqrt(3);
	float Iph= Vph / Z;
	float Iline= Iph;
	float pf= cos(atan2(X , R));
	cout<<"Iline="<<Iline<<"A"<<endl;
	cout<<"Iph="<<Iph<<"A"<<endl;
	cout<<"pf="<<pf<<"A"; 
	return 0;
}
