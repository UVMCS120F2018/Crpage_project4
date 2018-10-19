//
// Created by Cecily Page on 10/19/18.
//

#ifndef CRPAGE_PROJECT4_OCOTPUS_H
#define CRPAGE_PROJECT4_OCOTPUS_H

#include "MysticalSeaCreatures.h"
using namespace Mystical;
using namespace std;

class Octopus : public MysticalSeaCreature{

public:
    Octopus();
    Octopus(string a_name);
    Octopus(string a_name, mystical_power a_power);
    // override parent's pure virtual method
    void get_smarter() override;
    virtual void win_fight() override;
    virtual void loose_fight() override;
    virtual void it_was_a_tie() override;

};


#endif //CRPAGE_PROJECT4_OCOTPUS_H
