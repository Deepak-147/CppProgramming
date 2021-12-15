#include <iostream>
using namespace std;

int main() {
	int i{0}, j{0}, k{0}, l{1}, rows{0};
	cout << "Enter number of rows:" << "\n";
	cin >> rows;
	
	for (i=1; i<=rows; i++) {
		//Space loop
		for (j=rows-1; j>=i; j--) {
			cout << " ";
		}
		//Print loop
		for (k=1; k<=l; k++) {
			cout << "*";
		}
		l=l+2;
		cout << "\n";
	}
}