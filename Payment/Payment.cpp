// Changsoo Jung
// Payment.h
#include <iostream>
#include <string>
#include "Payment.h"

using namespace std;

int Payment::getCurrentYear() {
    return currentYear;
}
int Payment::getCurrentMonth() {
    return currentMonth;
}
int Payment::getCurrentDay() {
    return currentDay;
}

int Payment::getCurrentHour() {
    return currentHour;
}
int Payment::getCurrentMinute() {
    return currentMinute;
}

string Payment::getDate() {
    return to_string(currentMonth) + "/" + to_string(currentDay) + "/" + to_string(currentYear);
}
string Payment::getTime() {
    return to_string(currentHour) + " : " + to_string(currentMinute);
}