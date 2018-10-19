//
// Created by Cecily Page on 10/19/18.
//

#include "Narwall.h"

Narwall::Narwall() :MysticalSeaCreature("Amy", SPARKLES, FINS, 2){}
Narwall::Narwall(string a_name) :MysticalSeaCreature(a_name, SPARKLES, FINS, 2){}
Narwall::Narwall(string a_name, mystical_power a_power) : MysticalSeaCreature(a_name, a_power, FINS, 2) {}

void Narwall ::get_smarter() {
    iq.smartness += 3;
    cout << name << " Just Learned to do a new gymnastics trick! Wow! That's Cool!"<< endl;
}

void Narwall ::win_fight() {
    iq.smartness += 3;
    iq.fights_won += 1;
    cout << name << " Just Won! What A CHAMP!" <<endl;
}

void Narwall ::loose_fight() {
    iq.smartness -= 3;
    iq.fights_lost += 1;
    cout << name << " just lost... Awkward... " <<endl;
}

void Narwall ::it_was_a_tie() {
    iq.smartness +=2;
    cout << "It was a tie" << endl;
}