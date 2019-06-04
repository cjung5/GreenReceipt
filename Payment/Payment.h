// Changsoo Jung
// Payment.h
#ifndef PAYMENT_H
#define PAYMENT_H

#include <iostream>
#include "../Store/Store.h"
#include "../Store/Item/Item.h"
#include "../Person/Person.h"

using namespace std;

class Payment {
    public:
        int getCurrentYear();
        int getCurrentMonth();
        int getCurrentDay();

        int getCurrentHour();
        int getCurrentMinute();

        string getDate();
        string getTime();
    private:
        int currentYear;
        int currentMonth;
        int currentDay;
        
        int currentHour;
        int currentMinute;
};
#endif
