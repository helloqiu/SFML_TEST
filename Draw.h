#ifndef DRAW_H
#define DRAW_H
#include "MySprite.h"
#include <vector>
class Draw{
	public:
		void drawSprite(sf::RenderWindow &window , std::vector< std::vector<MySprite*>* >* v);

};
#endif