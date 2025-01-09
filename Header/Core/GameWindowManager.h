#pragma once
#include "../../Header/Core/GameWindowManager.h"
#include <SFML/Graphics.hpp>

using namespace sf;

namespace Core {
    class GameWindowManager {
    private:
        int game_window_width = 1280;
        int game_window_height = 720;

        std::string game_title = "SFML-Pong";

        RenderWindow* game_window;

    public:
        void createGameWindow();

        RenderWindow* getGameWindow();

        void initialize();
        bool isGameRunning();
        void clearGameWindow();
        void displayGameWindow();
    };
}