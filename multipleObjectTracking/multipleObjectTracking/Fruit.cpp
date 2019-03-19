#include "Fruit.h"


Fruit::Fruit(void)
{
}

Fruit::Fruit(string name){

	setType(name);

	if(name == "apple"){
		setHSVmin(Scalar(35,95,47));
		setHSVmax(Scalar(51,219,174));

		setColour(Scalar(0,255,0));
	}
	if(name == "banana"){
		setHSVmin(Scalar(19,132,105));
		setHSVmax(Scalar(32,179,181));

		setColour(Scalar(0,255,255));
	}
	if(name == "cherry"){
		setHSVmin(Scalar(0,140,65));
		setHSVmax(Scalar(16,224,144));

		setColour(Scalar(0,0,255));
	}
}

Fruit::~Fruit(void)
{
}

int Fruit::getXPos(){

	return Fruit::xPos;

}

void Fruit::setXPos(int x){

	Fruit::xPos = x;

}

int Fruit::getYPos(){

	return Fruit::yPos;

}

void Fruit::setYPos(int y){

	Fruit::yPos = y;

}

Scalar Fruit::getHSVmin(){

	return HSVmin;

}

Scalar Fruit::getHSVmax(){

	return HSVmax;

}

void Fruit::setHSVmin(Scalar min){
	
	Fruit::HSVmin = min;

}

void Fruit::setHSVmax(Scalar max){
	
	Fruit::HSVmax = max;

}