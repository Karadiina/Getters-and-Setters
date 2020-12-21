#pragma once
#include <iostream>
class Person
{
private:
	std::string name;

public:
	Person();
	std::string toString();
	void set_name(std::string new_name);
	std::string get_name();
};

