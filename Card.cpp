#include "Suit.cpp"

class Card {
    public:
        Card(int value, Suit suit);
    private:
        int value;
        Suit suit;
}

Card::Card(int v, Suit s) {
    value = v;
    s = suit;
}