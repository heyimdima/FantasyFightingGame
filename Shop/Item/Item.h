// Dmytro Bondar
// CST-210 (Tue/Thu) (9:00-10:45am)
// April 24, 2022 (04/24/2022)
// Fantasy Fighting Game (Final Project)
// This is my own work

#ifndef FANTASYFIGHTINGGAME_ITEM_H
#define FANTASYFIGHTINGGAME_ITEM_H

#include <string>

class Item {
private:
    std::string name;
    std::string description;
    int price;
    int ID;
public:
    // ~Constructors~ //
    Item();

    // ~Functions~ //
    virtual void buyMessage() = 0;


    // ~Getters~ //
    std::string getName()const; // getter for name
    std::string getDescription()const; // getter for description
    int getPrice()const; // getter for price
    int getID()const; // getter for ID

    // ~Setters~ //
    void setName(std::string n); // setter for name
    void setDescription(std::string d); // setter for description
    void setPrice(int p); // setter for price
    void setID(int id);

};


#endif //FANTASYFIGHTINGGAME_ITEM_H
