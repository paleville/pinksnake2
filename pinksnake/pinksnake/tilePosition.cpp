#include "tilePosition.h"

void tilePosition::setupInitializeSate()
{
	exitPos = sf::Vector2i(1, 0); 
	playerPos = sf::Vector2i(gridLenght - 1, gridLenght - 1); //se suppone que el payer debe aparecer en la esquina inferior derecha

	//setupEnemyPositions();
	setupTiles();
}

void tilePosition::setupEnemyPositions()
{
	/*enemyPositions.clear();
	enemyPositions.push_back(sf::Vector2i(0, 2));
	enemyPositions.push_back(sf::Vector2i(6, 2));
	enemyPositions.push_back(sf::Vector2i(2, 7));*/
}

void tilePosition::setupTiles() //configurar baldosas
{
	tiles.clear(); //limpiamos el dibujo, o visor/screen
	std::vector<tileClass*> firstRow; //primera fila
	firstRow.push_back(new tileClass("grassTex.png", 0, 0, false, false));
	firstRow.push_back(new tileClass("grassTex.png", 16, 0, false, false));
	firstRow.push_back(new tileClass("grassTex.png", 32, 0, false, false));
	firstRow.push_back(new tileClass("grassTex.png", 48, 0, false, false));
	firstRow.push_back(new tileClass("grassTex.png", 64, 0, false, false));
	firstRow.push_back(new tileClass("grassTex.png", 80, 0, false, false));
	tiles.push_back(firstRow);

	std::vector<tileClass*> secondRow;
	secondRow.push_back(new tileClass("grassTex.png", 0, 16, false, false));
	secondRow.push_back(new tileClass("grassTex.png", 16, 16, false, false));
	secondRow.push_back(new tileClass("grassTex.png", 32, 16, false, false));
	secondRow.push_back(new tileClass("grassTex.png", 48, 16, false, false));
	secondRow.push_back(new tileClass("grassTex.png", 64, 16, false, false));
	secondRow.push_back(new tileClass("grassTex.png", 80, 16, false, false));
	tiles.push_back(secondRow);

	std::vector<tileClass*> thirdRow;
	thirdRow.push_back(new tileClass("grassTex.png", 0, 32, false, false));
	thirdRow.push_back(new tileClass("grassTex.png", 16, 32, false, false));
	thirdRow.push_back(new tileClass("grassTex.png", 32, 32, false, false));
	thirdRow.push_back(new tileClass("grassTex.png", 48, 32, false, false));
	thirdRow.push_back(new tileClass("grassTex.png", 64, 32, false, false));
	thirdRow.push_back(new tileClass("grassTex.png", 80, 32, false, false));
	tiles.push_back(thirdRow);

	std::vector<tileClass*> fourthtRow;
	fourthtRow.push_back(new tileClass("grassTex.png", 0, 48, false, false));
	fourthtRow.push_back(new tileClass("grassTex.png", 16, 48, false, false));
	fourthtRow.push_back(new tileClass("grassTex.png", 32, 48, false, false));
	fourthtRow.push_back(new tileClass("grassTex.png", 48, 48, false, false));
	fourthtRow.push_back(new tileClass("grassTex.png", 64, 48, false, false));
	fourthtRow.push_back(new tileClass("grassTex.png", 80, 48, false, false));
	tiles.push_back(fourthtRow);

	std::vector<tileClass*> fifthRow;
	fifthRow.push_back(new tileClass("grassTex.png", 0, 64, false, false));
	fifthRow.push_back(new tileClass("grassTex.png", 16, 64, false, false));
	fifthRow.push_back(new tileClass("grassTex.png", 32, 64, false, false));
	fifthRow.push_back(new tileClass("grassTex.png", 48, 64, false, false));
	fifthRow.push_back(new tileClass("grassTex.png", 64, 64, false, false));
	fifthRow.push_back(new tileClass("grassTex.png", 80, 64, false, false));
	tiles.push_back(fifthRow);

	std::vector<tileClass*> sixthdRow;
	sixthdRow.push_back(new tileClass("grassTex.png", 0, 80, false, false));
	sixthdRow.push_back(new tileClass("grassTex.png", 16, 80, false, false));
	sixthdRow.push_back(new tileClass("grassTex.png", 32, 80, false, false));
	sixthdRow.push_back(new tileClass("grassTex.png", 48, 80, false, false));
	sixthdRow.push_back(new tileClass("grassTex.png", 64, 80, false, false));
	sixthdRow.push_back(new tileClass("grassTex.png", 80, 80, false, false));
	tiles.push_back(sixthdRow);


}

tilePosition::tilePosition()
{

	gridLenght = 6;
	setupInitializeSate();
}
