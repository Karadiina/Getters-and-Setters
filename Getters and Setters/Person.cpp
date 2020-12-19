#include "Person.h"


Person::Person() {
	name = "george";
}

std::string Person::toString() {
	return "Persons name is:" + name;
}