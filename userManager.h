#ifndef USERMANAGER_H
#define USERMANAGER_H

#include "user.h"
#include <vector>

namespace usermanager{
    class userManager
    {
    private:
        vector<user> userList;
        
    public:
        userManager();
        ~userManager();

        void createUser(string name, int age, string mobileNo);

        void bookTicket(user u, vector<int> seats);
        
        void cancelTicket(user u, vector<int> seats);
    };
}

#endif