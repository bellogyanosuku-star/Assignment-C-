#include <iostream>
#include <cmath>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	float q, x0, y0, z0, x, y, z;
	const float k = 8.99e9;
	cout<<"q x0 y0 z0 x y z:";
	cin>>q>>x0>>y0>>z0>>x>>y>>z;
	
	float r = sqrt(pow(x-x0,2) + pow(y-y0,2) + pow(z-z0,2)), endl;
	float E = k * q / (r * r);
	float V = k * q / r;
	cout<<"E="<<E<<"N\C/nV="<<V<<"V"<<endl;
	return 0;
}
