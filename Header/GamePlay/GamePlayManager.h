#pragma once
#include "Paddle/Paddle.h"
#include "Ball/Ball.h"
#include "../../Header/Event/EventManager.h"
#include "../../Header/GamePlay/Boundary/Boundary.h"
#include "../Utility/TimeService.h"

using namespace Utility;

namespace Gameplay
{
	class GameplayManager
	{
		private:
		float player1_position_x = 40.0f;
		float player1_position_y = 300.0f;

		float player2_postion_x = 1210.0f;
		float player2_postion_y = 300.0f;

		Ball* ball;
		Paddle* player1;
		Paddle* player2;

		EventManager* event_manager;
		Boundary* boundary;

		TimeService* time_service;

		void initialize();

		public:

		//GameplayManager();
		GameplayManager(EventManager* manager);
		void update();
		void render(RenderWindow* game_window);
	};
}