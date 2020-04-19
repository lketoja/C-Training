#include <iostream>
#include <string>

using namespace std;

int main() {

	string letters;
	cout << "Enter a word: " << endl;
	cin >> letters;
	cout << endl;

	int length = letters.length();
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length - i - 1; j++) {
			cout << " ";
		}
		for (int j = 0; j < i; j++) {
			cout << letters.at(j);
		}
		cout << letters.at(i);
		for (int j = i - 1; j >= 0; j--) {
			cout << letters.at(j);
		}
		cout << endl;

	}

	return 0;

}