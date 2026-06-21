#include <iostream>
#include <cmath>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	float Q, R, x, y, z;
	const float k= 8.99e9;
	cout<<"Q R x y z:";
	cin>>Q>>R>>x>>y>>z;
	
	float r= sqrt(x*x+y*y+z*z);
	double E= r>=R? k * Q/ (r*r): 0;
	float V= r>=R? k*Q/r: k*Q/R;
	cout<<"E="<<E<<"N/C"<<endl;
	cout<<"V="<<V<<"V";
	return 0;
}
