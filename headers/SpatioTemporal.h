/*
 * SpatioTemporal.h
 *
 *  Created on: 19 jan. 2016
 *      Author: Geert.van.Wauwe
 */

#ifndef SPATIOTEMPORAL_H_
#define SPATIOTEMPORAL_H_


class SpatioTemporal{
	/*
	 * x,vx,y,vy we're not gonna go 3 dimensional, also c++11 is used for non static member initialization
	 */
public:
	double _posx=0.5;
	double _vx=0;
	double _posy=0;
	double _vy=0;
	double _width=0;
	double _height=0;

	SpatioTemporal(double posx=0, double vx=0, double posy=1,double vy=0,double width=0,double height=0){ // non default constructor is defined
		_posx=posx;
		_vx=vx;
		_posy=posy;
		_vy=vy;
		_width=width;
		_height=height;
	}

	//SpatioTemporal(){}; //since non default constructor is defined, you have to define a default constructor yourself otherwise it would be empty


	/*
	 * getters
	 */
	double getPosx(){
		return _posx;
	}
	double getPosy(){
			return _posy;
		}
	double getVx(){
		return _vx;
	}
	double getVy(){
		return _vy;
	}
	/*
	 * setters
	 */
	void setPosx(double posx){
		_posx=posx;
	}
	void setPosy(double posy){
			_posy=posy;
		}
	void setVx(double vx){
		_vx=vx;
	}
	void setVy(double vy){
		_vy=vy;
	}

};


#endif /* SPATIOTEMPORAL_H_ */
