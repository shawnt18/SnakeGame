#pragma once
class Fruit
{
public:
	Fruit();
	Fruit(int height, int width);
	~Fruit();
	int getX();
	int getY();

private:
	int currentX;
	int currentY;
};

