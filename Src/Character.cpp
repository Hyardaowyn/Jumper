/*
 * Character.cpp
 *
 *  Created on: 20 jan. 2016
 *      Author: Geert.van.Wauwe
 */
/*
 * implementation is hard coded and should be changed.
 */

#include <character.h>

void Character::jump(){
	//if(st->_vy==0)// also at highest point so something should change
		this->setVy(jumpf*unit); // hard coded should be changed
}

void Character::right(){
	if(this->getVx() <vxmax*unit)
		this->setVx(this->getVx()+unit);
}

void Character::left(){
	if(this->getVx() >-vxmax*unit)
		this->setVx(this->getVx()-unit);
}


