#include <iostream>
using namespace std;

int main() {
	int i{0}, j{0}, k{0}, rows{0};
	cout << "Enter number of rows:" << "\n";
	cin >> rows;
	
	for (i=0; i<rows; i++) {
		//Space loop
		for (j=rows-1; j>i; j--) {
			cout << " ";
		}
		//Print loop
		for (k=0; k<=i; k++) {
			cout << char('A'+k);
		}
		cout << "\n";
	}
}