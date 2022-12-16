#include <SFML/Graphics.hpp>

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Window");

	window.setFramerateLimit(144);
	window.setVerticalSyncEnabled(true);

	while (window.isOpen())
	{
		// check all the window's events that were triggered since the last iteration of the loop
		sf::Event event;
		while (window.pollEvent(event))
		{
			// "close requested" event: we close the window
			if (event.type == sf::Event::Closed)
				window.close();
		}

		// Clear window with a soild black color.
		window.clear(sf::Color::Black);

		// end the frame.
		window.display();
	}

	return EXIT_SUCCESS;
}