#include <string>
#include "RegisteredUser.h"

using namespace std;

RegisteredUser::RegisteredUser(string name, int age, string mobileNo){
    this->name = name;
    this->age = age;
    this->mobileNo = mobileNo;
}