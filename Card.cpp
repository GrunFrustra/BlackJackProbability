#include "Card.h"
#include <iostream>
enum Suit {CLUB, HEART, DIAMOND, SPADE};
enum Value {TWO, THREE, FOUR, FIVE, SIX ,SEVEN ,EIGHT, NINE, TEN, JACK, QUEEN, KING, ACE};
Card::Card() :
	suit(0),
	value(0)
{ }

Card::Card(int cardSuit, int cardValue) :
	suit(cardSuit),
	value(cardValue)
{ }

Card& Card::operator=(const Card & rhs){
	if (this == &rhs){
		return *this;
	}
	suit = rhs.suit;
	value = rhs.value;
}

void Card::printCard() {
	std::cout << value << " of " << suit << std::endl;
}