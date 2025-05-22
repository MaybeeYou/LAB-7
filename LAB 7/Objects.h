#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Color.hpp>
#include <TGUI/Backend/SFML-Graphics.hpp>
#include <TGUI/TGUI.hpp>
#include <cmath>

class Paddle {
private:
  float x, y;
  float width, height;
<<<<<<< HEAD

public:
  float speed;
  Paddle();
  Paddle(float startX, float startY);
  void update(float deltaTime);
  void draw(sf::RenderWindow& window) const;
  void reset(float startX, float startY);
  void Move(float dy);
=======
  float vy;

public:
  Paddle();
  Paddle(float startX, float startY);
  void update(float deltaTime);
  void draw(sf::RenderWindow &window) const;
  void reset(float startX, float startY);

>>>>>>> 30747ca (123)
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
  void draw(sf::RenderWindow &window) const;
  void reset(float startX, float startY);
  void checkCollision(const Paddle &left, const Paddle &right,
                      float windowHeight, float windowWidth, int &leftScore,
                      int &rightScore);

  sf::FloatRect getBounds() const;
};

#pragma once
#include <TGUI/TGUI.hpp>
#include <string>
#include <memory>

class Cloker {
private:
    int size;
    int x, y;
    int left, right;
    int limit;
    std::shared_ptr<tgui::Label> label;

    void updateText();

public:
    Cloker();

    void setPosition(int x_, int y_);
    void setTextSize(int s);
    void plusLeft();
    void plusRight();
    void reset();
    void setLimit(unsigned int lim);
    void draw(tgui::Gui& gui) const;
};

