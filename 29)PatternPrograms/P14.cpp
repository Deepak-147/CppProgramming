#include <iostream>
using namespace std;

int main() {
	int i{0}, j{0}, rows{0};
	cout << "Enter number of rows:" << "\n";
	cin >> rows;
	
	for (i=0; i<rows; i++) {
		for (j=rows-i; j>0; j--) {
			cout << "*";
		}
		cout << "\n";
	}
}