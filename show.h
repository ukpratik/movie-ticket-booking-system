#ifndef SHOW_H
#define SHOW_H

#include <iostream>
#include "Hall.h"

using namespace std;

class Show
{
private:
    string title;
    int id;
    Hall* eventHall;
    int time;
    string status;

public:
    Show(string title, Hall* hallName, int time);
    ~Show();

    void printShow();
    void showAvailableSeats();
    int noSeatsAvailable();
    Hall* get_hall();
    string getEventName(){return title;}
    int getShowTime(){return time;}
};

#endif