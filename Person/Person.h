// Changsoo Jung
// Person.h
#ifndef PERSON_H
#define PERSON_H

#include<iostream>

using namespace std;

class Person {
    public:
        string getFirstName();
        string getLastName();
        string getFullName();
    private:
        string firstName;
        string lastName;
};
#endif
