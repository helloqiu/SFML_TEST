#ifndef MYSPRITE_H
#define MYSPRITE_H

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
class MySprite : public sf::Sprite{
	public:
		void setMove(sf::Vector2f);
		void moveSprite(float moveNum);
	private:
		sf::Vector2f moveDistance;
};
#endif