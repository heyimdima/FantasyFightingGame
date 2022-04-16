// Dmytro Bondar
// CST-210 (Tue/Thu) (9:00-10:45am)
// April 24, 2022 (04/24/2022)
// Fantasy Fighting Game (Final Project)
// This is my own work

#include <iostream>
#include "Game.h"

// ~Constructors~ //


Game::Game() {
    character = new Character;
    shop = new Shop;
    arena = new Arena;
    choice = 0;
    isPlaying = true;
}

Game::~Game() {
    shop->destroyShop();
    arena->destroyArena();
}

// ~Functions~ //

// Function that starts the game off and gives user a choice to load or create a Character
void Game::run() {
    int input;
    std::cout << "------------------------------------------" << std::endl;
    std::cout << "| - |1| -> |Create New Character|" << std::endl;
    std::cout << "| - |2| -> |Load Character|" << std::endl;
    std::cout << "| - |0| <- |Quit Game|" << std::endl;
    std::cout << "Choice: ";
    std::cin >> input;
    std::cout << "------------------------------------------" << std::endl;
    switch (input) {
        case 0: // Quit Game
            std::cout << "/*/ ..exiting game";
            exit(0);
        case 1: // Create New Character
            character->createNewCharacter();
            break;
        case 2: // Load Character
            character->loadCharacter(character);
            break;
        default:
            break;
    }
    while(isPlaying) {
        mainMenu();
    }
}

// Function that is responsible for the main menu of the game
void Game::mainMenu() {
    isPlaying = true;
    std::cout << "---------------MAIN_MENU---------------" << std::endl;
    std::cout << " | - |1| -> |Character Info Sheet|" << std::endl;
    std::cout << " | - |2| -> |Shop|" << std::endl;
    std::cout << " | - |3| -> |Arena|" << std::endl;
    std::cout << " | - |0| <- |Save and Quit|" << std::endl;
    std::cout << "---------------------------------------" << std::endl;;
    std::cout << " | Choice: ";
    std::cin >> this->choice;
    std::cout << "---------------------------------" << std::endl;

    switch (this->choice) {
        case 0:
            this->character->saveCharacter(this->character);
            isPlaying = false;
            break;
        case 1:
            this->character->showStats();
            break;
        case 2:
            shop->shopMenu(character);
            break;
        case 3:
            arena->arenaMenu(character);
            break;
        default:
            break;
    }


}