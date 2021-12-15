#include <iostream>
#include <string>
using namespace std;

int main() {
	int i{0}, j{0}, k{0}, l{1}, length{0};
	string word;
	
	cin >> word;
	
	length = word.length();
	for (i=0; i<length; i++) {
		//Space loop
		for (j=length-1; j>i; j--) {
			cout << " ";
		}
		//Print loop
		for (k=0; k<l; k++) {
			if (k<=i) {
				cout << word[k];
			}
			else if (k>i) {
				cout << word[k - 2*(k-i)];
			}
		}
		l=l+2;
		cout << "\n";
	}
}