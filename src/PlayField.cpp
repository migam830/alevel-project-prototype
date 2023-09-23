#include "PlayField.h"

PlayField::PlayField()
{
	// Loop over all blocks and initialise them

	// Left wall
	for (int i = 0; i < 20; i++)
	{
		blocks[i].init(sf::Color(128, 128, 128), sf::Vector2f(0, Block::myScale * i));
	}
	// Base
	for (int i = 20; i < 32; i++)
	{
		blocks[i].init(sf::Color(128, 128, 128), sf::Vector2f(Block::myScale * (i - 20), Block::myScale * 20));
	}
	// Right wall
	for (int i = 32; i <= 51; i++)
	{
		blocks[i].init(sf::Color(128, 128, 128), sf::Vector2f(Block::myScale * 11, Block::myScale * (i - 32)));
	}
}

sf::Vector2f PlayField::getSpawnPoint()
{
	return spawnPoint;
}

void PlayField::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	// Draw each block
	for (auto& i : blocks)
	{
		target.draw(i, states);
	}
}
