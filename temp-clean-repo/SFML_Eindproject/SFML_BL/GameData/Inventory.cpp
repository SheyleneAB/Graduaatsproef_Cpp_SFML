#include "Inventory.h"
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Font.hpp>
#include <fstream>

void Inventory::addWeapon(std::unique_ptr<Weapon> weapon) {
    weapons.push_back(std::move(weapon));
}

void Inventory::saveToFile(const std::string& filename) {
    std::ofstream out(filename);
    for (const auto& weapon : weapons) {
        out << weapon->getName() << "\n";
    }
}

void Inventory::loadFromFile(const std::string& filename) {
    std::ifstream in(filename);
    std::string line;
    while (std::getline(in, line)) {
        auto weapon = WeaponFactory::createWeapon(line);
        if (weapon) weapons.push_back(std::move(weapon));
    }
}

void Inventory::draw(sf::RenderWindow& window) {  
    if (!isOpen) return;  

    sf::Font font;  
    if (!font.openFromFile("assets/arial.ttf")) {  
        return;  
    }  

    for (size_t i = 0; i < weapons.size(); ++i) {  
        sf::Text text( font);
		text.setCharacterSize(24);
        text.setString(weapons[i]->getName());  
        text.setPosition(sf::Vector2f(300.f, 50.f));
        text.setFillColor(i == selectedIndex ? sf::Color::Yellow : sf::Color::White);  
        window.draw(text);  
    }  

    if (!weapons.empty()) {  
        const auto& w = weapons[selectedIndex];  
        sf::Text info( font);  
        info.setFillColor(sf::Color::Cyan);  
		info.setCharacterSize(24);
        info.setPosition(sf::Vector2f(300.f, 50.f)); 
        info.setString(  
            "Name: " + w->getName() + "\n" +  
            "Damage: " + std::to_string(w->getDamage()) + "\n" +  
            "Price: $" + std::to_string(w->getPrice()) + "\n" +  
            "Desc: " + w->getDescription()  
        );  
        window.draw(info);  
    }  
}

void Inventory::handleInput(sf::Keyboard::Key key) {
    if (key == sf::Keyboard::Key::I) {
        isOpen = !isOpen;
    }
    if (!isOpen || weapons.empty()) return;

    if (key == sf::Keyboard::Key::Down) {
        selectedIndex = (selectedIndex + 1) % weapons.size();
    }
    else if (key == sf::Keyboard::Key::Up) {
        selectedIndex = (selectedIndex - 1 + weapons.size()) % weapons.size();
    }
}
