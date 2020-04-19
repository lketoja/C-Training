#pragma once
#include <cstring>
class MyString
{
private:
	char* str;	//pointer to a char[] that holds a C-style string
public:
	MyString();
	MyString(const char* stringLiteral);
	MyString(const MyString& source);	//copy constructor
	~MyString();
	void display() const;
	int getLength() const;
	const char* getStr() const;
};

