#include "../../Header/GamePlay/GamePlayManager.h"
using namespace sf;

namespace Gameplay
{
	//GameplayManager::GameplayManager() {
	//	initialize();
	//}

	//GameplayManager::GameplayManager(EventManager* manager)
	//{
	//	//initialize();
	//	event_manager = manager;
	//}

	GameplayManager::GameplayManager()
	{
		event_manager = nullptr; // Ensure it's null if not explicitly set
		initialize();
	}

	GameplayManager::GameplayManager(EventManager* manager)
		: event_manager(manager) // Initialize event_manager directly
	{
		initialize();
	}

	void GameplayManager::initialize() {
		ball = new Ball();
		player1 = new Paddle(player1_position_x, player1_position_y);
		player2 = new Paddle(player2_postion_x, player2_postion_y);
	}

	void GameplayManager::render(RenderWindow* game_window)
	{
		ball->render(game_window);
		player1->render(game_window);
		player2->render(game_window);
	}

	void GameplayManager::update()
	{
		//previous code
		player1->update(event_manager->isKeyPressed(sf::Keyboard::W),
						event_manager->isKeyPressed(sf::Keyboard::S));
		player2->update(event_manager->isKeyPressed(sf::Keyboard::Up),
						event_manager->isKeyPressed(sf::Keyboard::Down));
	}

}