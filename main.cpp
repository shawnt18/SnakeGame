// Author: Shawn Thai
// Last Modified: Sept 10, 2017
// Simple snake game with the following rules and specifications:
//		1. Points: Each second +10 points.
//		2. Each fruit +1000 points.
//		3. Bombs appear on the gameboard. Picking up a bomb removes 3 pixels off the snake. If the snake is too short, GAME OVER.
//		   2 Bombs will spawn for each fruit and each bomb is 4 spaces big.
//		   Picking up a bomb -2000 points.

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include "Board.h"
#include "Snake.h"
#include "Fruit.h"
#include "Bomb.h"
using namespace std;

// HEADER FUNCTIONS
void runGame();
void update(Board& gameBoard, Snake& snake, bool& noFruit);
void render();
void clearScreen();

// GLOBAL CONSTANTS
const int BOARD_HEIGHT = 20;
const int BOARD_WIDTH = 40;

// MAIN PROGRAM
int main() {
	int response = 0;

	cout << "~~~SNAKE GAME~~~" << endl;
	cout << "1. Start Game" << endl << "2. Quit" << endl;

	cin >> response;
	if (response == 1) {
		runGame();	// Game starts here
	}
	else if (response == 2) {
		return 2;
	}
	else {
		cout << "Invalid response. Exiting program." << endl;
		return -1;
	}
}

// FUNCTIONS
void runGame() {
	bool gameOver = false;
	bool noFruit = true;

	Board gameBoard = Board(BOARD_HEIGHT, BOARD_WIDTH);
	Snake snake = Snake(BOARD_HEIGHT, BOARD_WIDTH);

	while (!gameOver) {
		clearScreen();
		gameBoard.Draw();
		if (_kbhit()) {
			snake.ChangeDirection(_getch());
		}
		update(gameBoard, snake, noFruit);	// Call-by-ref function
	}
}

void update(Board& gameBoard, Snake& snake, bool& noFruit) {
	gameBoard.SnakeMove(snake);

	if (noFruit) {
		Fruit fruit = Fruit(BOARD_HEIGHT, BOARD_WIDTH);
		gameBoard.newFruit(fruit);
		noFruit = false;
	}
}

void render() {

}

void clearScreen() {
	system("cls");
}