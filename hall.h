#ifndef HALL_H
#define HALL_H

#include <iostream>
#include <vector>
#include "Seat.h"

using namespace std;

class Hall{
private:
    string name;
    // int id;
    vector<vector<Seat*>> seats;
    int totalSeats;
    int seatsAvailable;

public:
    Hall(string name, int len, int b);
    Hall(string name);
    Hall(Hall* h);
    ~Hall();

    void setSeatSize(int len, int breadth);
    string get_name();
    void printAvailabletSeats();
    int noSeatsAvailable();
    void bookSeat(int id);
};

#endif