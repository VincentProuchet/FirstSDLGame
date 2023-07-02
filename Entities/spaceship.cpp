#include "spaceship.h"
#include <iostream>
SpaceShip::SpaceShip()
{
	//ctor
}

SpaceShip::~SpaceShip()
{
	//dtor
}
void SpaceShip::moveDown()
{
	std::cout << "down" << std::endl;
}
void SpaceShip::moveUp()
{
	std::cout << "up" << std::endl;
}

void SpaceShip::moveLeft()
{
	std::cout << "left" << std::endl;
}
void SpaceShip::moveRight()
{
	std::cout << "right" << std::endl;
}
void SpaceShip::shoot()
{
	std::cout << "firing" << std::endl;
}
