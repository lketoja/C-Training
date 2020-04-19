#include "Player.h"
#include <iostream>

//Player::Player() 
//	: name{ "None" }, health{ 100 }, experience{ 3 }{
//}
//
//Player::Player(std::string name_val) 
//	: name{ name_val }, health{ 100 }, experience{ 3 }{
//}

Player::Player(std::string name_val, int health_val, int xp_val)
	: name{ name_val }, health{ health_val }, experience{ xp_val }{
	std::cout << "Three-args constructor" << std::endl;
}

//We can delegate initialization to three-args constructor (above)
//This only works with initialization lists. One can't call other constructors from the body.
//If you can use default values (provide them in Player.h), you can acually remove these!
Player::Player()
	: Player {"None", 0, 0 }{
		std::cout << "No-args constructor" << std::endl;
}

Player::Player(std::string name_val)
	: Player{ name_val, 0, 0 } {
		std::cout << "One-arg constructor" << std::endl;
}

//Copy constructor
Player::Player(const Player& source)
	: Player {source.name, source.health, source.experience }{
	std::cout << "Copy constructor - made copy of: " << source.name << std::endl;
}
	
void Player::set_health(int health_val)
{
	health = health_val;
}

void Player::set_name(std::string name_val)
{
	name = name_val;
}

bool Player::is_alive()
{
	return health>0;
}

void Player::talk(std::string say_this)
{
	std::cout << say_this << std::endl;
}
