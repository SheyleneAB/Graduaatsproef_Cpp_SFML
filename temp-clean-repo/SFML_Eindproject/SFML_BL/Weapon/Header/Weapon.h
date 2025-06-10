#pragma once
#include <SFML/Graphics.hpp>
#include <string>

class Weapon {
public:
    Weapon(const std::string& name, int damage, const std::string& spritePath, int Price);
    virtual ~Weapon() = default;

    virtual void attack() = 0;
    virtual std::string getName() const = 0;
    virtual int getDamage() const;
    virtual int getPrice() const = 0;
    virtual std::string getDescription() const = 0;

    void draw(sf::RenderWindow& window, const sf::Vector2f& position);
    void loadSprite();

protected:
    std::string Name;
    int Damage;
    std::string SpritePath;
    sf::Texture texture;
    sf::Sprite sprite;
    int Price = 0;
};

