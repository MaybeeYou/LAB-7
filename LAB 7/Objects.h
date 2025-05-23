#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Color.hpp>
#include <TGUI/Backend/SFML-Graphics.hpp>
#include <TGUI/TGUI.hpp>
#include <cmath>
#include <string>
#include <memory>

const int WIDTH_DISPLAY = 1280;
const int HEIGHT_DISPLAY = 720;

class Cloker {
private:
    int size;
    int x, y;
    bool lose = false;
    std::shared_ptr<tgui::Label> label;
    tgui::Gui* gui = nullptr;
    void updateText();
    void showGameOver(const std::string& message);

public:
    bool gameOver = false;
    Cloker();
    int left, right;
    int limit;
    void setPosition(int x_, int y_);
    void setTextSize(int s);
    void plusLeft();
    void plusRight();
    void reset();
    void setLimit(unsigned int lim);
    void draw(tgui::Gui& gui);
};
class Paddle {
public:
    float x, y;
    float width, height;
    float speed;
  Paddle();
  Paddle(float startX, float startY);
  void update(float deltaTime);
  void draw(sf::RenderWindow& window) const;
  void reset(float startX, float startY);
  void Move(float dy);
  sf::FloatRect getBounds() const;
};
class Ball {
public:
  float x, y;
  float radius;
  float vx, vy;
  bool active = true;

  Ball(float startX, float startY);
  void setPosition(float deltaTime);
  void update(float deltaTime);
  void draw(sf::RenderWindow &window) const;
  void reset(float startX, float startY);
  void checkCollision(const Paddle& left, const Paddle& right,
                         float windowHeight, float windowWidth,
                         Cloker& clock);

  sf::FloatRect getBounds() const;
};

