#include "Block.h"

Block::Block()
{
	// Set dimensions and outline colour of the block in constructor
	block1.setSize(sf::Vector2f(Block::myScale, Block::myScale));
	block1.setOutlineColor(sf::Color::Black);
	block1.setOutlineThickness(-(Block::myScale / 10));
}
void Block::init(sf::Color color, sf::Vector2f position)
{
	// Set fill colour and position
	block1.setFillColor(color);
	block1.setPosition(position);
}

void Block::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	// Draw the block to the window
	target.draw(block1, states);
}
