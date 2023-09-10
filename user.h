#ifndef USER_H_
#define USER_H_

#include <iostream>
using namespace std;

class user
{
private:
    string name;
    int age;
    int id;
    string mobileNo;
public:
    user(string name, int age, string mobileNo);
    ~user();
};


#endif