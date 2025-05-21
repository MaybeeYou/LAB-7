#pragma once
#include <SFML/Graphics.hpp>
class Paddle {
private:
	float x, y;
	float width, height;
	float vy;
public:
    Paddle();
    Paddle(float startX, float startY);
	void update(float deltaTime);
	void draw(sf::RenderWindow& window) const;
	void reset(float startX, float startY);
	
	sf::FloatRect getBounds() const;

};
class Ball {
public:
	float x, y;
	float radius;
	float vx, vy;

	Ball(float startX, float startY);
	void setPosition(float deltaTime);
	void update(float deltaTime);
	void draw(sf::RenderWindow& window) const;
	void reset(float startX, float startY);
	void checkCollision(const Paddle& left, const Paddle& right,
		float windowHeight, float windowWidth, int& leftScore, int& rightScore);
	
	sf::FloatRect getBounds() const;

};
