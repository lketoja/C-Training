#pragma once
#include <string>
#include <iostream>

class Player {

private:
	std::string name;
	int health;
	int experience;
public:
	//these two methods are implemented here, others in player.cpp
	std::string get_name() { return name; }
	int get_health(){ return health; }
	int get_experience() { return experience; }
	
	Player();
	Player(std::string name_val);
	Player(std::string name_val, int health_val, int xp_val);
	//If you can profide default values, one constructor is enough!!!
	//Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
	
	//Copy constructor. This is called when a player is passed by value to function display_player
	Player(const Player& source);

	//Destructor. This is called when we return from function display_player (copy of player goes out of scope
	//when stack frame for function is destroyed.)
	~Player() { std::cout << "Destructor called for: " << name << std::endl; }

	void set_health(int health_val);
	void set_name(std::string name_val);
	bool is_alive();
	void talk(std::string say_this);

};
