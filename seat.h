#ifndef SEAT_H
#define SEAT_H

#include <iostream>
#include "User.h"
using namespace std;

class Seat
{
private:
    int id;
    bool is_occupied;
    User* customer;
public:
    Seat(int id, bool is_occupied);
    ~Seat();
    void set_occupied(bool occu);
    bool get_is_occupied();
    int get_id();
};

#endif