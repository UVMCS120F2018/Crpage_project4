//
// Created by Cecily Page on 10/19/18.
//

#ifndef CRPAGE_PROJECT4_NARWALL_H
#define CRPAGE_PROJECT4_NARWALL_H

#include "MysticalSeaCreatures.h"
using namespace Mystical;
using namespace std;

class Narwall: public MysticalSeaCreature{

public:
    Narwall();
    Narwall(string a_name);
    Narwall(string a_name, mystical_power a_power);

    virtual void get_smarter() override;
    virtual void win_fight() override;
    virtual void loose_fight() override;
    virtual void it_was_a_tie() override;


};


#endif //CRPAGE_PROJECT4_NARWALL_H
