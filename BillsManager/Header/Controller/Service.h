#pragma once
//
// Created by badiu on 4/6/2022.
//

#ifndef TEST1LAB1_SERVICE_H
#define TEST1LAB1_SERVICE_H
#include <vector>
#include "../Domain/Bill.h"

class Service {
private:
    vector<Bill> repo;

public:
    Service();
    void printAll();
    int addBill(Bill &newBill);
    int payBill(string serialNumber);
    int unPaidBills();
    vector<Bill> getAllElements();

};


#endif //TEST1LAB1_SERVICE_H
