#pragma once  
#include <vector>  
#include <memory>  
#include <string>  
#include <SFML/Graphics.hpp>  
#include "../Weapon/Header/WeaponFactory.h" 

class Inventory {  
public:  
    void addWeapon(std::unique_ptr<Weapon> weapon);  
    void saveToFile(const std::string& filename);  
    void loadFromFile(const std::string& filename);  
    void draw(sf::RenderWindow& window);  
    void handleInput(sf::Keyboard::Key key);  

private:  
    std::vector<std::unique_ptr<Weapon>> weapons;  
    int selectedIndex = 0;  
    bool isOpen = false;  
};
