#include <string>

using namespace std;

class user
{
private:
    string name;
    int age;
    int id;
    string mobileNo;
public:
    user(string name, int age, string mobileNo);
    ~user();

};

user::user(string name, int age, string mobileNo)
{
    this->name = name;
    this->age = age;
    this->mobileNo = mobileNo;
}

user::~user()
{
}
