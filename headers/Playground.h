/*
 * Playground.h
 *
 *  Created on: 19 jan. 2016
 *      Author: Geert.van.Wauwe
 */

#ifndef PLAYGROUND_H_
#define PLAYGROUND_H_
#include <list>
#include <PlaygroundObject.h>
#include <Factory.h>


class Playground{
public:
	std::list <PlaygroundObject*> myList;
	Factory factory;
	int amt_objects= 10;

	Playground(){
		std::cout<<"defining list"<<std::endl;
		for(int i =1;i<amt_objects;i++){
			myList.push_back( factory.generate());
		}
		myList.push_back( factory.createCharacter());
		std::cout<<"Playground created"<<std::endl;
	}

	std::list<PlaygroundObject*> getPlaygroundObjects(){
		return myList;
	}
};






#endif /* PLAYGROUND_H_ */
