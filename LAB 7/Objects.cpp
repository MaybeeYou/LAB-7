#include "Objects.h"

Ball::Ball(float startX, float StartY) {
	radius = 10.f;
	reset(startX, StartY);
}

void Ball::reset(float startX, float startY) {
	x = startX;
	y = startY;

	float speed = 300.f;
	vx = (rand() % 2 == 0 ? 1.f : -1.f) * speed;
	vy = ((rand() % 2 == 0 ? 1.f : -1.f) * speed * 0.5f);
}

void Ball::update(float deltaTime) {
	x += vx * deltaTime;
	y += vy * deltaTime;
}

void Ball::draw(sf::RenderWindow& window) const {
	sf::CircleShape circle(radius);
	circle.setFillColor(sf::Color::White);
	circle.setOrigin(radius, radius);
	circle.setPosition(x, y);
	window.draw(circle);
}

void Ball::checkCollision(const Paddle& left, const Paddle& right, float windowHeight, float windowWidth ,int& leftScore, int& rightScore) {
	if (y - radius < 0) {
		y = radius;
		vy = -vy;
	}

	if (y + radius > windowHeight) {
		y = windowHeight - radius;
		vy = -vy;
	}

	if (x - radius < 0) {
		rightScore++;
		reset(windowWidth / 2, windowHeight / 2);
		return;
	}

	if (x + radius > windowWidth) {
		leftScore++;
		reset(windowWidth / 2, windowHeight / 2);
		return;
	}

}

