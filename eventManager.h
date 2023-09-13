#ifndef EVENTMANAGER_H
#define EVENTMANAGER_H

#include <string>
#include <vector>
#include "MoviePlex.h"
#include "Show.h"
#include "Hall.h"

using namespace std;

class EventManager
{
private:
    MoviePlex* plex;
    vector<Show*> events;
public:
    // EventManager();
    EventManager(string plexName);
    ~EventManager();

    void createMoviePLex();
    void addhall(string name, int l, int b);
    Hall* get_hall(string hallName);
    void createShow(string tittle, string hallName, int time);
    void printshows();
    void bookTicket(string eventName, string name, int seatNo);
    void bookTicket(string eventName, string name, int seatNo, int time);
    void showAvailableSeats(string showName, int showTime);
};


#endif