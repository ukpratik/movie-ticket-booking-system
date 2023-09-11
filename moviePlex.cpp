#include <string>
#include <vector>
#include "Hall.h"
#include "MoviePlex.h"

using namespace std;

Hall* MoviePlex::get_hall(string hallName){
    for(int i = 0; i < halls.size(); ++i){
        if(halls[i]->get_name() == hallName){
            return new Hall(halls[i]);
        }
    }
}

void MoviePlex::addhall(string name, int l, int b){
    halls.push_back(new Hall(name, l, b));
}


MoviePlex::MoviePlex(string name)
{
    this->name = name;
}

MoviePlex::MoviePlex(string name, vector<string> hallNames)
{
    this->name = name;
    for(int i = 0 ; i < hallNames.size(); ++i){
        this->halls.push_back(new Hall(hallNames[i]));
    }
    
}

MoviePlex::~MoviePlex()
{
}
