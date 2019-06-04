// Changsoo Jung
// Item.cpp
#include <iostream>
#include "Item.h"

using namespace std;

string Item::getItemName() {
    return itemMName;
}
int Item::getAmounts() {
    return itemAmount;
}
double Item::getItemPrice() {
    return itemPice;
}