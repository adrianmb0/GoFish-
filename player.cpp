//
// Project Finished by Adrian Melo and David Fernandez
//

#include <iostream>
#include <string>
#include <vector>
#include "player.h"
#include "card.h"

using namespace std;

//Creates a generic player
Player::Player(){
    myName = "Default Player";
}

//adds a card to the hand
void Player::addCard(Card c){
    myHand.push_back(c);
}

void Player::bookCards(Card c1, Card c2){
    myBook.push_back(c1);
    myBook.push_back(c2);
}
//
////OPTIONAL
//// comment out if you decide to not use it
////this function will check a players hand for a pair.
////If a pair is found, it returns true and populates the two variables with the cards tha make the pair.
//bool Player::checkHandForBook(Card &c1, Card &c2){
//
//}
//
////OPTIONAL
//// comment out if you decide to not use it
////Does the player have a card with the same rank as c in her hand?
//bool Player::rankInHand(Card c) const{
//
//}
//
////uses some strategy to choose one card from the player's
////hand so they can say "Do you have a 4?"
//Card Player::chooseCardFromHand() const{
//
//}
//
////Does the player have the card c in her hand?
//bool Player::cardInHand(Card c) const{
//
//}
//
////Remove the card c from the hand and return it to the caller
//Card Player::removeCardFromHand(Card c){
//
//}
//
//string Player::showHand() const{
//
//}
//
//string Player::showBooks() const{
//
//}
//
//int Player::getHandSize() const{
//
//}
//
//int Player::getBookSize() const{
//
//}
//
////OPTIONAL
//// comment out if you decide to not use it
////this function will check a players hand for a pair.
////If a pair is found, it returns true and populates the two variables with the cards tha make the pair.
//
//bool checkHandForPair(Card &c1, Card &c2);
//
////OPTIONAL
//// comment out if you decide to not use it
////Does the player have a card with the same rank as c in her hand?
////e.g. will return true if the player has a 7d and the parameter is 7c
//
//bool sameRankInHand(Card c) const;