/*
 * Renderer.cpp
 *
 *  Created on: 21 jan. 2016
 *      Author: Geert.van.Wauwe
 */


#include <Renderer.h>
#include <stdio.h>
#include <iostream>
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

	//int result=SDL_BlitSurface( gHelloWorld, NULL, gScreenSurface, NULL );// returns 0 if blit is succesful

	//std::cout<<result<<std::endl;
	//Update the surface
	SDL_UpdateWindowSurface( gWindow );

	//if (result==false)
	//	std::cout<<"error in blit"<<std::endl;
	//return result;
	return true;
}

void Renderer::wait(int ms){

	SDL_Delay(ms);
}

bool Renderer::loadBackground(std::string myPath)
{
	//Loading success flag
	bool success = true;

	//Load splash image
	//myPath.c_str()

	gHelloWorld = SDL_LoadBMP( "Src/preview2.bmp" );
	std::cout<< "myPath:"<<myPath.c_str()<<std::endl;
	std::cout<<"location of image: "<<gHelloWorld<<std::endl;
	if( gHelloWorld == NULL )
	{
		std::cout<<"ghelloworld null in loadbackground"<<std::endl;
		std::cout<<gHelloWorld<<std::endl;
		printf( "Unable to load image %s! SDL Error: %s\n", myPath.c_str(), SDL_GetError() );
		success = false;
	}

	return success;
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
