#include <string>
#include "User.h"

using namespace std;

User::User(string name, int age, string mobileNo)
{
    this->name = name;
    this->age = age;
    this->mobileNo = mobileNo;
}

User::~User()
{
}
