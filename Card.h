#include <iostream>
class Card{
public:
	Card(const int, const int);
	Card();
	int getSuit() { return suit; }
	int getValue() { return value; }
	void printCard();
	Card& operator=(const Card & rhs);
private:
	int suit;
	int value;
};