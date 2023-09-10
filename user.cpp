#include <string>
#include "user.h"

using namespace std;

user::user(string name, int age, string mobileNo)
{
    this->name = name;
    this->age = age;
    this->mobileNo = mobileNo;
}

user::~user()
{
}
