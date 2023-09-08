#include "user.h"
#include <vector>

class userManager
{
private:
    vector<user> userList;
    
public:
    userManager();
    ~userManager();

    void createUser(string name, int age, string mobileNo){
        userList.push_back(user(name, age, mobileNo));
    }

    void bookTicket(user u, vector<int> seats){

    }
    
    void cancelTicket(user u, vector<int> seats){
        
    }
};

userManager::userManager()
{
}

userManager::~userManager()
{
}
