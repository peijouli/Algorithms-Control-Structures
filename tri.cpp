#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double x;
	double n;
	cout << "Please enter the degree you want";
	cin >> n;
	n = (n/180) *M_PI;
	
	
	
	for (int i =0; i <=30; i++){
		x = floor (i* tan(n));
		if (x>=20 && x<=30){x = 20;}
		for (int j = 0; j <= x; j++){
			cout << "*";
		} cout << endl;}
	



return 0;
}