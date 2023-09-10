#include <string>
#include <vector>
#include "hall.h"
#include "moviePlex.h"

using namespace std;

hall* moviePlex::get_hall(string hallName){
    for(int i = 0; i < halls.size(); ++i){
        if(halls[i]->get_name() == hallName){
            return new hall(halls[i]);
        }
    }
}

void moviePlex::addhall(string name, int l, int b){
    halls.push_back(new hall(name, l, b));
}


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
