#ifndef GUESTUSER_H
#define GUESTUSER_H

#include <iostream>
#include <vector>
#include "User.h"

using namespace std;

class GuestUser : public User
{
private:
    
public:
    GuestUser();
    ~GuestUser();
};

#endif