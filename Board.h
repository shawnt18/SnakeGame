#pragma once
#include "Snake.h"
#include "Fruit.h"
class Board
{
public:
	Board();	// Should never be called
	Board(int max_height, int max_width);
	~Board();
	void Draw();
	void SnakeMove(Snake& snake);
	void newFruit(Fruit fruit);

private:
	int height;
	int width;

	char ** board;
};