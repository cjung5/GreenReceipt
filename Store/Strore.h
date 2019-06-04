// Changsoo Jung
// Store.h
#ifndef STORE_H
#define STORE_H

#include<iostream>

using namespace std;

class Store {
    public:
        string getStoreName();
        string getStoreCallNumber();
        string getStoreAddress();
    private:
        string storeName;
        string storeCallNumber;
        string storeAddress;
};
#endif
