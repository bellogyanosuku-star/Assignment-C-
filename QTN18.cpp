#include <iostream>
#include<string>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string binary;
	int decimal = 0;
	
	cout<<"Enter a binary number: ";
	cin>>binary;
	
	for (int i =0; i < binary.length(); i++) {
		decimal =decimal * 2 + (binary[i-'0']);
	}
	return 0;
}
