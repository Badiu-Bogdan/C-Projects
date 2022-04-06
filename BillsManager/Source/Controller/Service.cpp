//
// Created by badiu on 4/6/2022.
//

#include "../../Header/Controller/Service.h"

Service::Service() {
    repo.push_back(Bill{"Digi","A",10,false});
    repo.push_back(Bill{"Vodafone","B",20,true});
    repo.push_back(Bill{"Orange","C",30,true});
    repo.push_back(Bill{"Apa","D",15,false});
    repo.push_back(Bill{"Gaz","E",25,false});
}


vector<Bill> Service::getAllElements() {
    return repo;
}

void Service::printAll() {
    for (auto & i : repo)
        cout << i ;

}

/*
 * Function to add a bill into the repository.
 * a
 */
int Service::addBill(Bill &newBill) {
    for(auto&i : repo)
        if(i == newBill)
            return 1;

    repo.push_back(newBill);
    return 0;
}

int Service::payBill(string serialNumber) {
    for(auto & i:repo)
        if(i.getSerialNumber() == serialNumber){
            if(!i.getIsPaid()) {
                i.setIsPaid();
            }
            else{
                return 1;
                }
        }
    return 0;
}

/*
 * Function to calculate the sum of unpaid bills.
 * Parses all the element of the vector, at every element it checks if the bill is paid.
 * If paid skips else take the sum and add it to the final result;
 *
 * param: nothing
 * return: sum to be paid from all bills (int)
 * return: 0 if all bills are paid.
 */
int Service::unPaidBills() {
    int result = 0;
    for(auto & i:repo)
        if(!i.getIsPaid())
            result = result + i.getSum();

    return result;
}


