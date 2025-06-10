#include "../Header/Stick.h"
#include <iostream>

Stick::Stick() 
    : Weapon("Stick", 3, "assets/stick.png",2){
}

void Stick::attack() {
    std::cout << "Stick whack!\n";
}

void Stick::reload() {
    // Not applicable
}

std::string Stick::getName() const {
    return Name;
}

