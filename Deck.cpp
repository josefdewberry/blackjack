#include <vector>
#include <iostream>
#include "Blackjack.h"

#define DECK_SIZE 52

using namespace std;

Deck::Deck()
        {
            for (int i = 1; i <= DECK_SIZE; i++)
            {

                int remainder = (i - 1) / 13;
                if (remainder == 0) 
                {
                    cards.push_back(Card(i, Suit(CLUBS)));
                } else if (remainder == 1) 
                {
                    cards.push_back(Card(i - 13, Suit(DIAMONDS)));
                } else if (remainder == 2) 
                {
                    cards.push_back(Card(i - 26, Suit(HEARTS)));
                } else if (remainder == 3) 
                {
                    cards.push_back(Card(i - 39, Suit(SPADES)));
                }
            }
        }