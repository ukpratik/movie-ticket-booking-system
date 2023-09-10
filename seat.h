#ifndef SEAT_H
#define SEAT_H

#include <iostream>
#include "user.h"
using namespace std;

class seat
{
private:
    int id;
    bool is_occupied;
    user* customer;
public:
    seat(int id, bool is_occupied);
    ~seat();
    void set_occupied(bool occu);
    bool get_is_occupied();
    int get_id();
};

#endif