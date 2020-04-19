#include <iostream>
#include "DataStruct.h"
#include <vector>

void display_data(DataStruct data_struct ) {
	std::cout << "Height: " << data_struct.get_height() << std::endl;
	std::cout << "Length : " << data_struct.get_length() << std::endl;
}

int main() {
	std::cout << "Size of a DataStruct object is: " << sizeof(DataStruct) << std::endl;

	std::vector<DataStruct> rooms;

	rooms.push_back(DataStruct{ 11,12 });
	//std::cout << &rooms.at(0) << std::endl;
	rooms.push_back(DataStruct{ 30, 40 });
	//std::cout << &rooms.at(0) << std::endl;
	//std::cout << &rooms.at(1) << std::endl;
	rooms.push_back(DataStruct{ 50,60 });
	//std::cout << &rooms.at(0) << std::endl;
	//std::cout << &rooms.at(1) << std::endl;
	//std::cout << &rooms.at(2) << std::endl;
	rooms.push_back(DataStruct{ 70,80 });
	//std::cout << &rooms.at(0) << std::endl;
	//std::cout << &rooms.at(1) << std::endl;
	//std::cout << &rooms.at(2) << std::endl;
	//std::cout << &rooms.at(3) << std::endl;
	/*DataStruct living_room{ 6, 7 };
	display_data(living_room);

	DataStruct bedroom{ living_room };
	display_data(bedroom);
	display_data(living_room);
	*/
}