// Dmytro Bondar
// CST-210 (Tue/Thu) (9:00-10:45am)
// April 24, 2022 (04/24/2022)
// Fantasy Fighting Game (Final Project)
// This is my own work

#include <iostream>
#include <unistd.h>
#include "Arena.h"

// ~Constructors~ //

Arena::Arena() {
    buildArena();
}

Arena::~Arena() {
    destroyArena();
}

// ~Functions~ //

void Arena::arenaMenu(Character *character) {
    isFighting = true;

    while(isFighting) {
        std::cout << "------------ARENA_MENU------------" << std::endl;
        std::cout << " | - |1| -> | View Enemies |" << std::endl;
        std::cout << " | - |2| -> | Fight Zombie |" << std::endl;
        std::cout << " | - |3| -> | Fight Ghost |" << std::endl;
        std::cout << " | - |4| -> | Fight Goblin |" << std::endl;
        std::cout << " | - |5| -> | Fight Dragon |" << std::endl;
        std::cout << " | - |0| <- | Main Menu |" << std::endl;
        std::cout << "----------------------------------" << std::endl;
        std::cout << " | Choice: ";
        std::cin >> this->choice;
        std::cout << "---------------------------------" << std::endl;

        switch (choice) {
            case 0: // Back to Main Menu
                leaveArena();
                break;
            case 1: // View Enemies
                showEnemies();
                break;
            case 2: // Fight Zombie
                fight(character, enemies[0]);
                break;
            case 3: // Fight Ghost
                fight(character, enemies[1]);
                break;
            case 4: // Fight Goblin
                fight(character, enemies[2]);
                break;
            case 5: // Fight Dragon
                fight(character, enemies[3]);
                break;
            default: // default case just in case something goes wrong
                break;

        }
    }
}

void Arena::leaveArena() {
    std::cout << "---------------------------------" << std::endl; // tell user they have left the arena
    std::cout << " | You left the arena.. |" << std::endl;
    std::cout << "---------------------------------" << std::endl;
    isFighting = false; // switch isFighting flag to send user into main menu
}

void Arena::showEnemies() {
    std::cout << "---------------ENEMIES---------------" << std::endl;
    for(int i = 0; i < 4; i++) { // display all the enemies
        enemies[i]->show();
    }
}

void Arena::fight(Character *character, Enemy *enemy) {
    int reserveHealth = character->getHealth();
    int enemyReserveHealth = enemy->getHealth();

    while(character->alive() || enemy->alive()) {
        character->getWeapon()->use(); // Use a weapon specific phrase
        character->hit(enemy); // Character hit Enemy

        if(!enemy->alive()) { // check if Enemy is alive
            character->getRewarded(enemy); // reward player with gold for the given Enemy
            break; // if Enemy is not alive, break the while loop
        }

        sleep(2); // 2 second wait in between attack to make it more engaging

        enemy->hit(character); // Enemy hit Character
        if(!character->alive()) { // check if Character is alive
            break; // if Character is not alive, then break the while loop
        }

        sleep(2); // 2 second wait in between attack to make it more engaging
    }
    character->resetHealth(reserveHealth);
    enemy->resetHealth(enemyReserveHealth);
}


// Constructor Functions
void Arena::buildArena() {
    std::cout << "/*/ ..building arena" << std::endl;
    choice = 0; // initialize choice variable for the menu navigation
    isFighting = true; // initialize the boolean expression (flag) for the menu

    // initialize the enemies
    enemies[0] = new Enemy("Zombie"); // add Zombie
    enemies[1] = new Enemy("Ghost"); // add Ghost
    enemies[2] = new Enemy("Goblin"); // add Goblin
    enemies[3] = new Enemy("Dragon"); // add Dragon
    std::cout << "/*/ ..done building arena" << std::endl;
}

// Destructor Functions
void Arena::destroyArena() {
    std::cout << "/*/ ..destroying enemies" << std::endl;
    delete enemies[0];
    delete enemies[1];
    delete enemies[2];
    delete enemies[3];
    std::cout << "/*/ ..done destroying enemies" << std::endl;
}