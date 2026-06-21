#include <iostream>
#include <cmath>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	float R, L, Kt, V, f;
	const float PI= 3.142;
	cout<<"R L Kt f V:";
	cin>>R>>L>>Kt>>f>>V;
	
	float I = V / R;
	float speed = (V - I * R) /Kt;
	float power = V * I;
	float w= 2 * PI * f;
	float Z= sqrt(R * R + pow(w * L,2));
	cout<<"I="<<I<<"A"<<endl;
	cout<<"speed="<<speed<<"m/s"<<endl;
	cout<<"Power="<<power<<"W";
	return 0;
}
