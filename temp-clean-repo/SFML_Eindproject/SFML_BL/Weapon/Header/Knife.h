#pragma once
#include "Weapon.h"

class Knife : public Weapon {
public:
    Knife();

    void attack() override;
    std::string getName() const override;
};


