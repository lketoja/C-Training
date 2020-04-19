#include "Movies.h"
#include <iostream>

std::vector<Movie> Movies::getMovies()
{
	return movies;
}

void Movies::addMovie(std::string name, std::string rating, int watched)
{
	for (Movie movie : movies) {
		if (name.compare(movie.getName())==0) {
			std::cout << "Movie is already in the list!" << std::endl;
			return;
		}
	}
	movies.push_back(Movie{ name, rating, watched });
}

void Movies::incrementWatchedCount(std::string name)
{
	for (size_t i = 0; i < movies.size(); i++) {
		if (name.compare(movies.at(i).getName())==0) {
			movies.at(i).incrementWatchedCountByOne();
			return;
		}
	}
	std::cout << "Couldn't find a movie with that name!" << std::endl;
}

void Movies::displayMovies()
{
	for (Movie movie : movies) {
		movie.display();
		std::cout << std::endl;
	}
}
