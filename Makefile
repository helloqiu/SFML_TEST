build: main.cpp AllSprite.h AllSprite.cpp Draw.cpp Draw.h BackGround.cpp BackGround.h MySprite.cpp MySprite.h
	g++ -c main.cpp AllSprite.cpp Draw.cpp BackGround.cpp MySprite.cpp  
	g++ main.o BackGround.o Draw.o AllSprite.o MySprite.o -o sfml-app -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio
clear: main.o sfml-app AllSprite.o Draw.o BackGround.o MySprite.o
	rm main.o sfml-app AllSprite.o Draw.o BackGround.o MySprite.o