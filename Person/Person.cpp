// Changsoo Jung
// Person.h
#include <iostream>
#include "Person.h"

using namespace std;

Person::getFirstName() {
    return firstName;
}
Person::getLastName() {
    return lastName;
}
Person::getFullName() {
    return firstName + lastName;
}