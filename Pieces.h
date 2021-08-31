#ifndef PIECES_H
#define PIECES_H
class Pieces{
private:
	//The height of the piece
	bool tall; 
	bool small;

	//The color of the piece
	bool white; 
	bool black;

	//The top of the piece
	bool flat; 
	bool hole;

	//The shape of the piece
	bool square; 
	bool circle;

public:
	Pieces();
	~Pieces();

	void setPiece(int i);
	void printPiece();

	bool compareHeight(Pieces p_);
	bool compareColor(Pieces p_);
	bool compareTop(Pieces p_);
	bool compareShape(Pieces p_);

};

#endif 