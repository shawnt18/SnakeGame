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

void Snake::ChangeDirection(char key){
	switch (key) {
	case 'a':
		direction = LEFT;
		break;
	case 'w':
		direction = UP;
		break;
	case 's':
		direction = DOWN;
		break;
	case 'd':
		direction = RIGHT;
		break;
	}
}

int Snake::getX() {
	return currentX;
}

int Snake::getY() {
	return currentY;
}