#include <iostream>
using namespace std;

int main() {
	int i{0}, j{0}, rows{0}, columns{0};
	cout << "Enter number of rows:" << "\n";
	cin >> rows;
	cout << "Enter number of columns:" << "\n";
	cin >> columns;
	
	for (i=0; i<rows; i++) {
		for (j=columns-1; j>=0; j--) {
			cout << char('A'+j);
		}
		cout << "\n";
	}
}