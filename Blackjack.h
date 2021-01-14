#ifndef BLACKJACK_H
#define BLACKJACK_H

#include <vector>

enum Suit { CLUBS, DIAMONDS, HEARTS, SPADES };

struct Card
{
    int value;
    Suit suit;

    Card(int value, Suit suit);
};

class Deck
{
    public:
        std::vector<Card> cards;

        Deck();
};

#endif