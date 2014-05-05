#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include "Card.h"
int main(int argc, char *argv[]){
	int numOfDecks = atoi(argv[1]);
	srand(time(0));
	int randomSeed = std::rand() % 5;

	std::vector<Card> deck;
	for (int x = 0; x < numOfDecks; x++){
		for (int i = 1; i <= 4; i++){
			for (int j = 1; j <= 13; j++){
				Card c(i, j);
				deck.push_back(c);
			}
		}
	}
	std::random_shuffle(deck.begin(), deck.end());

	int handCount = 0;
	int blackjackCount = 0;
	for (int t = 0; t < deck.size(); t+=2){
		//Determine if an Ace exists in the hand.
		if (deck[t].getValue() == 1 || deck[t + 1].getValue() == 1){
			//Determine if a ten or higher exists in the hand.
			if (deck[t].getValue() >= 10 || deck[t + 1].getValue() >= 10){
				blackjackCount++;
			}
		}
		handCount++;
	}

	std::cout << "Hands drawn: " << handCount << std::endl;
	std::cout << "Number of blackjack hands: " << blackjackCount << std::endl;

	std::cin.get();
	return 0;
}