#pragma once
#include <SFML/System/Vector2.hpp>

class Enemy
{
public:
    sf::Vector2f Position;
    int Health;
    int Score;
    void DropItems();

};

