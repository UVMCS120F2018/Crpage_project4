//
// Created by Cecily Page on 10/18/18.
//

#ifndef CRPAGE_PROJECT4_SEACREATURES_H
#define CRPAGE_PROJECT4_SEACREATURES_H

#include <optional>
#include <vector>
#include <string>
#include <iostream>
using namespace std;
typedef optional<int> OptInt;

namespace Mystical{
    namespace mystical_enums{
        enum mystical_power{INVISABILITY, TELEPATHY, SPARKLES, ALWAYS_CORRECT};
        enum leg_type{FINS, TENTICLES, CLAWS, NONE};
    }
    struct IQ {
            int smartness;
            int fights_won;
            int fights_lost;
    };
};


using namespace Mystical;
using namespace Mystical :: mystical_enums;


class MysticalSeaCreature {
protected:
    string name;
    bool tail;
    mystical_power power;
    IQ iq;
    leg_type legs;
    OptInt num_legs;
    bool is_dead;

public:
    MysticalSeaCreature(string a_name, mystical_power a_power, leg_type type_legs, int num_of_legs);
    /*GETTERS*/
    mystical_power get_power();
    leg_type get_leg_type();
    int get_legs();
    bool get_is_dead();
    IQ get_iq();
    bool is_tail();
    string get_name() ;
    int get_smartness() ;

    /*SETTERS*/

    /*METHODS*/

    //Because these are all different for every subclass.
    //I'm not going to write RMEs for them. Because that would make no sense.
    //Plus, their names kind of make sense.

    virtual void get_smarter() = 0;
    virtual void win_fight() = 0;
    virtual void loose_fight() = 0;
    virtual void it_was_a_tie() = 0;

    /*
     * calculated the MSC's IQ score.
     */
    int score();

    void fatality();

//    void create_death_cert();

    /*OVERLOADED OPERATORS*/

    /*
     * FIGHT!
     */
    friend void operator * (MysticalSeaCreature &msc1, MysticalSeaCreature &msc2);

    /*
     * DO THEY HAVE THE SAME POWER?!
     */
    friend bool operator == (MysticalSeaCreature &msc1, MysticalSeaCreature &msc2);

    /*
     * BOTH GET SMARTER
     */
    friend void operator + (MysticalSeaCreature &msc1, MysticalSeaCreature &msc2);

};

#endif //CRPAGE_PROJECT4_SEACREATURES_H
