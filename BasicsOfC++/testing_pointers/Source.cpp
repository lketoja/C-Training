#include <iostream>

using namespace std;


int main() {
	int* pointer = new int;
	*pointer = 10;
	cout << "pointer: " << pointer << endl;
	cout << "*pointer: " << *pointer << endl;
	cout << "sizeof pointer: " << sizeof(pointer) << endl;
	cout << "sizeof *pointer: " << sizeof(*pointer) << endl;

	cout << "sizeof longlong:" << sizeof(long long) << endl;
	long* long_pointer = new long[3];
	*long_pointer = 111111111;
	long_pointer[1] = 2222222;
	long_pointer[2] = 33333333;
	cout << long_pointer << endl;
	cout << long_pointer[1] << endl;
	cout << &long_pointer[1] << endl;
	cout << &long_pointer[2] << endl;
	cout << &long_pointer[3] << endl;
	long_pointer++;
	cout << *long_pointer << endl;

	int scores[]{ 85, 97, 69 };
	int* score_ptr{ scores };
	cout << scores << endl;
	cout << score_ptr << endl;

	cout << scores[2] << endl;
	cout << score_ptr[2] << endl;
	
	cout << &scores[2] << endl;
	cout << score_ptr + 2 << endl;

	cout << *(scores + 2) << endl;
	cout << *(score_ptr + 2) << endl;




}