#include <iostream>
#include <SFML/Graphics.hpp>
#include "../../Header/Core/GameWindowManager.h"
#include "../../Header/Event/EventManager.h"

int main()
{
    //sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
    //sf::CircleShape shape(100.f);
    //shape.setFillColor(sf::Color::Green);

    //while (window.isOpen())
    //{
    //    sf::Event event;
    //    while (window.pollEvent(event))
    //    {
    //        if (event.type == sf::Event::Closed)
    //            window.close();
    //    }

    //    window.clear();
    //    window.draw(shape);
    //    window.display();
    //}

    // Create our window manager instance
    Core::GameWindowManager gameWindowManager;

    // Initialize the window
    gameWindowManager.initialize();

    // Create the EventManager instance
    EventManager eventManager;

    while (gameWindowManager.isGameRunning()) {

        // Poll and handle events
        eventManager.pollEvents(gameWindowManager.getGameWindow());

        gameWindowManager.render();
    }

    return 0;
}