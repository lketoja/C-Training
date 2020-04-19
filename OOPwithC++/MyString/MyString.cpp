#include "MyString.h"

MyString::MyString()
{
	str = new char[1];
	*str = '\0';
}

MyString::MyString(const char* stringLiteral)
{
	str = new char[std::strlen(stringLiteral) + 1];
	strcpy_s(str, 10, stringLiteral);
}

MyString::MyString(const MyString& source)
{
	str = new char[std::strlen(source.str)+1];
	strcpy_s(str, 10, source.str);
}

MyString::~MyString()
{
	delete [] str;
}

int MyString::getLength() const
{
	int count{0};
	char* copy = str;
	while (*copy != '\0') {
		copy++;
		count++;
	};
	return count;
}

const char* MyString::getStr() const
{
	return str;
}
