#pragma once
#include "State.h"
#include "entityClass.h"
#include "playerClass.h"
#include "tilePosition.h"


class GameState : public State
{
public:
	GameState();
	GameState(sf::RenderWindow* window);
	virtual ~GameState();



	void endState() override;
	void update(const float& dt) override;
	void render(sf::RenderWindow* window);

	static const int H = 23;
	static const int W = 81;
	static const char map[H][W];

	////Getters and Setters
	//static int getter_i();
	//static int getter_j();

	//static void setter_i(int i_value);
	//static void setter_j(int j_value);
	



	inline static int i = 0;
	inline static int j = 0;

	
	


	entityClass ent;
	tilePosition tp;

};

