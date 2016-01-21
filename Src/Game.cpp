/*
 * Game.cpp
 *
 *  Created on: 20 jan. 2016
 *      Author: Geert.van.Wauwe
 */

#include <Level.h>
#include <SDL.h>
#include <stdio.h>
#include <renderer.h>
class Game{

public:

	Renderer renderer;
			//The surface contained by the window

	//"02_getting_an_image_on_the_screen/hello_world.bmp"

	Game(){
		std::cout<<"init";
		renderer.init();
		renderer.loadBackground("preview");
		renderer.blit();
		renderer.wait(2500);
		renderer.close();
	}



		//The surface contained by the window


		~Game(){\
			delete this;
		}

		void setLevel(){

		}

		int getLevel(){
			return 0;
		}

		void start(){

		}

		void pause(){

		}

		void reset(){

		}

		void save(){

		}

		void load(){

		}

		void wait(){
			for (int i=0;i<2E9;i++){
				i=i+1;
			}
		}

		Level _level;
	};

	int main(int argc, char **argv){
		std::cout<<"test"<<std::endl;
		Game g;
		std::cout<<"test"<<std::endl;
		g.start();

		return 0;
	}



