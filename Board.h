#ifndef BOARD_H
#define BOARD_H

#include "Pieces.h"

class Board{
private:
	Pieces board[4][4];

public:
	Board();
	~Board();


	void placePiece(int row, int col);
	void print();


};



#endif //BOARD_H