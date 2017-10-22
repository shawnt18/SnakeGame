#pragma once
class Snake
{
public:
	Snake();
	Snake(int height, int width);
	~Snake();
	void ChangeDirection(char key);
	void setNewHead(int x, int y);
	int getX();
	int getY();
	int getDirection();

private:
	// Current head x and y positions
	int currentX;
	int currentY;
	int direction;	// 1: UP	 2:LEFT		3:RIGHT		4: DOWN
};
