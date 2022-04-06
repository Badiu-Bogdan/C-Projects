//
// Created by badiu on 4/6/2022.
//

#include "../../Header/View/UI.h"

UI::UI(Service &newService):service(newService){

}

void printMenu()
{
    cout << "Press 0 to exit \n";
    cout << "Press 1 to add a bill \n";
    cout << "Press 2 to show all the bills \n";
    cout << "press 3 to pay bill \n";
    cout << "Press 4 to see al unpaid bills\n";
}

void UI::Show() {
    int choice;
    while(true)
    {
        printMenu();
        cin.get();
        cin >> choice;
        if(choice == 0)
            return;

        if(choice == 1)
        {
            string newCompanyName;
            cin >> newCompanyName;
            //cin.get();
            string newSerialNumber;
            cin >> newSerialNumber;
            //cin.get();
            int newSum;
            cin >> newSum;
            bool isPaid;
            cin >> isPaid;
            Bill entity{newCompanyName, newSerialNumber, newSum, isPaid};
            int result;
            result = service.addBill(entity);
            if(result == 1)
                cout << "This Bill Already exist! \n";
            else
                cout << "added successfully!\n";
        }

        if(choice == 2)
        {
            service.printAll();
        }

        if(choice == 3)
        {
            string serialNumber;
            cin >> serialNumber;
            int result;
            result = service.payBill(serialNumber);
            if(result == 1)
                cout << "Bill already paid! \n";
            else
                cout << "Bill paid successfully!\n";
        }

        if(choice == 4)
        {
            int result;
            result = service.unPaidBills();
            cout << "The sum of unpaid bills = " << result;
        }
    }

}
