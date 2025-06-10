#include "../Header/WeaponFactory.h"
#include "../Header/Knife.h"
#include "../Header/Stick.h"
#include "../Header/Sword.h"

std::unique_ptr<Weapon> WeaponFactory::createWeapon(const std::string& type) {
    if (type == "knife") {
        return std::make_unique<Knife>();
    }
    else if (type == "stick") {
        return std::make_unique<Stick>();
    }
    else if (type == "sword") {
        return std::make_unique<Sword>();
    }
    return nullptr;
}
