#include "BackGround.h"

void BackGround::init(){
	static sf::Texture texture;
	texture.loadFromFile("resource/background.png");
	this -> setTexture(texture);
	this -> setPosition(0 , 0);
	sf::Vector2f v;
	v.x = 0;
	v.y = 0;
	this -> setMove(v);
}