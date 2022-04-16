// Dmytro Bondar
// CST-210 (Tue/Thu) (9:00-10:45am)
// April 24, 2022 (04/24/2022)
// Fantasy Fighting Game (Final Project)
// This is my own work

#ifndef FANTASYFIGHTINGGAME_KATANA_H
#define FANTASYFIGHTINGGAME_KATANA_H


#include "../Weapon.h"

class Katana : public Weapon {
public:
    // ~Constructors~ //
    Katana(); // no-argument constructor

    // ~Functions~ //
    void use() override;
};


#endif //FANTASYFIGHTINGGAME_KATANA_H
