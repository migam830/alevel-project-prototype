#pragma once
#include <SFML/Graphics.hpp>
#include "Block.h"

class PlayField : public sf::Drawable
{
public:
	PlayField();
	sf::Vector2f getSpawnPoint();
private:
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	Block blocks[52];
	const sf::Vector2f spawnPoint = sf::Vector2f(Block::myScale * 5.5, Block::myScale * 1.5);
};