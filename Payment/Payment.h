// Changsoo Jung
// Payment.h
#ifndef PAYMENT_H
#define PAYMENT_H

#include<iostream>

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
