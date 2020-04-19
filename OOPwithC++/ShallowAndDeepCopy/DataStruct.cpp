
#include <iostream>
#include "DataStruct.h"

DataStruct::DataStruct(int length_val, int height_val)
{
	std::cout << "base constructor called with length: " << length_val << " and height: " << "height_val" << std::endl;
	length = new int;
	*length = length_val;
	height = new int;
	*height = height_val;
}

//Copy constructor, SHALLOW copy! (If you run with this, the program crashes!) 
//DataStruct::DataStruct(const DataStruct& theOneBeingCopied)
//	: length{theOneBeingCopied.length}, height{theOneBeingCopied.height} //length and height are pointers!!!
//{
//	std::cout << "Copy constructor making shallow copy" << std::endl;
//}

//Copy constructor (DEEP copy)
DataStruct::DataStruct(const DataStruct& theonebeingcopied)
	: DataStruct{ *theonebeingcopied.length, *theonebeingcopied.height } //delegates initalization to constructor in line 5
{
	std::cout << "copy constructor making deep copy" << std::endl;
}

//Move constructor is used with R-values (temporary variables that don't have a name)
//'Steal' the data and then null out the source pointer (shallow copy + null the pointer)
DataStruct::DataStruct(DataStruct&& theOneBeingNulled) noexcept
	: length{theOneBeingNulled.length}, height{theOneBeingNulled.height}
{
	std::cout << "Move constructor is called for length " << *theOneBeingNulled.length << " and for height " << *theOneBeingNulled.height << std::endl;
	theOneBeingNulled.length = nullptr;
	theOneBeingNulled.height = nullptr;
}

//Destructor
DataStruct::~DataStruct()
{
	if (length != nullptr) {
		std::cout << "Destructor freeing data length: " << *length << std::endl;
	}
	if (height != nullptr) {
		std::cout << "Destructor freeing data height: " << *height << std::endl;
	}
	if (height == nullptr && length == nullptr) {
		std::cout << "Destructor freeing data for nullpointer" << std::endl;
	}
	delete length;
	delete height;
}

int DataStruct::get_length()
{
	return *length;
}

void DataStruct::set_length(int value)
{
	*length = value;
}

