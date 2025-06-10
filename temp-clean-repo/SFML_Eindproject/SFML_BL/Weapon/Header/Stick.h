#pragma once
#include "Weapon.h"

class Stick : public Weapon {
public:
    Stick();

    void attack() override;
    std::string getName() const override;
};
