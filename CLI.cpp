#include <iostream>
#include "Blackjack.h"

using namespace std;

int main() 
{
    Deck d;
    
    for (int i = 0; i < d.cards.size(); i++) {
        cout << "Cards: " << d.cards[i].value << " " << d.cards[i].suit << endl;
    }
    cout << "We did it!" << endl;
}