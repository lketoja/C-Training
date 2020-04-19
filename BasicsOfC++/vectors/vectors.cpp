#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector <int> vector1;
	vector <int> vector2;

	vector1.push_back(10);
	vector1.push_back(20);

	cout << "second item in vector1: " << vector1.at(1);
	cout << "\nThe size of vector1: " << vector1.size();

	vector2.push_back(100);
	vector2.push_back(200);

	vector <vector<int>> vector_2d;
	

	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);

	cout << "\n00 element of vector_2d is: " << vector_2d.at(0).at(0);
	cout << "\n01 element of vector_2d is: " << vector_2d.at(0).at(1);
	cout << "\n10 element of vector_2d is: " << vector_2d.at(1).at(0);
	cout << "\n11 element of vector_2d is: " << vector_2d.at(1).at(1);

	vector1.at(0) = 1000;

	cout << "\n00 element of vector_2d is: " << vector_2d.at(0).at(0);

	

	return 0;


}