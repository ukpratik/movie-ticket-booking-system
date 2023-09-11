#ifndef USER_H_
#define USER_H_

#include <iostream>
#include <string>
using namespace std;

class User
{
private:
    string name;
    int age;
    // int id;
    string mobileNo;
public:
    User(string name, int age, string mobileNo);
    ~User();
};


#endif