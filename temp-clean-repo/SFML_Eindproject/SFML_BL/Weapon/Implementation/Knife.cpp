#include "../Header/Knife.h"
#include <iostream>

Knife::Knife()
    : Weapon("Knife", 5, "assets/knife.png", 5) {
}

void Knife::attack() {
    std::cout << "Knife stab!\n";
}

void Knife::reload() {

}

std::string Knife::getName() const {
    return Name;
}






