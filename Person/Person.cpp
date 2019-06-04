// Changsoo Jung
// Person.h
#include <iostream>
#include "Person.h"

using namespace std;

string Person::getFirstName() {
    return firstName;
}
string Person::getLastName() {
    return lastName;
}
string Person::getFullName() {
    return firstName + lastName;
}