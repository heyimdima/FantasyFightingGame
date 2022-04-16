// Dmytro Bondar
// CST-210 (Tue/Thu) (9:00-10:45am)
// April 24, 2022 (04/24/2022)
// Fantasy Fighting Game (Final Project)
// This is my own work

#ifndef FANTASYFIGHTINGGAME_ENEMY_H
#define FANTASYFIGHTINGGAME_ENEMY_H


#include "../Creature.h"


class Enemy : public Creature {
private:
    int reward;
public:
    // ~Constructors~ //
    Enemy(); // no-argument constructor
    explicit Enemy(const std::string& type); // parameterized constructor

    // ~Functions~ //
    void die() override; // function to tell the user that the Creature is dead
    void show();
    void resetHealth(int heal);

    // ~Getters~ //
    int getReward()const; // getter for reward

    // ~Setters~ //
    void setReward(int r); // setter for reward

};


#endif //FANTASYFIGHTINGGAME_ENEMY_H
