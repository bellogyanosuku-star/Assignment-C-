#include <iostream>
#include <cmath>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	double R, C, t, Vin=1;
	cout<<"R C t:";
	cin>>R>>C>>t;
	
	double tau= R *C;
	double step= Vin * (1 - exp(-t / tau));
	double impulse= (1/ tau) * exp(-t / tau);
	cout<<"tau="<<tau<<"s"<<endl;
	cout<<"step="<<step<<"V"<<endl;
	cout<<"impulse="<<impulse<<"V/s";
	return 0;
}
