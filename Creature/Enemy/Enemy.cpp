// Dmytro Bondar
// CST-210 (Tue/Thu) (9:00-10:45am)
// April 24, 2022 (04/24/2022)
// Fantasy Fighting Game (Final Project)
// This is my own work

#include <iostream>
#include "Enemy.h"

// ~Constructors~ //

Enemy::Enemy() : Creature() { // no-argument constructor
    this->reward = 0;
}

Enemy::Enemy(const std::string& type) { // parameterized constructor
    setName(type); // set the name of the Enemy
    if(type == "Zombie") {
        setHealth(25); // health
        setDamage(10); // damage
        setResistance(5); // resistance
        setReward(5); // reward
    }
    else if(type == "Ghost") { // initialize a ghost
        setHealth(35); // health
        setDamage(15); // damage
        setResistance(7); // resistance
        setReward(10); // reward
    }
    else if(type == "Goblin") { // initialize a goblin
        setHealth(60); // health
        setDamage(25); // damage
        setResistance(15); // resistance
        setReward(20); // reward
    }
    else if(type == "Dragon") { // initialize a dragon
        setHealth(85); // health
        setDamage(40); // damage
        setResistance(25); // resistance
        setReward(30); // reward
    }
    else // error catcher
        std::cout << "Parameterized constructor error.. (type entered wrong)";
}

// ~Functions~ //

void Enemy::die() {
    std::cout << " | Enemy: " << getName() << " | died..." << std::endl;
}

void Enemy::show() {
    std::cout << "-------------------------------------------" << std::endl;
    std::cout << " |Name: " << this->getName() << " |" << std::endl;
    std::cout << " |Health: " << this->getHealth() << " |" << std::endl;
    std::cout << " |Damage: " << this->getDamage() << " |" << std::endl;
    std::cout << " |Prize: " << this->getReward() << " |" << std::endl;
    std::cout << "--------------------------------------" << std::endl;
}

void Enemy::resetHealth(int heal) {
    this->setHealth(heal);
}

// ~Getters~ //

int Enemy::getReward()const {
    return this->reward;
}

// ~Setters~ //
void Enemy::setReward(int r) {
    this->reward = r;
}


