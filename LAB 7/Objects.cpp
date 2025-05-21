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
	circle.setOrigin({radius, radius});
	circle.setPosition({x, y});
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

Cloker::Cloker()
    : size(14), x(0), y(0), left(0), right(0), limit(12) {
    label = tgui::Label::create();
    label->setText("0 : 0");
}

void Cloker::setPosition(int x_, int y_) {
    x = x_;
    y = y_;
    label->setPosition(x, y);
}

void Cloker::setTextSize(int s) {
    size = s;
    label->setTextSize(size);
}

void Cloker::plusLeft() {
    if (left < limit) {
        ++left;
        updateText();
    }
}

void Cloker::plusRight() {
    if (right < limit) {
        ++right;
        updateText();
    }
}

void Cloker::reset() {
    left = right = 0;
    updateText();
}

void Cloker::setLimit(unsigned int lim) {
    limit = lim;
}

void Cloker::draw(tgui::Gui& gui) const {
    gui.add(label);
}

void Cloker::updateText() {
    label->setText(std::to_string(left) + " : " + std::to_string(right));
}


