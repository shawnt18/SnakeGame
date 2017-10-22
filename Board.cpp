#include "Board.h"
#include <iostream>
using namespace std;

Board::Board() {	// Should never be called
	height = 0;
	width = 0;
}

Board::Board(int max_height, int max_width) {
	height = max_height;
	width = max_width;
	board = new char*[height];

	for (int i = 0; i < height; i++) {
		board[i] = new char[width];

		for (int j = 0; j < width; j++) {
			if (j == 0 || j == width - 1) {
				board[i][j] = 'X';
			}
			else if (i == 0 || i == height - 1) {
				board[i][j] = 'X';
			}
			else {
				board[i][j] = ' ';
			}
		}
	}
	board[height / 2][width / 2] = 'O';		// Place snake head
}


Board::~Board() {
	for (int i = 0; i < height; i++) {
		delete[] board[i];
	}
	delete[] board;
}

void Board::Draw() {
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			cout << board[i][j];
		}
		cout << endl;
	}
}

void Board::SnakeMove(Snake& snake) {
	int dir = snake.getDirection();
	int x = snake.getX();
	int y = snake.getY();
	int dx = 0;
	int dy = 0;

	switch (dir) {
	case 1:
		dy = -1;
		break;
	case 2:
		dx = -1;
		break;
	case 3:
		dx = 1;
		break;
	case 4:
		dy = 1;
		break;
	}
	
	// if statement here, checking snake length, in which case we leave the snake tail bits alone

	board[y][x] = ' ';
	board[y + dy][x + dx] = 'O';
	snake.setNewHead(dx, dy);
}