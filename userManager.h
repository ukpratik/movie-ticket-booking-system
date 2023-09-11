#ifndef USERMANAGER_H
#define USERMANAGER_H

#include "User.h"
#include <vector>
#include <string>

class UserManager
{
private:
    string name;
    int age;
    string mobileno;
    vector<User*> userList;
    
public:
    UserManager();
    ~UserManager();

    void createUser(string name, int age, string mobileNo);

    void bookTicket(User u, vector<int> seats);
    
    void cancelTicket(User u, vector<int> seats);
};


#endif