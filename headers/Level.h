/*
 * Level.h
 *
 *  Created on: 19 jan. 2016
 *      Author: Geert.van.Wauwe
 */

#ifndef LEVEL_H_
#define LEVEL_H_
#include <Playground.h>
#include <PlaygroundObject.h>
class Level{
public:
	Playground _playground;


	Level(){
		std::cout <<"level created"<<std::endl;
	}
	std::list <PlaygroundObject*> getPlaygroundObjects(){

		return _playground.getPlaygroundObjects();
	}
};


#endif /* LEVEL_H_ */
