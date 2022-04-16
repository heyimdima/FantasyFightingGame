// Dmytro Bondar
// CST-210 (Tue/Thu) (9:00-10:45am)
// April 24, 2022 (04/24/2022)
// Fantasy Fighting Game (Final Project)
// This is my own work

#ifndef FANTASYFIGHTINGGAME_GAME_H
#define FANTASYFIGHTINGGAME_GAME_H


#include "Creature/Character/Character.h"
#include "Shop/Shop.h"
#include "Arena/Arena.h"

class Game {
private:
    int choice;
    bool isPlaying;
    Character *character;
    Shop *shop;
    Arena *arena;
public:
    // ~Constructors~ //
    Game();
    ~Game();

    // ~Functions~ //
    void run();
    void mainMenu();


};


#endif //FANTASYFIGHTINGGAME_GAME_H
