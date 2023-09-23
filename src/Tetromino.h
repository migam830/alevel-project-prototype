#pragma once
#include <SFML/Graphics.hpp>
#include "Block.h"

class Tetromino : public sf::Drawable, public sf::Transformable
{
public:
	Tetromino(char type);
private:
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	Block blocks[4];
};