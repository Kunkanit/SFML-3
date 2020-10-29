#pragma once
#include <SFML/Graphics.hpp>
#include "Animation.h"
#include"Collider.h"
class Player
{
public:
	Player(sf::Texture* texture, sf::Vector2u imageCount, float switchTime, float speed, float jumpHigh);
	~Player();
	void Update(float deltaTime);
	void Draw(sf::RenderWindow& window);
	void OnCollision(sf::Vector2f direction);

	sf::Vector2f getPosition() { return body.getPosition(); }
	Collider GetCollider() { return Collider(body); }

private:
	sf::RectangleShape body;
	Animation animation;
	unsigned int row;
	float speed;
	int face;
	bool bullet;
	sf::Vector2f velocity;
	bool canJump;
	float jumpHigh;
	int l = 0;
	

};
