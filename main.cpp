#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include "AllSprite.h"
#include "Draw.h"
#include "BackGround.h"

int main(){
	float disNum;
	// the clock to control fps
	sf::Clock fpsClock;
	// the fps time
	sf::Time fpsTime = sf::seconds(0.017f);

	sf::RenderWindow window(sf::VideoMode(480 , 800) , "plane");
	AllSprite allSprite;
	Draw draw;
	BackGround background;
	background.init();
	std::vector< MySprite* > v;
	v.push_back((MySprite*) &background);
	allSprite.addSprite(v);


	while (window.isOpen()){
		sf::Event event;
		while (window.pollEvent(event)){
			if (event.type == sf::Event::Closed){
				window.close();
			}
		}
		if(fpsClock.getElapsedTime().asSeconds() >= fpsTime.asSeconds()){
			// get the number of distance
			disNum = fpsClock.getElapsedTime().asSeconds() * 60;
			window.clear();
			allSprite.checkSprite(window);
			allSprite.moveAll(disNum);
			draw.drawSprite(window, allSprite.getSprite());
			window.display();
			fpsClock.restart();
		}
	}
}