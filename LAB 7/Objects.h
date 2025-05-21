#pragma once
#include <SFML/Graphics.hpp>

class Ball {
public:
	float x, y;
	float radius;
	float vx, vy;

	Ball(float startX, float startY);
	void update(float deltaTime);
	void draw(sf::RenderWindow& window) const;
	void reset(float startX, float startY);
	void checkCollision(const Paddle& left, const Paddle& right,
		float windowHeight, float windowWidth, int& leftScore, int& rightScore);
	
	sf::FloatRect getBounds() const;

};


