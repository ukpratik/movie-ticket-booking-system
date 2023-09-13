#ifndef REGISTERED_USER_H
#define REGISTERED_USER_H

#include <string>
#include "User.h"

using namespace std;

class RegisteredUser : public User
{
private:
    int age;
    // int id;
    string mobileNo;
public:
    // RegisteredUser(string name){this->name = name;}
    RegisteredUser(string name, int age, string mobileNo);
    ~RegisteredUser(){}
};

#endif