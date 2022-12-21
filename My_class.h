#pragma once
#include <string>
#include <iostream>


class Man
{
public:
	Man();
	int getAge();
	void setAge(int age);
	const std::string& getName();
	const std::string& setName();
	~Man();
private:
	int _age = 1;
	std::string _name = "Smit";
};

