#include"MySprite.h"

void MySprite::setMove(sf::Vector2f moveDistance){
	this -> moveDistance = moveDistance;
}

void MySprite::moveSprite(float moveNum){
	this -> move(moveNum * moveDistance.x , moveNum * moveDistance.y);
}