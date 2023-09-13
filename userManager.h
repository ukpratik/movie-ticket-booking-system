#ifndef USERMANAGER_H
#define USERMANAGER_H

#include "User.h"
#include <vector>
#include <string>

class UserManager
{
private:
    Usermanger* instance = nullptr;
    vector<User*> userList;
    UserManager();
    
public:
    
    ~UserManager();

    static UserManager* createUsermanager(){
        if(instance == nullptr){
            instance = new UserManager();
            return instance;
        }else{
            cout << "Usermanager already created, cannot create more than one Usermanager.\n";
            return nullptr;
        }
    }

    static UserManager* getUserManager(){
        return instance;
    }

    void createUser(string name, int age, string mobileNo);

    void bookTicket(User u, vector<int> seats);
    
    void cancelTicket(User u, vector<int> seats);
};


#endif