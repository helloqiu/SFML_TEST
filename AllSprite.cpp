#include "AllSprite.h"

void AllSprite::addSprite(std::vector< MySprite* > &v){
	sprite_Vector.push_back(&v);
}
void AllSprite::checkSprite(sf::RenderWindow &window){
	sf::Vector2u windowSize = window.getSize();
	for (int i = 0 ; i < sprite_Vector.size() - 1 ; i ++){
		bool deleteSprite = false;
		for (int j = 0 ; j < sprite_Vector.at(i) -> size() ; j ++){
			sf::Vector2f spriteposition = sprite_Vector.at(i) -> at(j) -> getPosition();
			// check the sprite if it's in the window
			if (((spriteposition.x > windowSize.x) || (spriteposition.y > windowSize.y) || (spriteposition.x < 0) || (spriteposition.y < 0)) && ((j == 0) || (deleteSprite))){
				deleteSprite = true;
			}else{
				deleteSprite = false;
			}
		}
		// delete the sprite
		if (deleteSprite){
			sprite_Vector.erase(sprite_Vector.begin() + i);
		}
	}
}
std::vector< std::vector<MySprite*>* >* AllSprite::getSprite(){
	return (&sprite_Vector);
}
void AllSprite::moveAll(float distance){
	for (int i = 0 ; i < sprite_Vector.size() ; i ++){
		for (int j = 0 ; j < sprite_Vector.at(i) -> size() ; j ++){
			sprite_Vector.at(i) -> at(j) -> moveSprite(distance);
		}
	}
}