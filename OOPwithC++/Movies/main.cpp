#include "Movies.h"

int main() {
	Movies movies{};
	movies.addMovie( "Green Day", "GP", 1);
	movies.incrementWatchedCount("Green Day");
	movies.displayMovies();
	movies.addMovie("Titanic", "R", 9);
	movies.addMovie("Green Day", "GP-13", 22);
	movies.displayMovies();
	movies.incrementWatchedCount("Not Exists");
}