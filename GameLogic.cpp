#include <iostream>
#include "Blackjack.h"

Player dealer;
Player player;

dealerPlay() {
    if (dealer.getTotal > 17) {

    } else {
        dealer.cards.push_back(deck.pop_back());
        dealerPlay();
    }
}

displayStatus()
{
    cout << "Dealer shows: " << dealer.hand[1] << endl;
    cout << "You have: " << player.printHand() << endl;
    if (player.getTotal() > 21)
    {
        cout << "You lose!";

    } else if (player.getTotal() == 21)
    {
        dealerPlay();   
    } else
    {
        cout << "Moves:" << endl;
        cout << "1. Draw" << endl;
        cout << "2. Stand" << endl;
    }
}
getMove()
{
    int move;
    cin >> move;
}

deal()
{
    Deck d;

    dealer.hand.push_back(d.pop_back);
    player.hand.push_back(d.pop_back);
    dealer.hand.push_back(d.pop_back);
    player.hand.push_back(d.pop_back);
    displayStatus();
    getMove();
}