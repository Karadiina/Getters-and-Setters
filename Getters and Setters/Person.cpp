#include "Person.h"


Person::Person() {
	name = "george";
}

std::string Person::toString() {
	return "Persons name is: " + name;
}

void Person::set_name(std::string new_name) {
	name = new_name;

}
std::string Person::get_name() {
	return name;
}