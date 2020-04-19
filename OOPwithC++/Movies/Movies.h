#pragma once
#include "Movie.h"
#include <vector>
#include <iostream>

class Movies
{
private:
	std::vector<Movie> movies; 
public:
	std::vector<Movie> getMovies();
	void addMovie(std::string name, std::string rating, int watched);
	void incrementWatchedCount(std::string name);
	void displayMovies();
};

