#pragma once  
#include <memory>  
#include <string>  
#include "..\Header\Weapon.h" 

class WeaponFactory {  
public:  
    static std::unique_ptr<Weapon> createWeapon(const std::string& type);  
};
