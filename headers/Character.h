/*
 * Character.h
 *
 *  Created on: 19 jan. 2016
 *      Author: Geert.van.Wauwe
 */

#ifndef CHARACTER_H_
#define CHARACTER_H_
#include <PlaygroundObject.h>
#include <Actions.h>
class Character :public PlaygroundObject,public Actions{

private:
	bool blocked_right,blocked_left,blocked_up,blocked_down;
public:
	void jump();
	void right();
	void left();
	Character():blocked_right(false),blocked_left(false),blocked_up(false),blocked_down(true){
		std::cout<<"character created"<<std::endl;
	}
	/*
	~Character(){
		delete this;
	}
	*/
};



#endif /* CHARACTER_H_ */
