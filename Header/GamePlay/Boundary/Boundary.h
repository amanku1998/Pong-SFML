#pragma once
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;

namespace Gameplay
{
    class Boundary
    {
        private:
            // Top boundary starts at the window's top-left corner
            const float top_position_x = 0.0f;
            const float top_position_y = 0.0f;

            // Bottom boundary
            const float bottom_position_x = 0.0f;
            const float bottom_position_y = 700.0f;

            // Left boundary also starts at top-left
            const float left_position_x = 0.0f;
            const float left_position_y = 0.0f;

            // Right boundary
            const float right_position_x = 1280.0f;
            const float right_position_y = 0.0f;

            //horizontal
            RectangleShape topBoundary;
            RectangleShape bottomBoundary;
            //vertical
            RectangleShape leftBoundary;
            RectangleShape rightBoundary;
            RectangleShape centerLine;

            // Horizontal boundary dimensions (top and bottom)
            const float horizontal_boundary_width = 1280.0f;
            const float horizontal_boundary_height = 20.0f;

            // Vertical boundaries dimensions (left and right)
            const float vertical_boundary_width = 20.0f;
            const float vertical_boundary_height = 720.0f;

            //center lines properties
            const float center_line_width = 10.0f;
            const float center_line_height = 680.0f;

            const float center_line_position_x = 640.0f;
            const float center_line_position_y = 20.0f;

            //Boundary Colors
            const Color boundary_color = Color::Blue;
            const Color center_line_color = Color::White;

            //create boundaries and the center line
            void createTopBoundary();
            void createBottomBoundary();
            void createLeftBoundary();
            void createRightBoundary();

            void createCenterLine();

        public:
            Boundary();
            void update();
            void render(RenderWindow* game_window);            
    };
}