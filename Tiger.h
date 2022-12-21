#pragma once
#include <string>
#include <iostream>
//метод - это функци€ член класса
//существует наследование и декомпозици€

class Animal {

public:
	Animal() {
		std:: cout<< "Animal() constructor" << std::endl;
	}
	~Animal() {
		std::cout << "~Animal() destructor" << std::endl;
	}
	int fight() {
		return strength;
	}
	int run() {
		return speed;
	}
	void eat() {
		std::cout << "Animal have eaten" << std::endl;
	}
private:
	int strength = 10;
	int speed = 5;
};

class Tiger : public Animal //наследование тийгером от анимал, все функции у тайгера будут доступны от анимал в паблике
{
public:
	Tiger(int height, const std::string& color){
		std::cout << "Tiger() constructor" << std::endl;
		_height = height;
		_color = color;
	}

	~Tiger() {
		std::cout << "~Tiger() destructor" << std::endl;
	}
	int fight() { //така€ же точно как у энимал
		return _strength;
	}
	int getHeight() const { //константна функци€, нельз€ мен€ть значени€ полей классов (переменных)
		//_height = -5; ошибка компил€ции compile error
		//setHeight(10); не константна€ функци€ compile error
		return _height;
	}

	void setHeight(int height) {
		_height = height;
	}

	const std::string& getColor() {
		return _color;

	}

	friend std::ostream& operator<<(std::ostream& os, Tiger& t) { //строго не рекомендуетс€
		os << t.getHeight()<<" "<<t.getColor();
		return os;
	}

private:
	int _height;
	std::string _color;
	int _strength = 50;
};

