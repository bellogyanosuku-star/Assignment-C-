#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	float A, B, C, D, s;
	cout<<"A B C D s:";
	cin>>A>>B>>C>>D>>s;
	
	float G= C * B / (s - A) + D;
	cout<<"G(s)="<<G;
	return 0;
}
