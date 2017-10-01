#include <iostream>
using namespace std;
int main() {
	int x;
	cout << "Enter a poitive integer:";
	cin >> x;

	int counterTwos = 0;
	int counterThrees = 0;

	while (x%2 == 0 || x%3 ==0 ){
		if (x%2 ==0){
			counterTwos = counterTwos + 1;
			x = x /2;
		} else if(x % 3 == 0 ) {
			counterThrees++;
			x =x/3;
		}
     }

     if (x != 1) {
     	cout << "No";
     }
     else {
     		cout <<"Yes" << endl << "Twos=" << counterTwos << "Threes=" <<counterThrees <<endl;
     	}
     
     return 0;
 }

     


