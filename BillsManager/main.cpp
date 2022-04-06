#include <iostream>
#include "Header/Controller/Service.h"
#include "Header/View/UI.h"

int main() {
    Service service{};
    UI ui{service};
    ui.Show();
    return 0;
}
