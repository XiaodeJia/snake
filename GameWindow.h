#pragma once

class GameWindow {
public:
	GameWindow();
	GameWindow(const std::string& l_title, const sf::Vector2u& l_size);
	~GameWindow();
	void BeginDraw(); // Clear the window.
	void EndDraw(); // Display the changes.
	void Update();
	bool IsDone();
	bool IsFullscreen();
	sf::Vector2u GetWindowSize();
	sf::RenderWindow* GetRenderWindow();
	void ToggleFullscreen();
	void Draw(sf::Drawable& l_drawable);
private:
	void Setup(const std::string& l_title, const sf::Vector2u& l_size);
	void Destroy();
	void Create();
	sf::RenderWindow m_window;
	sf::Vector2u m_windowSize;
	std::string m_windowTitle;
	bool m_isDone;
	bool m_isFullscreen;
};