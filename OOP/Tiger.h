#pragma once
#include <iostream>

class Tiger
{
public:
	Tiger(){}
	int getHeight();
	void setHeight(int height);
private:
	int _height;
	std::string _name;
	std::string _color;

};