#include <iostream>
#include <SFML/Graphics.hpp>
#include "../../Header/Core/GameLoop.h"
using namespace sf;
using namespace Core;

int main()
{
#pragma region OldCode

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
#pragma endregion

#pragma region PreviousCode
    //// Create our window manager instance
    //Core::GameWindowManager gameWindowManager;

    //// Initialize the window
    //gameWindowManager.initialize();

    //// Create the EventManager instance
    //EventManager eventManager;

    //while (gameWindowManager.isGameRunning()) {

    //    // Poll and handle events
    //    eventManager.pollEvents(gameWindowManager.getGameWindow());

    //    gameWindowManager.render();
    //}

#pragma endregion

    // Step 1: Create the GameLoop object
    GameLoop* game_loop_manager = new GameLoop();

    // Step 2: Initialize the game environment
    game_loop_manager->initialize();

    // Step 3: Run the game loop
    while (game_loop_manager->isGameRunning())
    {
        game_loop_manager->pollEvent();
        game_loop_manager->update();
        game_loop_manager->render();
    }

    return 0;
}