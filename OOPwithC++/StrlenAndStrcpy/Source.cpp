
#include <iostream>

int getLength(const char *merkkijono) {
	int counter{ 0 };
	while (*merkkijono != '\0') {
		counter++;
		merkkijono++;
	}
	return counter;
}

int main() {
	int* intPointer = new int;
	std::cout << intPointer << std::endl; 
	std::cout << *intPointer << std::endl;

	char* charPointer = new char;
	std::cout << charPointer << std::endl;
	std::cout << *charPointer << std::endl;

	char* namePtr = new char[15];
	strcpy_s(namePtr, 15,  "Ketoja");
	std::cout << "Printing namePtr: " << namePtr << std::endl;
	std::cout << getLength(namePtr) << std::endl;
	namePtr++;
	std::cout << namePtr << std::endl;
	std::cout << getLength(namePtr) << std::endl;

	char* dog = new char[10];
	std::cout << dog << std::endl;
	strcpy_s(dog, 10, "Ninni");
	std::cout << dog << std::endl;
	char* copy = dog;
	std::cout << copy << std::endl;


	char myName[]{"Karoliina"};
	std::cout << getLength(myName) << std::endl;
	std::cout << myName << std::endl; 
	//myName++; //cant do this

	std::cout << getLength("Lotta");
}