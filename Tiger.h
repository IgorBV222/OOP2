#pragma once
#include <string>
#include <iostream>
//����� - ��� ������� ���� ������
//���������� ������������ � ������������

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

class Tiger : public Animal //������������ �������� �� ������, ��� ������� � ������� ����� �������� �� ������ � �������
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
	int fight() { //����� �� ����� ��� � ������
		return _strength;
	}
	int getHeight() const { //���������� �������, ������ ������ �������� ����� ������� (����������)
		//_height = -5; ������ ���������� compile error
		//setHeight(10); �� ����������� ������� compile error
		return _height;
	}

	void setHeight(int height) {
		_height = height;
	}

	const std::string& getColor() {
		return _color;

	}

	friend std::ostream& operator<<(std::ostream& os, Tiger& t) { //������ �� �������������
		os << t.getHeight()<<" "<<t.getColor();
		return os;
	}

private:
	int _height;
	std::string _color;
	int _strength = 50;
};

