/*
 * Renderer.cpp
 *
 *  Created on: 21 jan. 2016
 *      Author: Geert.van.Wauwe
 */


#include <Renderer.h>
#include <stdio.h>
#include <iostream>

//Key press surfaces constants


bool Renderer::init(){

	//Initialization flag
	bool success = true;

	//Initialize SDL
	if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
	{
		printf( "SDL could not initialize! SDL_Error: %s\n", SDL_GetError() );
		success = false;
	}
	else
	{
		//Create window
		gWindow = SDL_CreateWindow( "SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
		if( gWindow == NULL )
		{
			printf( "Window could not be created! SDL_Error: %s\n", SDL_GetError() );
			success = false;
		}
		else
		{
			//Get window surface
			gScreenSurface = SDL_GetWindowSurface( gWindow );
		}
	}

	return success;
}

bool Renderer::blit(){
	std::cout<<"blit: "<<gHelloWorld<<std::endl;
	std::cout<<"blit2: "<<gScreenSurface<<std::endl;

	int result=SDL_BlitSurface( gHelloWorld, NULL, gScreenSurface, NULL );// returns 0 if blit is succesful

	//std::cout<<result<<std::endl;
	//Update the surface
	SDL_UpdateWindowSurface( gWindow );

	if (result==0)
		std::cout<<" no error in blit"<<std::endl;
	return result;

}

void Renderer::wait(int ms){

	SDL_Delay(ms);
}

SDL_Surface* Renderer::loadImage(std::string myPath)
{
	//Loading success flag
	SDL_Surface* mySurface=NULL;
	mySurface = SDL_LoadBMP( myPath.c_str() );
	std::cout<< "myPath:"<<myPath.c_str()<<std::endl;
	std::cout<<"memory address of image: "<<mySurface<<std::endl;
	if( gHelloWorld == NULL )
	{
		printf( "Unable to load image %s! SDL Error: %s\n", myPath.c_str(), SDL_GetError() );
	}

	return mySurface;
}

void Renderer::loadImages(){
	imageArray[ KEY_PRESS_SURFACE_DEFAULT];
	std::string files[]={"Src/preview2.bmp","Src/up.bmp","Src/down.bmp","Src/left.bmp","Src/right.bmp","Src/Xout.bmp"};
for(int i=0;i<= KEY_PRESS_SURFACE_TOTAL;i++){
	imageArray[i]=loadImage(files[i]);
}
}

void Renderer::close()
{
	//Deallocate surface
	SDL_FreeSurface( gHelloWorld );
	gHelloWorld = NULL;

	//Destroy window
	SDL_DestroyWindow( gWindow );
	gWindow = NULL;

	//Quit SDL subsystems
	SDL_Quit();
}

void Renderer::loop(){
	//Main loop flag
	bool quit = false;
	SDL_Surface* gScreenSurface = NULL;
	gHelloWorld=loadImage("Src/preview2.bmp");
	blit();
	//Event handler
	SDL_Event e;

	while(!quit){
		//Handle events on queue
		while( SDL_PollEvent( &e ) != 0 )
		{
			//User requests quit
			if( e.type == SDL_QUIT )
			{
				quit = true;
			}
		}
	}
	std::cout<<"location of image: "<<gHelloWorld<<std::endl;
	//Apply the image
	//SDL_BlitSurface( gHelloWorld, NULL, gScreenSurface, NULL );
	blit();

	//Update the surface
	SDL_UpdateWindowSurface( gWindow );
}

