//
// Created by Cecily Page on 10/18/18.
//

#ifndef CRPAGE_PROJECT4_SEACREATURES_H
#define CRPAGE_PROJECT4_SEACREATURES_H

#include <optional>
#include <vector>
#include <string>

namespace Mystical{
    enum leg_type{FINS, TENTICLES, CLAWS, NONE};
        struct IQ {
            int smartness;
            int fights_won;
            int fights_lost;
    };
    enum mystical_power{INVISABILITY, TELEPATHY, SPARKLES, ALWAYS_CORRECT, MIND_CONTROL};

};
using namespace Mystical;
using namespace std;

class MysticalSeaCreature {
protected:
    string name;
    bool tail;
    mystical_power power;
    IQ iq;
    optional<leg_type>legs;
    optional<int> num_legs;
    bool is_dead;

public:
    MysticalSeaCreature(string a_name, mystical_power a_power, leg_type type_legs, int num_of_legs);
    MysticalSeaCreature(string a_name, mystical_power a_power);

    /*GETTERS*/
    mystical_power get_power();
    leg_type get_leg_type();
    int get_legs();
    bool get_is_dead();
    IQ get_iq();
    bool is_tail();
    string get_name() const;
    int get_smartness() const;

    /*SETTERS*/

    /*METHODS*/
    //Because these are all different for every subclass.
    //I'm not going to write RMEs for them. Because that would make no sense.
    //Plus, their names kind of make sense.
    virtual void get_smarter() = 0;
    virtual void win_fight() = 0;
    virtual void loose_fight() = 0;
    virtual void it_was_a_tie() = 0;
    virtual void fatal_injury() = 0;

    /*OVERLOADED OPERATORS*/
    friend void operator * (MysticalSeaCreature &msc1, MysticalSeaCreature &msc2);
    friend ostream& operator << (ostream& print, const MysticalSeaCreature &msc1);
    friend bool operator == (MysticalSeaCreature &msc1, MysticalSeaCreature &msc2);
    friend void operator + (MysticalSeaCreature &msc1, MysticalSeaCreature &msc2);
};

#endif //CRPAGE_PROJECT4_SEACREATURES_H
