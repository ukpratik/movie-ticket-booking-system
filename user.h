#ifndef USER_H_
#define USER_H_

#include <iostream>
#include <string>
using namespace std;

class User
{
private:
    // string name;
public:
    string name;
    bool isLoggedIn;
    User(string name);
    User();
    ~User();
    string getMobileNo(){return mobileNo;}
    // string searchEvent()
};


#endif