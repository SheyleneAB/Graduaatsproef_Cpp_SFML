#include "../Header/Sword.h"
#include <iostream>

Sword::Sword() : Weapon("Sword", 12, "assets/sword.png", 15) {}

void Sword::attack() {
    std::cout << "Sword slash!\n";
}


std::string Sword::getName() const {
    return Name;
}

int Sword::getPrice() const {
    return Price; 
}

std::string Sword::getDescription() const {
    return "A sharp blade for close combat.";
}