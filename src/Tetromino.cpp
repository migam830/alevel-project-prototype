#include "Tetromino.h"

Tetromino::Tetromino(char type)
{
	// Check tetromino type (may be separate classes for each tetromino in future)
	if (type == 'i')
	{
		blocks[0].init(sf::Color::Cyan, sf::Vector2f(0, 0));
		blocks[1].init(sf::Color::Cyan, sf::Vector2f(Block::myScale, 0));
		blocks[2].init(sf::Color::Cyan, sf::Vector2f(Block::myScale * 2, 0));
		blocks[3].init(sf::Color::Cyan, sf::Vector2f(Block::myScale * 3, 0));
		setOrigin(sf::Vector2f(Block::myScale * 1.5, Block::myScale * 0.5));
	}
	else if (type == 'j')
	{
		blocks[0].init(sf::Color::Blue, sf::Vector2f(0, 0));
		blocks[1].init(sf::Color::Blue, sf::Vector2f(0, Block::myScale));
		blocks[2].init(sf::Color::Blue, sf::Vector2f(Block::myScale, Block::myScale));
		blocks[3].init(sf::Color::Blue, sf::Vector2f(Block::myScale * 2, Block::myScale));
		setOrigin(sf::Vector2f(Block::myScale * 1.5, Block::myScale * 1.5));
	}
	else if (type == 'l')
	{
		blocks[0].init(sf::Color(255, 165, 0), sf::Vector2f(0, Block::myScale));
		blocks[1].init(sf::Color(255, 165, 0), sf::Vector2f(Block::myScale, Block::myScale));
		blocks[2].init(sf::Color(255, 165, 0), sf::Vector2f(Block::myScale * 2, Block::myScale));
		blocks[3].init(sf::Color(255, 165, 0), sf::Vector2f(Block::myScale * 2, 0));
		setOrigin(sf::Vector2f(Block::myScale * 1.5, Block::myScale * 1.5));
	}
	else if (type == 'o')
	{
		blocks[0].init(sf::Color::Yellow, sf::Vector2f(0, 0));
		blocks[1].init(sf::Color::Yellow, sf::Vector2f(Block::myScale, 0));
		blocks[2].init(sf::Color::Yellow, sf::Vector2f(0, Block::myScale));
		blocks[3].init(sf::Color::Yellow, sf::Vector2f(Block::myScale, Block::myScale));
		setOrigin(sf::Vector2f(Block::myScale, Block::myScale));
	}
	else if (type == 's')
	{
		blocks[0].init(sf::Color::Green, sf::Vector2f(0, Block::myScale));
		blocks[1].init(sf::Color::Green, sf::Vector2f(Block::myScale, Block::myScale));
		blocks[2].init(sf::Color::Green, sf::Vector2f(Block::myScale, 0));
		blocks[3].init(sf::Color::Green, sf::Vector2f(Block::myScale * 2, 0));
		setOrigin(sf::Vector2f(Block::myScale * 1.5, Block::myScale * 1.5));
	}
	else if (type == 't')
	{
		blocks[0].init(sf::Color::Magenta, sf::Vector2f(Block::myScale, 0));
		blocks[1].init(sf::Color::Magenta, sf::Vector2f(0, Block::myScale));
		blocks[2].init(sf::Color::Magenta, sf::Vector2f(Block::myScale, Block::myScale));
		blocks[3].init(sf::Color::Magenta, sf::Vector2f(Block::myScale * 2, Block::myScale));
		setOrigin(sf::Vector2f(Block::myScale * 1.5, Block::myScale * 1.5));
	}
	else if (type == 'z')
	{
		blocks[0].init(sf::Color::Red, sf::Vector2f(0, 0));
		blocks[1].init(sf::Color::Red, sf::Vector2f(Block::myScale, 0));
		blocks[2].init(sf::Color::Red, sf::Vector2f(Block::myScale, Block::myScale));
		blocks[3].init(sf::Color::Red, sf::Vector2f(Block::myScale * 2, Block::myScale));
		setOrigin(sf::Vector2f(Block::myScale * 1.5, Block::myScale * 1.5));
	}
	// Otherwise show an error
	else
	{
		throw "Invalid tetromino type";
	}
}

void Tetromino::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	// Apply all transformations
	states.transform *= getTransform();

	for (auto& i : blocks)
	{
		target.draw(i, states);
	}
}