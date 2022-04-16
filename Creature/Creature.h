// Dmytro Bondar
// CST-210 (Tue/Thu) (9:00-10:45am)
// April 24, 2022 (04/24/2022)
// Fantasy Fighting Game (Final Project)
// This is my own work

#ifndef FANTASYFIGHTINGGAME_CREATURE_H
#define FANTASYFIGHTINGGAME_CREATURE_H


#include <string>

class Creature {
private:
    std::string name;
    int health;
    int damage;
    int resistance;
public:
    // ~Constructors~ //
    Creature(); // no-argument constructor

    // ~Functions~ //
    virtual void hit(Creature *creature);
    bool alive(); // function to check if creature is alive
    virtual void die() = 0; // function to tell the user that the Creature is dead (pure virtual)

    // ~Getters~ //
    std::string getName()const; // getter for name
    int getHealth()const; // getter for health
    int getDamage()const; // getter for damage
    int getResistance()const; // getter for resistance

    // ~Setters~ //
    void setName(std::string n); // setter for name
    void setHealth(int h); // setter for health
    void setDamage(int d); // setter for damage
    void setResistance(int r); // setter for resistance
};


#endif //FANTASYFIGHTINGGAME_CREATURE_H
