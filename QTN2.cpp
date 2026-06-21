#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	float V, I, R, P;
	
	cout<<"V, I, R:";
	cin>>V>>I>>R;
	
	P = V * I;
	cout<<"P="<<P<<"W";
	return 0;
}
