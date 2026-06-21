#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	float R, L, Kt, Kb, V;
	cout<<"R L Kt Kb V:";
	cin>>R>>L>>Kt>>Kb>>V;
	
	float I = V / R;
	float speed = (V - I * R) /Kb;
	float power = V * I;
	cout<<"I="<<I<<"A"<<endl;
	cout<<"speed="<<speed<<"m/s"<<endl;
	cout<<"Power="<<power<<"W";
	return 0;
}
