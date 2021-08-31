#include "Board.h"

#include <iostream>


Board::Board() {

	//Creates a empty board
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			board[i][j] = Pieces();

		}
	}


}

Board::~Board(){ }




void Board::placePiece(int row, int col) {


}


void Board::print(){



}