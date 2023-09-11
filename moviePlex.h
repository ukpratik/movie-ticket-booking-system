#ifndef MOVIEPLEX_H
#define MOVIEPLEX_H

#include <string>
#include <vector>
#include "Show.h"
#include "Hall.h"

using namespace std;

class MoviePlex
{
private:
    int id;
    string name;
    vector<Hall*> halls;
public:
    MoviePlex(string name);
    MoviePlex(string name, vector<string> numHalls);
    ~MoviePlex();
    Hall* get_hall(string hallName);
    void addhall(string name, int l, int b);
};

#endif