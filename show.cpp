#include <string>
#include <iostream>
#include "hall.h"
#include "show.h"

using namespace std;

void show::printShow(){
    cout << "Title : " << title << "\n";
    cout << "Hallname: " << eventHall->get_name() << "\n";
    cout << "Time : " << time << " \n";
}
void show::showAvailableSeats(){
    eventHall->printAvailabletSeats();
}
int show::noSeatsAvailable(){
    return eventHall->noSeatsAvailable();
}
hall* show::get_hall(){
    return eventHall;
}

show::show(string title, hall* hallName, int time)
{
    this->time = time;
    this->title = title;
    this->eventHall = hallName;
    status = "created";
}

show::~show()
{
}
