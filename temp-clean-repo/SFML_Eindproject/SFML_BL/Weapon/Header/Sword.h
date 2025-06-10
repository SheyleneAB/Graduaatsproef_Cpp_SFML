#pragma once
#include "Weapon.h"

class Sword : public Weapon {
public:
    Sword();

    void attack() override;
    std::string getName() const override;
    int getPrice() const override;          
    std::string getDescription() const override; 
};