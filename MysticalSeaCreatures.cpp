//
// Created by Cecily Page on 10/18/18.
//

#include "MysticalSeaCreatures.h"

MysticalSeaCreature:: MysticalSeaCreature(string a_name, mystical_power a_power, leg_type type_legs, int num_of_legs){
    name = a_name;
    power = a_power;
    legs = type_legs;
    num_legs = make_optional(num_of_legs);
    iq.smartness = 50;
    iq.fights_won = 0;
    iq.fights_lost = 0;
    is_dead = false;
}

//MysticalSeaCreature ::MysticalSeaCreature() : MysticalSeaCreature("Hank", ALWAYS_CORRECT, NULL, 0){
//
//}
mystical_power MysticalSeaCreature::get_power() {
    return power;
}

leg_type MysticalSeaCreature::get_leg_type() {
    return legs;
}

int MysticalSeaCreature::get_legs() {
    return num_legs.value_or(-50);
}

bool MysticalSeaCreature::get_is_dead() {
    return is_dead;
}

IQ MysticalSeaCreature::get_iq() {
    return iq;
}

string MysticalSeaCreature::get_name() {
    return name;
}

int MysticalSeaCreature::get_smartness() {
    return iq.smartness;
}

bool MysticalSeaCreature::is_tail() {
    return tail;
}

int MysticalSeaCreature::score() {
    int score;
    if(is_dead){
        score =0;
    }else{
        score = iq.smartness + iq.fights_won - iq.fights_lost;
    }
    return score;
}

void MysticalSeaCreature ::fatality() {
    is_dead = true;
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
        if(msc1.is_tail() == msc2.is_tail()){
            if(msc1.num_legs == msc2.num_legs){
                msc1.it_was_a_tie();
                msc2.it_was_a_tie();
            }else if(msc1.num_legs > msc2.num_legs){
                msc1.win_fight();
                msc2.loose_fight();
            }else{
                msc2.win_fight();
                msc1.loose_fight();
            }
        }else if(msc1.is_tail() & !msc2.is_tail()){
            msc1.win_fight();
            msc2.loose_fight();
        }else{
            msc2.win_fight();
            msc1.loose_fight();
        }
    }
}