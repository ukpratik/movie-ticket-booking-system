#include "user.h"
#include <vector>
#include "userManager.h"

using namespace usermanager;


void userManager::createUser(string name, int age, string mobileNo){
    userList.push_back(user(name, age, mobileNo));
}

void userManager::bookTicket(user u, vector<int> seats){

}

void userManager::cancelTicket(user u, vector<int> seats){
    
}

userManager::userManager()
{
}

userManager::~userManager()
{
}
