#pragma once
#include <SFML/Graphics.hpp>

class Block : public sf::Drawable
{
public:
	static const int myScale = 40;
	Block();
	void init(sf::Color color, sf::Vector2f position);
private:
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	sf::RectangleShape block1;

};