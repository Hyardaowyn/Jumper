/*
 * renderer.h
 *
 *  Created on: 21 jan. 2016
 *      Author: Geert.van.Wauwe
 */

#ifndef HEADERS_RENDERER_H_
#define HEADERS_RENDERER_H_
#include <iostream>
#include <SDL.h>

enum KeyPressSurfaces
{
    KEY_PRESS_SURFACE_DEFAULT,
    KEY_PRESS_SURFACE_UP,
    KEY_PRESS_SURFACE_DOWN,
    KEY_PRESS_SURFACE_LEFT,
    KEY_PRESS_SURFACE_RIGHT,
    KEY_PRESS_SURFACE_TOTAL
};


class Renderer{

	// window settings
	const int SCREEN_WIDTH = 640;
	const int SCREEN_HEIGHT = 480;

	//The window we'll be rendering to
	SDL_Window* gWindow = NULL;

	//The surface contained by the window
	SDL_Surface* gScreenSurface = NULL;

	//The image we will load and show on the screen
	SDL_Surface* gHelloWorld = NULL;

	SDL_Surface* imageArray[KEY_PRESS_SURFACE_TOTAL];
public:
	bool init();
	SDL_Surface* loadImage(std::string myPath);
	bool blit();
	void wait(int);
	void close();
	void loop();
	void loadImages();
};




#endif /* HEADERS_RENDERER_H_ */
