#include "Platform2.h"
#include<iostream>

Platform2::Platform2(sf::Texture* texture, float switchTime, float x, float y) 
   
{
    this->posiX = x;
    this->posiY = y;
    this->speed = speed;
    this->direction = 1;

    
    counthit = 0;
    body.setSize(sf::Vector2f(400.0f, 100.0f));
    body.setOrigin(body.getSize() / 2.0f);
    body.setPosition(this->posiX, this->posiY);
    body.setTexture(texture);
}
Platform2::~Platform2()
{
}
void Platform2::updateX(float deltaTime)
{
    float POSX = body.getPosition().x;
    velocity.y = 0;
    velocity.x = 80;
    if (POSX < this->posiX) {
       
        this->direction = 1;
    }
    else if (POSX > this->posiX + 300) {
        
        this->direction = -1;
    }
    body.move(this->direction * velocity * deltaTime);
    
}

void Platform2::updateY(float deltaTime)
{
    float POSY = body.getPosition().y;
    velocity.y = 80;
    velocity.x = 0;
    if (POSY < this->posiY) {
        
        this->direction = 1;
    }
    else if (POSY > this->posiY +120) {
       
        this->direction = -1;
    }
    body.move(0, this->direction * velocity.y * deltaTime);
   
}

void Platform2::MOVE() {

    body.setPosition(-1000.0f, 350.0f);
}
void Platform2::draw(sf::RenderWindow& window)
{
    window.draw(body);
}
