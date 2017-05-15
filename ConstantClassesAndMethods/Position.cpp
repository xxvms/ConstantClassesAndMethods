#include "stdafx.h"
#include "Position.h"
#include <iostream>


Position::Position(int x, int y)
{
	this->x = x;
	this->y = y;
}
void Position::getPostion()const
{
	std::cout << "x: " << x << std::endl;
	std::cout << "y: " << y << std::endl;
}

void Position::setPosition(int x, int y)
{
	this->x = x;
	this->y = y;
}


Position::~Position()
{
}
