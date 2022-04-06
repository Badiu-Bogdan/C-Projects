//
// Created by badiu on 4/6/2022.
//

#include "../../Header/Domain/Bill.h"

Bill::Bill(const string &newCompanyName, const string &newSerialNumber, const int &newSum, const bool &newIsPaid)
        : companyName(newCompanyName),
          serialNumber(
                  newSerialNumber),
          sum(newSum),
          isPaid(newIsPaid) {

}

ostream &operator<<(ostream &os, const Bill &entity) {
    os << entity.companyName <<", " << entity.serialNumber << ", " << entity.sum << ", " << entity.isPaid << "\n";
    return os;
}

bool Bill::operator==(const Bill &entity) const {
    if(this->serialNumber == entity.serialNumber)
        return true;
    else
        return false;
}
