// Changsoo Jung
// Item.cpp
#include <iostream>
#include "Item.h"

using namespace std;

string Item::getItemName() {
    return itemName;
}
int Item::getItemAmounts() {
    return itemAmounts;
}
double Item::getItemPrice() {
    return itemPrice;
}