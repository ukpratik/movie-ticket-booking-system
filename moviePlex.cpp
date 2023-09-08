#include <string>
#include <vector>
#include "hall.cpp"

using namespace std;

class moviePlex
{
private:
    int id;
    string name;
    vector<hall*> halls;
public:
    moviePlex(string name);
    moviePlex(string name, vector<string> numHalls);
    ~moviePlex();

    hall* get_hall(string hallName){
        for(int i = 0; i < halls.size(); ++i){
            if(halls[i]->get_name() == hallName){
                return new hall(halls[i]);
            }
        }
    }

    void addhall(string name, int l, int b){
        halls.push_back(new hall(name, l, b));
    }

};

moviePlex::moviePlex(string name)
{
    this->name = name;
}

moviePlex::moviePlex(string name, vector<string> hallNames)
{
    this->name = name;
    for(int i = 0 ; i < hallNames.size(); ++i){
        this->halls.push_back(new hall(hallNames[i]));
    }
    
}

moviePlex::~moviePlex()
{
}
