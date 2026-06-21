#include <iostream>
#include <cmath> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	double radius;
	
	cout<<"Enter the radius of the circle:";
	cin>>radius;
	
	double area = 3.142 * radius * radius;
	cout<<"Area of circle with radius"<<"="<<area<<endl;
	
	return 0;
}
