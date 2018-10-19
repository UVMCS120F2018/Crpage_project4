//
// Created by Cecily Page on 10/18/18.
//

#include "MysticalSeaCreatures.h"
using namespace std;

MysticalSeaCreature:: MysticalSeaCreature(string a_name, mystical_power a_power, leg_type type_legs, int num_of_legs){
    name = a_name;
    power = a_power;
    legs = type_legs;
    num_legs = num_of_legs;
    iq.smartness = 50;
    iq.fights_won = 0;
    iq.fights_lost = 0;
}

MysticalSeaCreature ::MysticalSeaCreature(string a_name, mystical_power a_power) {
    name = a_name;
    power = a_power;
    legs = NONE;
    num_legs = nullopt;
}

mystical_power MysticalSeaCreature::get_power() {
    return power;
}

leg_type MysticalSeaCreature::get_leg_type() {
    return legs.value_or(NONE);
}

int MysticalSeaCreature::get_legs() {
    return legs.value_or(nullopt);
}

bool MysticalSeaCreature::get_is_dead() {
    return is_dead;
}

IQ MysticalSeaCreature::get_iq() {
    return iq;
}

string MysticalSeaCreature::get_name() const {
    return name;
}

int MysticalSeaCreature::get_smartness() const{
    return iq.smartness;
}

bool MysticalSeaCreature::is_tail() {
    return tail;
}

bool operator==(MysticalSeaCreature &msc1, MysticalSeaCreature &oct2) {
    return msc1.get_power() == oct2.get_power();
}

void operator+(MysticalSeaCreature &msc1, MysticalSeaCreature &msc2) {
    msc1.get_smarter();
    msc2.get_smarter();
}

void operator*(MysticalSeaCreature &msc1, MysticalSeaCreature &msc2){
    mystical_power power1 = msc1.get_power();
    mystical_power power2 = msc2.get_power();

    if (power1 > power2){
        msc1.win_fight();
        msc2.loose_fight();
    }else if (power2 > power1){
        msc2.win_fight();
        msc2.loose_fight();
    }else{
        msc1.it_was_a_tie();
        msc2.it_was_a_tie();
    }
}


ostream &operator<<(ostream &print, const MysticalSeaCreature &msc){
    print << "This is " << msc.get_name() << "." << endl;
    print << "Their iQ is:" << msc.get_smartness() << endl;
    print << msc.get_name() << "'s Mystical Power is that of " << msc.get_power << endl;

    return print;
}