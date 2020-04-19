#pragma once
#include <string>
#include <iostream>
class Movie
{
private:
	std::string name;
	std::string rating;
	int watchedCount;
public:
	Movie(std::string name_val, std::string rating_val);
	Movie(std::string name_val, std::string rating_val, int watched);
	std::string getName();
	void incrementWatchedCountByOne();
	void display();

};

