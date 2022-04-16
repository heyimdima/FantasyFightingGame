// Dmytro Bondar
// CST-210 (Tue/Thu) (9:00-10:45am)
// April 24, 2022 (04/24/2022)
// Fantasy Fighting Game (Final Project)
// This is my own work

#ifndef FANTASYFIGHTINGGAME_ARENA_H
#define FANTASYFIGHTINGGAME_ARENA_H


#include "../Creature/Enemy/Enemy.h"
#include "../Creature/Character/Character.h"

class Arena {
private:
    Enemy *enemies[4]; // array of enemies
    bool isFighting; // function that helps organize the main loop
    int choice; // choice variable for the menu navigation
public:
    // ~Constructors~ //
    Arena();
    ~Arena();

    // ~Functions~ //
    void arenaMenu(Character *character); // arena menu loop function
    void leaveArena(); // function that makes you leave the arena and come back to main menu
    void showEnemies(); // function that displays all the enemies
    void fight(Character *character, Enemy *enemy); // function that makes Character and Enemy

    // Constructor Functions
    void buildArena();

    // Destructor Function
    void destroyArena();
};


#endif //FANTASYFIGHTINGGAME_ARENA_H
