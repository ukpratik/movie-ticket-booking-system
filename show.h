#ifndef SHOW_H
#define SHOW_H

#include <iostream>
#include "hall.h"

using namespace std;

class show
{
private:
    string title;
    int id;
    hall* eventHall;
    int time;
    string status;

public:
    show(string title, hall* hallName, int time);
    ~show();

    void printShow();
    void showAvailableSeats();
    int noSeatsAvailable();
    hall* get_hall();
};

#endif