#ifndef _GAME_H_
#define _GAME_H_

#pragma once


class Game {
public:
	Game();
	~Game();
	void HandleInput();
	void Update();
	void Render();
	GameWindow* GetWindow();
	sf::Time GetElapsed();
	void RestartClock();
private:

	GameWindow m_window;
	World      m_world;
	Snake      m_snake;
	sf::Clock  m_clock;
	sf::Time   m_elapsed;
};
#endif // !_GAME_H_


