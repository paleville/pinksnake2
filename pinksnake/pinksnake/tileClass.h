#pragma once
#include <SFML/Graphics.hpp>



class tileClass
{

public:

	bool isPassable; //es traspasable
	bool isExit; //es salida

	sf::Vector2f pos; //position
	sf::Texture texture; //textura
	sf::Sprite sprite; //sprite

	tileClass(std::string texName, float x, float y, bool passable, bool exit);
	bool setUpSprite(std::string texName);
};

