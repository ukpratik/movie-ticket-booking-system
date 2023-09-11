#include "User.h"
#include <vector>
#include "UserManager.h"

void UserManager::createUser(string name, int age, string mobileNo){
    userList.push_back(new User(name, age, mobileNo));
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
