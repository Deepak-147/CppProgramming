#include <iostream>
using namespace std;

int main() {
	int i{0}, j{0}, rows{0}, columns{0};
	cout << "Enter number of rows:" << "\n";
	cin >> rows;
	cout << "Enter number of columns:" << "\n";
	cin >> columns;
	
	for (i=rows; i>0; i--) {
		for (j=0; j<columns; j++) {
			cout << i;
		}
		cout << "\n";
	}
}