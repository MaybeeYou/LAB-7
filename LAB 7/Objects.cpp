#include "Objects.h"

Cloker::Cloker()
	: size(14), x(0), y(0), left(0), right(0), limit(11)
{
	label = tgui::Label::create();
	label->setText("0 : 0");
}
Ball::Ball(float startX, float startY)
{
	radius = 10.f;
	reset(startX, startY);
}

void Ball::reset(float startX, float startY)
{
	x = startX;
	y = startY;

	float speed = 300.f;
	vx = (rand() % 2 == 0 ? 1.f : -1.f) * speed;
	vy = ((rand() % 2 == 0 ? 1.f : -1.f) * speed * 0.5f);
}

void Ball::update(float deltaTime)
{
    if (!active) return;
	x += vx * deltaTime;
	y += vy * deltaTime;
}

void Ball::draw(sf::RenderWindow &window) const
{
    if (!active) return;
	sf::CircleShape circle(radius);
	circle.setFillColor(sf::Color::White);
	circle.setOrigin({radius, radius});
	circle.setPosition({x, y});
	window.draw(circle);
}
void Ball::checkCollision(const Paddle &left, const Paddle &right,
					float windowHeight, float windowWidth,
					Cloker &clock)
{
    if (!active) return;
	if (y - radius < 0) {
        y = radius;
        vy = -vy;
    }

    if (y + radius > windowHeight) {
        y = windowHeight - radius;
        vy = -vy;
    }

    if (x - radius < 0) {
        clock.plusRight();  // Добавлена ;
        reset(windowWidth / 2, windowHeight / 2);
        return;
    }

    if (x + radius > windowWidth) {
        clock.plusLeft();  // Добавлена ;
        reset(windowWidth / 2, windowHeight / 2);
        return;
    }

    if (vx < 0 && 
        x - radius <= left.x + left.width && 
        x - radius >= left.x &&
        y + radius >= left.y && 
        y - radius <= left.y + left.height) 
    {
        x = left.x + left.width + radius;
        vx = -vx;
        
        // Изменение угла отскока
        float hitPosition = (y - left.y) / left.height;
        vy = hitPosition * 500.f;
    }

    // Столкновение с правой ракеткой
    if (vx > 0 && 
        x + radius >= right.x && 
        x + radius <= right.x + right.width &&
        y + radius >= right.y && 
        y - radius <= right.y + right.height) 
    {
        x = right.x - radius;
        vx = -vx;
        
        // Изменение угла отскока
        float hitPosition = (y - right.y) / right.height;
        vy = hitPosition * 500.f;
    }
}

// ROKETKA
Paddle::Paddle() : x(0), y(0), width(15), height(100), speed(0) {}

Paddle::Paddle(float startX, float startY) : x(startX), y(startY), width(15), height(100), speed(400.f) {}

void Paddle::reset(float startX, float startY)
{
	x = startX;
	y = startY;
	speed = 0;
}
void Paddle::update(float deltaTime)
{
    y += speed * deltaTime;
    if (y < 0)
        y = 0;
    if (y + height > HEIGHT_DISPLAY)
        y = HEIGHT_DISPLAY - height;
}
void Paddle::Move(float dy)
{
	y += dy;
	if (y < 0)
		y = 0;
	if (y + height > HEIGHT_DISPLAY)
		y = HEIGHT_DISPLAY - height;
}

void Paddle::draw(sf::RenderWindow &window) const
{
	sf::RectangleShape rect(sf::Vector2f(width, height));
	rect.setPosition(x, y);
	rect.setFillColor(sf::Color::White);
	window.draw(rect);
}

sf::FloatRect Paddle::getBounds() const
{
	return sf::FloatRect(x, y, width, height);
}
void Cloker::draw(tgui::Gui &g)
{
    gui = &g;
	g.add(label);
}
void Cloker::showGameOver(const std::string& message) {
    if (!gui) return;

    gui->remove(label);
    gameOver = true;

    auto gameOverBox = tgui::MessageBox::create();
    gameOverBox->setTitle("Game Over");
    gameOverBox->setText(message);
    gameOverBox->addButton("OK");
    gameOverBox->setSize(300, 150);
    gameOverBox->setPosition("(&.width - width) / 2", "(&.height - height) / 2");
    gameOverBox->setTextSize(14);

    gameOverBox->onButtonPress([this, gameOverBox](const tgui::String& button){
        if (button == "OK") {
            this->reset();
            gui->remove(gameOverBox); // убрать окно
            gui->add(label); // вернуть счётчик
            gameOver = false; // <-- снимаем флаг, игра продолжается
        }
    });

    gui->add(gameOverBox);
}





void Cloker::setPosition(int x_, int y_)
{
	x = x_;
	y = y_;
	label->setPosition(x, y);
}

void Cloker::setTextSize(int s)
{
	size = s;
	label->setTextSize(size);
}

void Cloker::plusLeft()
{
	if (left < limit)
	{
		++left;
		updateText();
	}
	else {
	    showGameOver("!!!!LEFT WIN!!!!");
	}
}

void Cloker::plusRight()
{
	if (right < limit)
	{
		++right;
		updateText();
	}
	else {
	    showGameOver("!!!!RIGHT WIN!!!!");
	}
}

void Cloker::reset()
{
	left = right = 0;
	updateText();
}

void Cloker::setLimit(unsigned int lim)
{
	limit = lim-1;
}


void Cloker::updateText()
{
	label->setText(std::to_string(left) + "   " + std::to_string(right));
}