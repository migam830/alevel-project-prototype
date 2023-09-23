#include <SFML/Graphics.hpp>
#include "Block.h"
#include "Tetromino.h"
#include "PlayField.h"

int main()
{
	PlayField p1;
	Tetromino t1('t');
	t1.setPosition(p1.getSpawnPoint());
	sf::RenderWindow window(sf::VideoMode(Block::myScale * 12, Block::myScale * 21), "Tetris prototype");

	// Enable vertical sync (eliminates tearing and significantly reduces CPU usage)
	window.setVerticalSyncEnabled(true);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			// Handle events here
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}

			// Check for key presses
			if (event.type == sf::Event::KeyPressed)
			{
				if (event.key.code == sf::Keyboard::Right)
				{
					t1.move(sf::Vector2f(Block::myScale, 0));
				}
				if (event.key.code == sf::Keyboard::Left)
				{
					t1.move(sf::Vector2f(-Block::myScale, 0));
				}
				if (event.key.code == sf::Keyboard::Up)
				{
					t1.rotate(90);
				}
				if (event.key.code == sf::Keyboard::Down)
				{
					t1.move(sf::Vector2f(0, Block::myScale));
				}
			}
		}
		// Clear window (white background)
		window.clear(sf::Color::White);

		// Draw stuff here
		window.draw(t1);
		window.draw(p1);

		window.display();
	}

	// Return with 0 if run successfully
	return 0;
}