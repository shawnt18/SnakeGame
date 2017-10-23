#include "Fruit.h"
#include <stdlib.h>

Fruit::Fruit()
{
	currentX = 0;
	currentY = 0;
}

Fruit::Fruit(int height, int width) {
	currentX = rand() % width;
	currentY = rand() % height;
}

Fruit::~Fruit()
{
}

int Fruit::getX() {
	return currentX;
}

int Fruit::getY() {
	return currentY;
}