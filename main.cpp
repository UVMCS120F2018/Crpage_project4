
#include "MysticalSeaCreatures.h"
#include "Octopus.h"
#include "Narwall.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <memory>

using namespace Mystical;

void game_options(string primary, string second){
    cout << endl << endl;
    cout << "Welcome to the deep blue! What would you like " << primary << " to do?" << endl;
    cout << "A. Get Smarter" << endl;
    cout << "B. Reveal Power" << endl;
    cout << "C. Reveal IQ" << endl;
    cout << "D. Fight " << second << endl;
}
void death_cert(string name){

    ofstream cert("../d_cert.txt");
    cert << setfill('~');
    cert << setw(100)<< "~"<<endl;
    cert << setfill(' ');
    for(int i=0; i<5; i++){
        cert << "~" <<setw(99)<<  "~"<<endl;
    }
    cert <<"~" << setw(65) << "Official Death Certificate Of" << setw(34) << "~" << endl;
    cert <<"~" << setw(50) << name << setw(49) << "~"<< endl;
    cert <<"~" << setw(63) << "We are very sad they died" << setw(36) << "~" << endl;
    for(int i=0; i<5; i++){
        cert << "~" <<setw(99)<<  "~"<<endl;
    }
    cert << setfill('~');
    cert << setw(100)<< "~"<<endl;

}

void game(Octopus creature1, Narwall creature2){
    string a_name = creature1.get_name();
    string b_name = creature2.get_name();
    string winner;
    string looser;
    bool all_alive = true;
    bool play = true;

    while(play) {


        string choice;
        cout << endl << endl;
        game_options(a_name, b_name);

        cin >> choice;

        if (choice == "a" or choice == "A") {
            creature1.get_smarter();
        } else if (choice == "b" or choice == "B") {
            cout<<"1.Invisability    2.Telepathy    3.Sparkles  4.Always being right"<<endl;
            cout << a_name << "has a Mystical Power of : " << mystical_power(creature1.get_power()) << endl;
        } else if (choice == "c" or choice == "C") {
            cout << a_name << " has an IQ of " << creature1.get_smartness() << endl;
        } else if (choice == "d" or choice == "D") {
            creature1 * creature2;
            if (creature1.get_smartness() < 0) {
                creature1.fatality();
            } else if (creature2.get_smartness() < 0) {
                creature2.fatality();
            }
        }else{
            cout << "That wasn't an option. You loose a turn" << endl;
        }
        cin.clear();


        game_options(b_name, a_name);

        cin >> choice;

        if (choice == "a" or choice == "A") {
            creature2.get_smarter();
        }else if(choice == "b" or choice =="B"){
            cout<<"1.Invisability    2.Telepathy    3.Sparkles  4.Always being right"<<endl;
            cout << b_name << "has a Mystical Power of : " << mystical_power(creature2.get_power()) << endl;
        }else if(choice == "c" or choice =="C"){
            cout << b_name << " has an IQ of " << creature2.get_smartness() << endl;
        }else if(choice == "d" or choice =="D"){
            creature1 * creature2;
            if(creature1.get_smartness() < 0){
                creature1.fatality();
            }else if (creature2.get_smartness() < 0){
                creature2.fatality();
            }
        }else{
            cout << "That wasn't an option. You loose a turn." << endl;
        }




        if(creature1.get_smartness() >100){
            winner = a_name;
            looser = b_name;
            play = false;
            cout << a_name << " Won because they got smart" << endl;
        }
        if(creature2.get_smartness() >100){
            winner = b_name;
            looser = a_name;
            play = false;
            cout << b_name << " Won because they got smart" << endl;
        }
        if(creature1.get_is_dead()){
            winner = b_name;
            looser = a_name;
            play = false;
            cout << b_name << " Won by default because " << a_name << " died." << endl;
        }
        if(creature2.get_is_dead()){
            winner = a_name;
            looser = b_name;
            death_cert(looser);
            play = false;
            cout << a_name << " Won by default because " << b_name << " died." <<endl;
        }

    }
    cout << "Thanks for playing!" << endl;

}

void power_choice(string name){
    cout << "What would you like " << name << "'s Mystical Power to be?" << endl;
    cout << "1. Invisability"<<endl;
    cout << "2. Telepathy" << endl;
    cout << "3. Sparkles" << endl;
    cout << "4. Always Being Right" << endl;
}


int main() {
//    unique_ptr<MysticalSeaCreature> creature1 = make_unique<Octopus>();
    Octopus creature1;
    Narwall creature2;


    cout << "Welcome to the Ocean!" << endl;
    cout << "You get to have two creatures in your habitat" << endl;
    cout << "One is a Narwall, and the other is an Octopus." << endl;

    string name;
    cout << "What would you like to name your Octopus" << endl;
    cin >> name;
    cin.clear();
    power_choice(name);

    int power;
    mystical_power pow;
    bool valid = false;
    while(!valid){
        cin >> power;
        valid = true;
        if(power ==1 ){
            pow = INVISABILITY;
        }else if (power ==2 ){
            pow = TELEPATHY;
        }else if (power ==3 ){
            pow = SPARKLES;
        }else if (power ==4 ){
            pow = ALWAYS_CORRECT;
        }else{
            valid = false;
            power_choice(name);
        }
    }
    creature1 = Octopus(name, pow);

    cin.clear();
    cout << "Great! Now, what would you like to call your Narwall?" << endl;
    cin >> name;
    cin.clear();
    power_choice(name);

    int power2;

    bool valid2 = false;
    mystical_power pow2;
    while(!valid2){
        cin >> power2;
        valid2 = true;
        if(power2 ==1 ){
            pow2 = INVISABILITY;
        }else if (power2 ==2 ){
            pow2 = TELEPATHY;
        }else if (power2 ==3 ){
            pow2 = SPARKLES;
        }else if (power2 ==4 ){
            pow2 = ALWAYS_CORRECT;
        }else{
            valid2 = false;
            power_choice(name);
        }
    }
    creature2 = Narwall(name, pow2);

    cout << "Cool Stuff!" << endl;
    cout << "Now we can start to play!" << endl;
    cout << "Here are the rules" << endl;
    cout << "1. The first creature to reach an IQ of 100 wins." << endl;
    cout << "2. You can raise and lower the IQ of each creature by making them fight or learn tricks / do things." << endl;
    cout << "3. This should really be a 2 player game... but I know you're just one TA so please try to pretend." << endl;

    game(creature1, creature2);
};