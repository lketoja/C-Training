#include "Movie.h"

Movie::Movie(std::string name_val, std::string rating_val)
	: Movie{name_val, rating_val, 0}
{
}

Movie::Movie(std::string name_val, std::string rating_val, int watched)
	: name {name_val}, rating {rating_val}, watchedCount{watched}
{
}

std::string Movie::getName()
{
	return name;
}

void Movie::incrementWatchedCountByOne()
{
	watchedCount++;
}

void Movie::display()
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "Rating: " << rating << std::endl;
	std::cout << "Watched " << watchedCount << " times." << std::endl;
}
