#ifndef ALLSPRITE_H
#define ALLSPRITE_H
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <vector>
#include "MySprite.h"

class AllSprite{
	public:
		void addSprite(std::vector< MySprite* > &v);
		void checkSprite(sf::RenderWindow &window);
		std::vector< std::vector<MySprite*>* >* getSprite();
		void moveAll(float distance);
	private:
		std::vector< std::vector<MySprite*>* > sprite_Vector;
};

#endif