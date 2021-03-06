#pragma once
#include <SFML/Graphics.hpp>
#include "Player.h"
#include "Collider.h"

class Platform2
{

public:
    Platform2(sf::Texture* texture, float switchTime, float x, float y );
    ~Platform2();
    void updateX(float deltaTime);
    void updateY(float deltaTime);
    void draw(sf::RenderWindow& window);
    void MOVE();

    sf::Vector2f GetPosition() { return body.getPosition(); }
    Collider GetCollider() { return Collider(body); }

    

    

private:
    float posiX, posiY;
   
    int counthit;
    int count = 100;
    bool hit;
    float speed;
    float direction;
    sf::RectangleShape body;
    sf::Vector2f velocity;
};