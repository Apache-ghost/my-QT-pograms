#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

using namespace std;

// Define the possible ranks of cards
enum Rank {
    TWO = 2,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    JACK,
    QUEEN,
    KING,
    ACE
};

// Define a card as a combination of suit and rank
struct Card {
    char suit;
    Rank rank;
};

// Define a deck of cards as a vector of cards
using Deck = vector<Card>;

// Print the given card to the console
void printCard(const Card& card) {
    switch (card.rank) {
        case TWO:
            cout << "2";
            break;
        case THREE:
            cout << "3";
            break;
        case FOUR:
            cout << "4";
            break;
        case FIVE:
            cout << "5";
            break;
        case SIX:
            cout << "6";
            break;
        case SEVEN:
            cout << "7";
            break;
        case EIGHT:
            cout << "8";
            break;
        case NINE:
            cout << "9";
            break;
        case TEN:
            cout << "10";
            break;
        case JACK:
            cout << "J";
            break;
        case QUEEN:
            cout << "Q";
            break;
        case KING:
            cout << "K";
            break;
        case ACE:
            cout << "A";
            break;
    }

    cout << card.suit;
}

// Create a new deck of cards with all possible combinations of suits and ranks
Deck createDeck() {
    Deck deck;
    const char suits[] = { 'H', 'D', 'S', 'C' }; // Hearts, Diamonds, Spades, Clubs
    for (char suit : suits) {
        for (int rank = TWO; rank <= ACE; rank++) {
            deck.push_back({ suit, static_cast<Rank>(rank) });
        }
    }
    return deck;
}

// Shuffle the given deck of cards
void shuffleDeck(Deck& deck) {
    random_device rd;
    mt19937 gen(rd());
    shuffle(deck.begin(), deck.end(), gen);
}

int main() {
    // Create a new deck of cards and shuffle it
    Deck deck = createDeck();
    shuffleDeck(deck);

    // Print the shuffled deck to the console
    for (const Card& card : deck) {
        printCard(card);
        cout << " ";
    }
    cout << endl;

    return 0;
}