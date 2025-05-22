#include <SFML/Graphics.hpp>
#include <TGUI/Backend/SFML-Graphics.hpp>
#include <TGUI/TGUI.hpp>
#include "Objects.h"

int main() {
    sf::RenderWindow window(sf::VideoMode(WIDTH_DISPLAY, HEIGHT_DISPLAY), "Pin-Pong");
    tgui::Gui gui(window);

    Paddle leftPaddle(50, HEIGHT_DISPLAY / 2 - 50);
    Paddle rightPaddle(WIDTH_DISPLAY - 70, HEIGHT_DISPLAY / 2 - 50);
    Ball ball(WIDTH_DISPLAY / 2, HEIGHT_DISPLAY / 2);
    
    // Изменено позиционирование счетчика - теперь он над центральной линией
    Cloker clock;
    clock.setPosition(WIDTH_DISPLAY / 2 - 50, 20);  // 20 пикселей от верхнего края
    clock.setTextSize(40);
    clock.draw(gui);

    sf::Clock gameClock;

    while (window.isOpen()) {
        float deltaTime = gameClock.restart().asSeconds();

        sf::Event event;
        while (window.pollEvent(event)) {
            gui.handleEvent(event);
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Управление
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) 
            leftPaddle.Move(-leftPaddle.speed * deltaTime);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) 
            leftPaddle.Move(leftPaddle.speed * deltaTime);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) 
            rightPaddle.Move(-rightPaddle.speed * deltaTime);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) 
            rightPaddle.Move(rightPaddle.speed * deltaTime);

        ball.update(deltaTime);
        leftPaddle.update(deltaTime);
        rightPaddle.update(deltaTime);

        ball.checkCollision(leftPaddle, rightPaddle, HEIGHT_DISPLAY, WIDTH_DISPLAY, clock);

        window.clear(sf::Color::Black);

        // Центральная линия (пунктирная)
        sf::RectangleShape line(sf::Vector2f(2, HEIGHT_DISPLAY));
        line.setPosition(WIDTH_DISPLAY / 2, 0);
        line.setFillColor(sf::Color(100, 100, 100));
        
        // Делаем линию пунктирной
        for (int i = 0; i < HEIGHT_DISPLAY; i += 20) {
            line.setPosition(WIDTH_DISPLAY / 2, i);
            line.setSize(sf::Vector2f(2, 10));  // 10px длина каждого отрезка
            window.draw(line);
        }

        leftPaddle.draw(window);
        rightPaddle.draw(window);
        ball.draw(window);
        gui.draw();

        window.display();
    }

    return 0;
}