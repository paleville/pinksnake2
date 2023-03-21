#include "tileClass.h"

tileClass::tileClass(std::string texName, float x, float y, bool passable, bool exit)
{


	if (!setUpSprite(texName))
	{
		return;
	}


	pos = sf::Vector2f(x, y);
	sprite.setPosition(pos);

	isPassable = passable;
	isExit = exit;

}

bool tileClass::setUpSprite(std::string texName)
{
	if (!texture.loadFromFile(texName))
	{
		return false;
	}
	
	texture.setSmooth(true); //se suaviza los bordes de sierra
	sprite.setTexture(texture);	
	sprite.setTextureRect(sf::IntRect(0, 0, 16, 16));

	return true;
}
