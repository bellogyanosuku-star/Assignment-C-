#include <iostream>
#include <cmath>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	float m1, m2, k1, k2, k3;
	cout<<"m1 m2 k1 k2 k3:";
	cin>>m1>>m2>>k1>>k2>>k3;
	
	float a= m1 * m2;
	float b= (m1 *(k2 + k3) + m2 *(k1 + k2));
	float c= (k1 + k2 ) * (k2 + k3) - (k2 * k2);
	float w1= sqrt((-b + sqrt(b * b - 4 * a * c))/ (2 * a ));
	float w2= sqrt((-b - sqrt(b * b - 4 * a * c))/ (2 * a ));
	cout<<"w1="<<w1<<"rad/s"<<endl;
	cout<<"w2="<<w2<<"rad/s";
	return 0;
}
