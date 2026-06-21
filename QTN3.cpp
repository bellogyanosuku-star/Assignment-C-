#include <iostream>
#include <vector>
#include <cmath>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int n;
	cout<<"n:";
	cin >> n;
	vector<vector<double'>>' a(n, vector<double>(n+1));
	cout<<"Enter augmented matrix row-wise:";
	
	for (int i=0; i<n; i++)
	for (int j=0; j<=n; j++)
	cin>> a[i][j];
	
	for(int i=0; i<n; i++){
		int maxRow = i;
		for(int k=i+1; k<n; k++)
		if(fabs(a[k][i])>
		fabs(a[maxRow][i])) maxRow =k;
		swap(a[i], a[maxRow]);
		
		for(int k=i+1; k<n; k++){
			double factor = a[k][i] / a[i][i];
			
		for (int j=i; j<=n; j++)
		a[k][j] -= factor * a[i][j];	
		}
	}
	vector<double> x(n);
	for (int i=n-1; i>=0; i--){
		x[i] = a[i][n];
	for(int j=i+1; j<n; j++)
	    x[i] -=a[i][j] * x[j];
		x[i] /= a[i][i];	
	}
	cout<<"\nSolution:\n";
	  for (int i=0; i<n; i++)
	cout<<"x"<<i+1<<"="<<x[i]<<"\n";
	return 0;
}
