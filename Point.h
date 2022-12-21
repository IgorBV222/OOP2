#pragma once
#include <iostream>

class Point {

public:
	explicit Point(int x, int y, std::string str): _x(x), _y(y), _str(str) {}

	//В большенстве случаев this можно не использовать
	int getX() {
		return this->_x;
		//return (*this)._x; // это вместо ->
	}
	void setX(int x) {
		this->_x = x;
	}
	Point& move(int x, int y) { //сдвиг точки move
		_x += x;
		_y += y;
		return *this; //возвращает указатель this на класс у нас Point
	}



private:
	//Point* this;
	int _x;
	int _y;

	std::string _str;
	
};