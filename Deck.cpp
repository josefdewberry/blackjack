#include <iostream>
#include "Card.cpp"
#include "Suit.cpp"

using namespace std;
class Deck {
    public:
        Card draw();
        Deck();

    private:
        std::deque<Card> cards;
}

Deck::Deck() {
    cout << "Building deck with 52 individual cards" << endl;
    for (int i = 0; i < 52; i++) {
        switch(i / 13) {
            case 0 :
                cards.push_front(Card((i % 12) + 1), Suit clubs));
            case 1 :
                cards.push_front(Card((i % 12) + 1), Suit diamonds));
            case 2 :
                cards.push_front(Card((i % 12) + 1), Suit hearts));
            case 3 :
                cards.push_front(Card((i % 12) + 1), Suit spades));
        }

    }

    std::random_shuffle(cards.begin(), cards.end());
}

Card Deck::Draw() {
    if (cards.size() > 0) {
        return cards.pop_front();
    }
    return null;
}