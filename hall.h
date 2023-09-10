#ifndef HALL_H
#define HALL_H

#include <iostream>
#include <vector>
#include "seat.h"
using namespace std;

class hall{
private:
    string name;
    int id;
    vector<vector<seat*>> seats;
    int totalSeats;
    int seatsAvailable;

public:
    hall(string name, int len, int b);
    hall(string name);
    hall(hall* h);
    ~hall();

    void setSeatSize(int len, int breadth);
    string get_name();
    void printAvailabletSeats();
    int noSeatsAvailable();
    void bookSeat(int id);
};

#endif