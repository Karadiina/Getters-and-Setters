#include <iostream>
#include "Person.h"

int main()
{
    Person person;

    person.set_name("Carl");

    std::cout << person.toString() <<  std::endl;

    std::cout << "Name of the person with Get method is : " << person.get_name() << std::endl;

    return 0;
}