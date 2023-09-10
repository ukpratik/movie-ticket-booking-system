#ifndef EVENTMANAGER_H
#define EVENTMANAGER_H

#include <string>
#include <vector>
#include "moviePlex.h"
#include "show.h"

using namespace std;

class eventManager
{
private:
    moviePlex* plex;
    vector<show*> events;
public:
    eventManager();
    eventManager(string plexName);
    ~eventManager();

    void createMoviePLex();
    void addhall(string name, int l, int b);
    hall* get_hall(string hallName);
    void createShow(string tittle, string hallName, int time);
    void printshows();
    void bookTicket(string eventName, string name, int seatNo);
};


#endif