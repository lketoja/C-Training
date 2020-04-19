#include "Player.h"
#include <iostream>

void display_player(Player player) {
	std::cout << "Name: " << player.get_name() << std::endl;
	std::cout << "Health: " << player.get_health() << std::endl;
	std::cout << "Experience: " << player.get_experience() << std::endl;
}

int main() {

	Player frank;
	Player lauri("Lauri");
	display_player(lauri);
	Player eino("Eino", 200, 1);

	Player enemy("Enemy");
	enemy.talk("I'm gonna get you!");
	enemy.set_health(100);
	std::cout << "Is enemy alive? " << enemy.is_alive();

	Player* lotta = new Player;
	(*lotta).set_name("lktuuk");
	lotta->set_health(100);
	display_player(*lotta);
	std::cout << "Onko lotta elossa?" << lotta->is_alive();
}