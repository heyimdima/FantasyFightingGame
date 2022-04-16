// Dmytro Bondar
// CST-210 (Tue/Thu) (9:00-10:45am)
// April 24, 2022 (04/24/2022)
// Fantasy Fighting Game (Final Project)
// This is my own work

#ifndef FANTASYFIGHTINGGAME_DAGGER_H
#define FANTASYFIGHTINGGAME_DAGGER_H


#include "../Weapon.h"

class Dagger : public Weapon {
public:
    // ~Constructors~ //
    Dagger(); // no-argument constructor

    // ~Functions~ //
    void use() override;
};


#endif //FANTASYFIGHTINGGAME_DAGGER_H
