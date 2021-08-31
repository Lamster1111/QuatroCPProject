#include "Pieces.h"
#include <iostream>

using namespace std;

Pieces::Pieces() { //Default empty piece
	tall = small = white = black = flat = hole = square = circle = false;
}


Pieces::~Pieces() {}


void Pieces::setPiece(int i) {
	switch (i) {
	case 0:
		//Tall, white, flat, square
		tall = true;
		white = true;
		flat = true;
		square = true;

		small = false;
		black = false;
		hole = false;
		circle = false;
		break;
	case 1:
		//short, white, flat, square
		tall = false;
		white = true;
		flat = true;
		square = true;

		small = true;
		black = false;
		hole = false;
		circle = false;
		break;
	case 2:
		//Tall, black, flat, square
		tall = true;
		white = false;
		flat = true;
		square = true;

		small = false;
		black = true;
		hole = false;
		circle = false;
		break;
	case 3:
		//Tall, white, hole, square
		tall = true;
		white = true;
		flat = false;
		square = true;

		small = false;
		black = false;
		hole = true;
		circle = false;
		break;
	case 4:
		//Tall, white, flat, circle
		tall = true;
		white = true;
		flat = true;
		square = false;

		small = false;
		black = false;
		hole = false;
		circle = true;
		break;
	case 5:
		//short, black, flat, square
		tall = false;
		white = false;
		flat = true;
		square = true;

		small = true;
		black = true;
		hole = false;
		circle = false;
		break;
	case 6:
		//Tall, black, hole, square
		tall = true;
		white = false;
		flat = false;
		square = true;

		small = false;
		black = true;
		hole = true;
		circle = false;
		break;
	case 7:
		//Tall, white, hole, circle
		tall = true;
		white = true;
		flat = false;
		square = false;

		small = false;
		black = false;
		hole = true;
		circle = true;
		break;
	case 8:
		//short, white, hole, square
		tall = false;
		white = true;
		flat = false;
		square = true;

		small = true;
		black = false;
		hole = true;
		circle = false;
		break;
	case 9:
		//short, white, flat, circle
		tall = false;
		white = true;
		flat = true;
		square = false;

		small = true;
		black = false;
		hole = false;
		circle = true;
		break;
	case 10:
		//Tall, black, flat, circle
		tall = true;
		white = false;
		flat = true;
		square = false;

		small = false;
		black = true;
		hole = false;
		circle = true;
		break;
	case 11:
		//short, black, hole, square
		tall = false;
		white = false;
		flat = false;
		square = true;

		small = true;
		black = true;
		hole = true;
		circle = false;
		break;
	case 12:
		//Tall, black, hole, circle
		tall = true;
		white = false;
		flat = false;
		square = false;

		small = false;
		black = true;
		hole = true;
		circle = true;
		break;
	case 13:
		//short, white, hole, circle
		tall = false;
		white = true;
		flat = false;
		square = false;

		small = true;
		black = false;
		hole = true;
		circle = true;
		break;
	case 14:
		//short, black, flat, circle
		tall = false;
		white = false;
		flat = true;
		square = false;

		small = true;
		black = true;
		hole = false;
		circle = true;
		break;
	case 15:
		//Short, black, hole, circle
		tall = false;
		white = false;
		flat = false;
		square = false;

		small = true;
		black = true;
		hole = true;
		circle = true;
		break;

	default:
		tall, small, white, black, flat, hole, square, circle = false;
		std::cout << "Too many pieces error";
		break;




	}

}


void Pieces::printPiece() {				//Note fix later!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	//Print the color first
	if (white) {
		cout << "W";
	}
	else {
		cout << "B";
	}
	// Then the height
	if (tall) { cout << "T"; }

	//Shape
	if (square) { cout << "S"; }
	else { cout << "C"; }
	//Top
	if (flat) { cout << "|"; }
	else { cout << "O"; }
}



//Next four functions, Compares the pieces
bool Pieces::compareHeight(Pieces p_) {
	if (tall && p_.tall) return true;
	if (small && p_.small) return true;
	return false;
}

bool Pieces::compareColor(Pieces p_) {			//Note fix later!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	if (white != p_.white) return false;
	return true;
}

bool Pieces::compareTop(Pieces p_) {			//Note fix later!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	if (flat != p_.flat) return false;
	return true;
}

bool Pieces::compareShape(Pieces p_) {			//Note fix later!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	if (square != p_.square) return false;
	return true;
}