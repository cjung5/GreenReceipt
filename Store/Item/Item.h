// Changsoo Jung
// Item.h
#ifndef ITEM_H
#define ITEM_H

#include<iostream>

using namespace std;

class Item {
    public:
        string getItemName();
        stirng getAmounts();
        string getPrice();
    private:
        string itemName;
        int itemAmounts;
        double price;
};
#endif
