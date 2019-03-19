#include "Pony.h"


Pony::Pony(void)
{
}


Pony::~Pony(void)
{
}


Pony::Pony(string name){

	setType(name);

	if(name == "white"){
		setHSVmin(Scalar(0,47,179));
		setHSVmax(Scalar(46,100,224));

		setColour(Scalar(0,0,0));
	}
	if(name == "green"){
		setHSVmin(Scalar(21,107,79));
		setHSVmax(Scalar(44,191,160));

		setColour(Scalar(0,255,0));
	}
	if(name == "blue"){
		setHSVmin(Scalar(86,12,135));
		setHSVmax(Scalar(105,128,256));

		setColour(Scalar(255,0,0));
	}
	if(name == "pink"){
		setHSVmin(Scalar(147,26,200));
		setHSVmax(Scalar(182,256,256));

		setColour(Scalar(77,51,196));
	}
	if(name == "yellow"){
		setHSVmin(Scalar(140,0,247));
		setHSVmax(Scalar(160,12,256));

		setColour(Scalar(0,255,255));
	}
}


int Pony::getXPos(){

	return Pony::xPos;

}

void Pony::setXPos(int x){

	Pony::xPos = x;

}

int Pony::getYPos(){

	return Pony::yPos;

}

void Pony::setYPos(int y){

	Pony::yPos = y;

}

Scalar Pony::getHSVmin(){

	return HSVmin;

}

Scalar Pony::getHSVmax(){

	return HSVmax;

}

void Pony::setHSVmin(Scalar min){
	
	Pony::HSVmin = min;

}

void Pony::setHSVmax(Scalar max){
	
	Pony::HSVmax = max;

}