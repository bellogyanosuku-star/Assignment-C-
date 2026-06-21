#include <iostream>
#include <cmath>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	double V, I, R, X, phi;
	cout<<"V I R X phi:";
	cin>>V>>I>>R>>X>>phi;
	
	phi= atan2(X, R);
	double P= V * I * cos(phi);
	float Q= V* I * sin(phi);
	float S= V * I;
	cout<<"P="<<P<<"W"<<endl;
	cout<<"Q="<<Q<<"VAR"<<endl;
	cout<<"S="<<S<<"VA";
	return 0;
}
