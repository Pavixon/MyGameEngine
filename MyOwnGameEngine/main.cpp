#include <SFML/Graphics.hpp>

int main()
{
	sf::RenderWindow window(sf::VideoMode({ 500, 500 }), "My window");
	while (window.isOpen())
	{
		while (const std::optional event = window.pollEvent())
		{
			if (event->is<sf::Event::Closed>())
			{
				window.close();
			}
		}
		// clear the window with black color
		window.clear(sf::Color::Black);

		//create an array of 3 vertices that define a triangle primitive
		sf::VertexArray triangle(sf::PrimitiveType::Triangles, 3);

		//define the postion of the triangle's points
		triangle[0].position = sf::Vector2f(200.f, 295.f);
		triangle[1].position = sf::Vector2f(250.f, 205.f);
		triangle[2].position = sf::Vector2f(300.f, 295.f);

		//define the color of the triangle's points
		triangle[0].color = sf::Color::Red;
		triangle[1].color = sf::Color::Blue;
		triangle[2].color = sf::Color::Green;

		window.draw(triangle);

		// end the current frame
		window.display();
	}
}