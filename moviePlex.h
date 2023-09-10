#ifndef MOVIEPLEX_H
#define MOVIEPLEX_H

#include <string>
#include <vector>
#include "show.h"

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
    hall* get_hall(string hallName);
    void addhall(string name, int l, int b);
};

#endif