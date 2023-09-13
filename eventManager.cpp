#include <string>
#include <vector>
#include "MoviePlex.h"
#include "Show.h"
#include "EventManager.h"

using namespace std;

void EventManager::createMoviePLex(){}

void EventManager::addhall(string name, int l, int b){
    plex->addhall(name, l, b);
}

Hall* EventManager::get_hall(string hallName){
    return plex->get_hall(hallName);
}

void EventManager::createShow(string tittle, string hallName, int time){
    events.push_back(new Show(tittle, get_hall(hallName), time));
}

void EventManager::printshows(){
    for(int i = 0; i < events.size(); ++i){
        cout << "***************** \n";
        events[i]->printShow();
        cout << "\n";
    }
}

void EventManager::bookTicket(string eventName, string name, int seatNo){
    for(int i = 0; i < events.size(); ++i){
        if(events[i]->getEventName() != eventName){
            continue;
        }
        if(events[i]->noSeatsAvailable() > 0){
            events[i]->get_hall()->bookSeat(seatNo);
        }else{
            cout << "No seats Availbale for this show.\n";
        }
        return;
    }
    cout << "No such show is present.\n";
}

void EventManager::bookTicket(string eventName, string name, int seatNo, int time){
    for(int i = 0; i < events.size(); ++i){
        if(events[i]->getEventName() != eventName || events[i]->getShowTime() == time){
            continue;
        }
        if(events[i]->noSeatsAvailable() > 0){
            events[i]->get_hall()->bookSeat(seatNo);
        }else{
            cout << "No seats availbale for this show.\n";
        }
        return;
    }
    cout << "No such show is present.\n";
}

void EventManager::showAvailableSeats(string showName, int showTime){
    for(int i = 0; i < events.size(); ++i){
        if(events[i]->getEventName() == showName && events[i]->getShowTime() == showTime){
            events[i]->showAvailableSeats();
            return;
        }
    }
    cout << "No such show is available.\n";
}

EventManager::EventManager(string plexName)
{
    plex = new MoviePlex(plexName);
    events.resize(0);
}

EventManager::~EventManager()
{
}
