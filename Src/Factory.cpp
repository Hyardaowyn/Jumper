/*
 * Factory.cpp
 *
 *  Created on: 19 jan. 2016
 *      Author: Geert.van.Wauwe
 */




/*
 * Factory.h
 *
 *  Created on: 19 jan. 2016
 *      Author: Geert.van.Wauwe
 */




#include <Factory.h>
#include <Character.h>

PlaygroundObject* Factory::generate(){
		PlaygroundObject* pgo= new PlaygroundObject();
	return pgo;
}

Character* Factory::createCharacter(){
	Character* character= new Character();
	return character;
}

std::list <PlaygroundObject*> Factory::generateList(int _obj_amt){
	std::list < PlaygroundObject*> myList;
	for(int i=0;i<_obj_amt;i++){
		PlaygroundObject* pgo= new PlaygroundObject();
		myList.push_back(pgo);
	}
	return myList;
}






