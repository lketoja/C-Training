#include <iostream>

using namespace std;

int main() {

	int cents{ 0 };

	cout << "Enter an amount in cents: ";
	cin >> cents;

	const int dollar_value{ 100 };
	const int quarter_value{ 50 };
	const int dime_value{ 10 };
	const int nickel_value{ 5 };

	int dollars = cents / dollar_value;
	int remainder = cents % dollar_value;

	int quarters = remainder / quarter_value;
	remainder = remainder % quarter_value;

	int dimes = remainder / dime_value;
	remainder = remainder % dime_value;

	int nickels = remainder / nickel_value;
	int pennies = remainder % nickel_value;

	cout << "You can provide change as follows:";
	cout << "\ndollars: " << dollars;
	cout << "\nquarters: " << quarters;
	cout << "\ndimes: " << dimes;
	cout << "\nnickels: " << nickels;
	cout << "\npennies: " << pennies;


	return 0;
}