#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

void print_the_menu();
char read_user_input();
void do_what_user_wants(char, vector <int>);
vector <int> add_number(vector <int>);
void print_numbers(vector <int>);
void calculate_average(vector <int>);
void display_smallest(vector <int> numbers);

int main() {
	vector<int> numbers;
	while (true) {
		print_the_menu();
		char users_choice = read_user_input();
		if (users_choice == 'a') {
			numbers = add_number(numbers);
		}
		else {
			do_what_user_wants(users_choice, numbers);
		}
	}
}

void print_the_menu() {
	cout << "P - Print numbers" << endl;
	cout << "A - Add a number" << endl;
	cout << "M - Display average of the numbers" << endl;
	cout << "S - Display the smallest number" << endl;
	cout << "L - Display the largest number" << endl;
	cout << "Q - Quit" << endl;
}

char read_user_input() {
	char input;
	cin >> input;
	return tolower(input);
}

vector <int> add_number(vector <int> numbers) {
	int number {0};
	cout << "Enter the number you want to add to the list: ";
	cin >> number;
	numbers.push_back(number);
	return numbers;
}

void do_what_user_wants(char users_choice, vector <int> numbers) {
	switch (users_choice) {
	case 'p': 
		print_numbers(numbers);
		break;
	case 'm': 
		calculate_average(numbers); 
		break;
	case 's':
		display_smallest(numbers);
		break;
	case 'q':
		exit(0);
	default:
		cout << "Illegal character";
	}
}

void print_numbers(vector <int> numbers) {
	cout << "[";
	for (auto number : numbers)
		cout << number << " ";
	cout << "]";
}

void calculate_average(vector <int> numbers) {
	int sum{ 0 };
	for (auto number : numbers)
		sum += number;
	if (numbers.size() == 0)
		cout << "The list is empty!";
	cout << static_cast<double>(sum) / numbers.size();
}

void display_smallest(vector <int> numbers) {
	if (numbers.size() == 0) 
		cout << "The list is empty!";
	else {
		int smallest = numbers.at(0);
		for (int number : numbers) {
			if (number < smallest)
				smallest = number;
		}
		cout << "The smallest number is " << smallest << endl;
	}	
}

