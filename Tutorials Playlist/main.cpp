#include "Header/View/AdminUi.h"
#include "Header/View/UserUi.h"

int main() {
    Repository<Tutorial> AdminAccountRepository{};
    AdminController AdminAccountController{AdminAccountRepository};
    AdminUi AdminAccount{AdminAccountController};

    Repository<Tutorial> UserAccountRepository{};
    UserController UserAccountController{AdminAccountRepository, UserAccountRepository};
    UserUi UserAccount{UserAccountController};



    int type;
    while(true) {
        cout << "For Admin press 1 \nFor User press 2. \n";
        cin >> type;
        if (type == 1)
            AdminAccount.menu();
        if (type == 2)
            UserAccount.menu();
        else
            break;
    }

    return 0;
}
