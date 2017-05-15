// ConstantClassesAndMethods.cpp : Defines the entry point for the console application.
//
//
// Constant Classes and  methods - Arek class


#include "stdafx.h"
#include <iostream>
#include "Position.h"


int main()
{
	Position dog(10, 50); // god is movable

	dog.getPostion();
	dog.setPosition(50, 100);
	dog.getPostion();

	const Position house(100, 200); // house object is not movable!!
	house.getPostion();
	//house.setPosition(); //unable to get position due to fact that in .h and .cpp we have const Position::getPostion()const


	system("pause");
    return 0;
}

