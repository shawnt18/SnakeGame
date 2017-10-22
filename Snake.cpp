#include "Snake.h"


Snake::Snake() {
	currentX = 0;
	currentY = 0;
}

Snake::Snake(int height, int width) {
	currentX = static_cast<int>(width / 2);
	currentY = static_cast<int>(height / 2);
}

Snake::~Snake() {
}

void Snake::ChangeDirection(char key) {
	switch (key) {
	case 'a':
		direction = 2;	//	LEFT
		break;
	case 'w':
		direction = 1;	//	UP
		break;
	case 's':
		direction = 4;	//	DOWN
		break;
	case 'd':
		direction = 3;	//	RIGHT
		break;
	}
}

void Snake::setNewHead(int x, int y) {
	currentX += x;
	currentY += y;
}

int Snake::getX() {
	return currentX;
}

int Snake::getY() {
	return currentY;
}

int Snake::getDirection() {
	return direction;
}