/*
 * PlaygroundObject.h
 *
 *  Created on: 19 jan. 2016
 *      Author: Geert.van.Wauwe
 */

#ifndef PLAYGROUNDOBJECT_H_
#define PLAYGROUNDOBJECT_H_
#include <iostream>
#include <Type.h>
#include <SpatioTemporal.h>
class PlaygroundObject{
	Type T;
	SpatioTemporal* st;
public:
	//PlaygroundObject();
	//PlaygroundObject(SpatioTemporal*);
	//PlaygroundObject(SpatioTemporal);
	PlaygroundObject(double a=0,double b=0,double c=0,double d=0,double e=0,double f=0){
		std::cout<<"pgo created"<<std::endl;
	};
	//PlaygroundObject(double,double,double,double);

	/*
	 * st getters
	 */
	double getPosx(){
		return st->getPosx();
	}
	double getPosy(){
			return st->getPosy();
		}
	double getVx(){
		return st->getVx();
	}
	double getVy(){
		return st->getVy();
	}
	/*
	 * st setters
	 */
	void setPosx(double x){
		st->setPosx(x);
	}
	void setPosy(double y){
			st->setPosy(y);
		}
	void setVx(double vx){
		st->setVx(vx);
	}
	void setVy(double vy){
		st->setVy(vy);
	}


};




#endif /* PLAYGROUNDOBJECT_H_ */
