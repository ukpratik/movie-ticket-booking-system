#include "User.h"
#include <vector>
#include "UserManager.h"

void UserManager::createUser(string name, int age, string mobileNo){
    for(int i = 0; i < userList.size(); ++i){
        if(userList[i]->getMobileNo() == mobileNo){
            cout << "Account already exists with this mobile number.\n";
            return ;
        }
    }
    userList.push_back(new User(name, age, mobileNo));
    cout << "Account created succusessfully.\n";
}

void UserManager::bookTicket(User u, vector<int> seats){

}

void UserManager::cancelTicket(User u, vector<int> seats){
    
}

UserManager::UserManager()
{
}

UserManager::~UserManager()
{
}
