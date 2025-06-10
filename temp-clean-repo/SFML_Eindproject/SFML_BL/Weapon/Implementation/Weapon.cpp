#include "../Header/Weapon.h"
#include <iostream>

Weapon::Weapon(const std::string& name, int damage, const std::string& spritePath, int price)
    : Name(name), Damage(damage), SpritePath(spritePath), sprite(texture), Price(price) {
    loadSprite();
}

void Weapon::loadSprite() {
    if (!SpritePath.empty()) {
        if (!texture.loadFromFile(SpritePath)) {
            std::cerr << "Failed to load weapon sprite: " << SpritePath << "\n";
        }
        else {
            sprite.setTexture(texture);
        }
    }
}

void Weapon::draw(sf::RenderWindow& window, const sf::Vector2f& position) {
    sprite.setPosition(position);
    window.draw(sprite);
}

int Weapon::getDamage() const {
    return Damage;
}

