#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Color.hpp>
#include <TGUI/Backend/SFML-Graphics.hpp>
#include <TGUI/TGUI.hpp>
#include "Objects.h"

int main() {
<<<<<<< HEAD
     
  sf::RenderWindow window(sf::VideoMode(WIDTH_DISPLAY, HEIGHT_DISPLAY), "Pin-Pong");
  tgui::Gui gui(window);
  Paddle leftPaddle(50, HEIGHT_DISPLAY / 2 - 50);
  Paddle rightPaddle(WIDTH_DISPLAY - 70, HEIGHT_DISPLAY / 2 - 50);
  Ball ball(WIDTH_DISPLAY / 2, HEIGHT_DISPLAY / 2);
  Cloker clock;
  clock.setPosition(1280 / 2 - 50, 720 / 2 - 20); // Подгонка по глазомеру
  clock.setTextSize(40);
  clock.draw(gui);

  auto button = tgui::Button::create();
  button->setPosition(10, 10);
  button->setSize(100, 50);
  button->setText("Click me!");
  button->onClick([&]() {
    std::cout << "Button clicked!" << std::endl;
  });
  gui.add(button);

  sf::Clock gameClock;

  while (window.isOpen()) {
    float deltaTime = gameClock.restart().asSeconds();

    sf::Event event;
    while (window.pollEvent(event)) {
      gui.handleEvent(event);
      if (event.type == sf::Event::Closed)
        window.close();
    }

    const float moveStep = 15.f; // Шаг движения (можно регулировать)

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) leftPaddle.Move(-leftPaddle.speed * deltaTime);
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) leftPaddle.Move(leftPaddle.speed * deltaTime);                //UPRAVLENIE
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) rightPaddle.Move(-rightPaddle.speed * deltaTime);
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) rightPaddle.Move(rightPaddle.speed * deltaTime);

    ball.update(deltaTime);
    leftPaddle.update(deltaTime); 
    rightPaddle.update(deltaTime);

    int leftScore = 0, rightScore = 0;                              //PROVERKA STOLKNOVENIY
    ball.checkCollision(leftPaddle, rightPaddle, HEIGHT_DISPLAY, WIDTH_DISPLAY, leftScore, rightScore);

    if (leftScore > 0) clock.plusLeft();                            //S4ET UPDATE
    if (rightScore > 0) clock.plusRight();

    window.clear(sf::Color::Black);

    sf::RectangleShape line(sf::Vector2f(2, HEIGHT_DISPLAY));
    line.setPosition(WIDTH_DISPLAY / 2, 0);                         //POLOSO4KA
    line.setFillColor(sf::Color(100, 100, 100));
    window.draw(line);


    leftPaddle.draw(window);
    rightPaddle.draw(window);
    ball.draw(window);
    gui.draw();

    window.display();
  }


  return 0;
=======
    sf::RenderWindow window(sf::VideoMode(1280, 720), "Pin-Pong");
    tgui::Gui gui(window);
    
    Cloker clock;
    clock.setPosition(1280 / 2 - 50, 720 / 2 - 20); // Подгонка по глазомеру
    clock.setTextSize(40);
    clock.draw(gui);
    
    auto button = tgui::Button::create();
    button->setPosition(10,10);
    button->setSize(100, 50);
    button->setText("Click me!");
    button->onCli([&]() {
        std::cout << "Button clicked!" << std::endl;
    });
    gui.add(button);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            gui.handleEvent(event);
            if (event.type == sf::Event::Closed)
                window.close();
        }
    
        window.clear(sf::Color::White);
        gui.draw();
        window.display();
    }


    return 0;
>>>>>>> 30747ca (123)
}
