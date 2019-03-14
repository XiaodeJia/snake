#include <SFML/Graphics.hpp>
#include "GameWindow.h"
#include "Snake.h"
#include "World.h"

#include "game.h"

int main(int argc, void** argv[]) {
	// Program entry point.
	Game game; // Creating our game object.
	while (!game.GetWindow()->IsDone()) {
		// Game loop.
		game.RestartClock();
		game.HandleInput();
		game.Update();
		game.Render();
		
	}

	return 0;
}