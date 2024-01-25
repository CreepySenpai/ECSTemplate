#pragma once

#include <SFML/Graphics.hpp>

struct Transform
{
    sf::Vector2f Position{};
    sf::Vector2f Speed{};
    sf::Vector2f Scale{};
    double Angle{0.0};

    Transform(){}

    Transform(const sf::Vector2f& Pos, const sf::Vector2f& Sp, const sf::Vector2f& Sc, double Ang) : 
        Position{Pos}, Speed{Sp}, Scale{Sc}, Angle{Ang}
    {
        
    }
};
