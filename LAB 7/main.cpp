#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Color.hpp>
#include <TGUI/Backend/SFML-Graphics.hpp>
#include <TGUI/TGUI.hpp>
#include "Objects.h"

int main() {
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
}
