#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	double Lp, Ls, Np, Ns, Vp;
	cout<<"Lp Ls Np Ns Vp:";
	cin>>Lp>>Ls>>Np>>Ns>>Vp;
	
	double a= Np/Ns;
	double Vs= Vp/a;
	double Ip= 1.0, Is= Ip * a;
	double phase_shift= 0;
	cout<<"Vs/Vp="<<Vs/Vp<<endl;
	cout<<"Is/Ip="<<Is/Ip<<endl;
	cout<<"phase_shift="<<phase_shift<<"deg";
	return 0;
}
