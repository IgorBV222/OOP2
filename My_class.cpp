#include "My_class.h"
#include <iostream>
#include <string>

Man::Man() {
	std::cout << "Man() constructor" << std::endl;
}
	
int Man::getAge() {
	return _age;
}
void Man::setAge(int age) {
	_age = age;
}

const std::string& Man::getName()
{
	return _name;
}

const std::string& Man::setName()
{
	return _name;
}

Man::~Man()
{
	std::cout << "Man() destructor" << std::endl;
}



