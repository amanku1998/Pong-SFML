#include "../../Header/Core/GameLoop.h"

namespace Core
{
	void GameLoop::initialize() {
		game_window_manager = new GameWindowManager();
		event_manager = new EventManager();
		//gameplay_manager = new GameplayManager();
		gameplay_manager = new GameplayManager(event_manager);
		sound_manager = new SoundManager();

		SoundManager::PlayBackgroundMusic();// Let the music begin!

		game_window_manager->initialize();
	}

	bool GameLoop::isGameRunning() {
		return game_window_manager->isGameRunning();
	}

	void GameLoop::pollEvent() {
		event_manager->pollEvents(game_window_manager->getGameWindow());
	}

	void GameLoop::update() {
		//used for ball & keboard detection for player
		gameplay_manager->update();
	}

	void GameLoop::render() {
		game_window_manager->clearGameWindow();
		//render the paddles and ball
		gameplay_manager->render(game_window_manager->getGameWindow());

		game_window_manager->displayGameWindow();
	}

}