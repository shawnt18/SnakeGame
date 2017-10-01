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
			if (j == 0 || j == width -1) {
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

void Board::SnakeMove(Snake snake) {

}