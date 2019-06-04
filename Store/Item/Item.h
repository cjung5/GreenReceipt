// Changsoo Jung
// Item.h
#ifndef ITEM_H
#define ITEM_H

#include<iostream>

using namespace std;

class Item {
    public:
        string getItemName();
        int getItemAmounts();
        double getItemPrice();
    private:
        string itemName;
        int itemAmounts;
        double itemPrice;
};
#endif
