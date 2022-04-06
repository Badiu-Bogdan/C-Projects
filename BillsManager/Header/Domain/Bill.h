#pragma once
//
// Created by badiu on 4/6/2022.
//

#ifndef TEST1LAB1_BILL_H
#define TEST1LAB1_BILL_H
#include <string>
#include <iostream>
using namespace std;


class Bill {
private:
    string companyName;
    string serialNumber;
    int sum;
    bool isPaid;

public:
    Bill(const string &newCompanyName,const string &newSerialNumber,const int &newSum,const bool &newIsPaid);
    friend ostream& operator<<(ostream& os, const Bill& entity);
    bool operator== (const Bill& entity) const;
    string getSerialNumber(){return this->serialNumber;};
    bool getIsPaid(){return this->isPaid;};
    void setIsPaid(){this->isPaid = true;};
    int getSum(){return this->sum;};
};


#endif //TEST1LAB1_BILL_H
