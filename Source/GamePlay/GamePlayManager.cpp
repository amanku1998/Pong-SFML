#include "../../Header/GamePlay/GamePlayManager.h"
#include <iostream>
using namespace sf;

namespace Gameplay
{
	//GameplayManager::GameplayManager()
	//{
	//	boundary = new Boundary();
	//}

	GameplayManager::GameplayManager(EventManager* manager)
	{
		boundary = new Boundary();

		initialize();
		event_manager = manager;
	}

	void GameplayManager::initialize() {
		ball = new Ball();
		player1 = new Paddle(player1_position_x, player1_position_y);
		player2 = new Paddle(player2_postion_x, player2_postion_y);
	}

	void GameplayManager::render(RenderWindow* game_window)
	{
		boundary->render(game_window);
		ball->render(game_window);
		player1->render(game_window);
		player2->render(game_window);
	}

	void GameplayManager::update()
	{
		ball->update();
		//previous code
		player1->update(event_manager->isKeyPressed(Keyboard::W),
						event_manager->isKeyPressed(Keyboard::S));
		player2->update(event_manager->isKeyPressed(Keyboard::Up),
						event_manager->isKeyPressed(Keyboard::Down));
	}

}