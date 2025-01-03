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

void EventManager::isKeyPressed(sf::Keyboard::Key key)
{

}

bool EventManager::isLeftMouseButtonClicked()
{
    // Detect if the left mouse button is clicked
    return (sf::Mouse::isButtonPressed(sf::Mouse::Left));
}