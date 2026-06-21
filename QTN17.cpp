#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	float Vs, Is, Vl, Il;
	cout<<"Vs Is Vl Il:";
	cin>>Vs>>Is>>Vl>>Il;
	
	double Pin= Vs *Is;
	double Pout= Vl *Il;
	double eff= (Pout / Pin) * 100.0;
	double Ploss= Pin - Pout;
	cout<<"Pout="<<Pout<<"W"<<endl;
	cout<<"Ploss="<<Ploss<<"W"<<endl;
	cout<<"eff="<<eff<<"%";
	return 0;
}
