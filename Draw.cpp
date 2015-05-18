#include "Draw.h"

void Draw::drawSprite(sf::RenderWindow &window , std::vector< std::vector<MySprite*>* >* v){
	for (int i = 0 ; i < v -> size() ; i ++){
		for (int j = 0 ; j < v -> at(i) -> size() ; j ++){
			window.draw(*(v -> at(i) -> at(j)));
		}
	}
}