/*
 * Actions.h
 *
 *  Created on: 19 jan. 2016
 *      Author: Geert.van.Wauwe
 */

#ifndef ACTIONS_H_
#define ACTIONS_H_


class Actions{
public:
	double unit=0.01;
	double jumpf=100;
	double leftf=1;
	double rightf=1;
	int vxmax=100;
	int vymax=100;

	/*
	 * pure virtual functions (actions)
	 */
	virtual void jump()=0;
	virtual void right()=0;
	virtual void left()=0;
	//virtual ~Actions(){};

};


#endif /* ACTIONS_H_ */
