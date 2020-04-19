#pragma once
class DataStruct
{
private:
	int* length;
	int* height;
	
public:
	DataStruct(int number1, int number2);
	DataStruct(const DataStruct& theOneBeingCopied);
	DataStruct(DataStruct&& theOneBeingNulled) noexcept;
	~DataStruct();
	int get_length();
	void set_length(int value);
	int get_height() { return *height; }
	void set_height(int value) { *height= value; }


};

