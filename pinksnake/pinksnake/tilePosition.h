#pragma once
#include "tileClass.h"
#include <vector>


class tilePosition
{
	sf::Vector2i exitPos;
	sf::Vector2i playerPos;
	//std::vector<sf::Vector2i> enemyPositions;

	void setupInitializeSate();
	void setupEnemyPositions();
	void setupTiles();


public:
	std::vector < std::vector<tileClass*>> tiles;

	int gridLenght; //longitud de cuadricula

	tilePosition(); //constructor

};

