/*
 * Factory.h
 *
 *  Created on: 19 jan. 2016
 *      Author: Geert.van.Wauwe
 */

#ifndef FACTORY_H_
#define FACTORY_H_



#include <PlaygroundObject.h>
#include <Character.h>
#include <list>
class Factory{
public:
	//PlaygroundObjectFactory();
	PlaygroundObject* generate();
	Character* createCharacter();
	std::list <PlaygroundObject*> generateList(int);
};








#endif /* FACTORY_H_ */
