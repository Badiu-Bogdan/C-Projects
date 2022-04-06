#pragma once
//
// Created by badiu on 4/6/2022.
//

#ifndef TEST1LAB1_UI_H
#define TEST1LAB1_UI_H


#include "../Controller/Service.h"

class UI {
private:
    Service service;

public:
    UI(Service &newService);
    void Show();

};


#endif //TEST1LAB1_UI_H
