#include "../../Header/Event/EventManager.h"
#include <iostream>

void EventManager::pollEvents(sf::RenderWindow* game_window) {
    sf::Event event;
    while (game_window->pollEvent(event)) {
        // Handle left mouse button click
        if (isLeftMouseButtonClicked())
        {
            sf::Vector2i position = sf::Mouse::getPosition(*game_window);

            // Log the mouse position
            std::cout << "Left mouse click at: " << position.x << ", " << position.y << std::endl;
        }
    }
}

bool EventManager::isKeyPressed(sf::Keyboard::Key key)
{
    //
    //std::cout << "isKeyPressed: " << isKeyPressed(key) << std::endl;
    //return sf::Keyboard::isKeyPressed(key); // Assuming you're using SFML

    bool keyState = sf::Keyboard::isKeyPressed(key); // Check the key state
    std::cout << "isKeyPressed: " << key << " -> " << keyState << std::endl; // Log the key state
    return keyState;
}

bool EventManager::isLeftMouseButtonClicked()
{
    // Detect if the left mouse button is clicked
    return (sf::Mouse::isButtonPressed(sf::Mouse::Left));
}