#include <iostream>
using namespace std;

int main() {
	int i{0}, j{0};
	
	for (i=1; i<=5; i++) {
		for (j=1; j<=5; j++) {
			if (i==j)
				cout << "*";
			else 
				cout << " ";
		}
		cout << "\n";
	}
}