#pragma once
class Snake
{
public:
	Snake();
	Snake(int height, int width);
	~Snake();
	void ChangeDirection(char key);
	int getX();
	int getY();

private:
	// Current head x and y positions
	int currentX;
	int currentY;
	enum eDirection {STOP = 0, LEFT, RIGHT, UP, DOWN};
	eDirection direction;
};

