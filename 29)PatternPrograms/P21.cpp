#include <iostream>
using namespace std;

int main() {
	int i{0}, j{0}, k{0}, rows{0};
	cout << "Enter number of rows:" << "\n";
	cin >> rows;
	for (i=rows; i>0; i--) {
		//Space loop
		for (j=rows; j>i; j--) {
			cout << " ";
		}
		//Print loop
		for (k=0; k<i; k++) {
			cout << "*";
		}
		cout << "\n";
	}
}