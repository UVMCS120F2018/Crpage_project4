//
// Created by Cecily Page on 10/19/18.
//

#include "Octopus.h"
using namespace std;

Octopus ::Octopus(): MysticalSeaCreature("Henry", TELEPATHY, TENTICLES, 8){}
Octopus ::Octopus(string a_name): MysticalSeaCreature(a_name, TELEPATHY, TENTICLES, 8) {}
Octopus ::Octopus(string a_name, mystical_power a_power) : MysticalSeaCreature(a_name,
        a_power, TENTICLES, 8) {}

void Octopus ::get_smarter() {
    iq.smartness += 1;
    cout << name << " just read a book on complex systems." <<endl;
}

void Octopus ::win_fight() {
    iq.smartness += 5;
    iq.fights_won += 1;
    cout << name << " Just Won! What A CHAMP!" <<endl;
}

void Octopus ::loose_fight() {
    iq.smartness -= 5;
    iq.fights_lost += 1;
    cout << name << " just lost... Awkward... " <<endl;
}

void Octopus ::it_was_a_tie() {
    iq.smartness +=1;
    cout << "It was a tie" << endl;
}