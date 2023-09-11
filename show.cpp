#include <string>
#include <iostream>
#include "Hall.h"
#include "Show.h"

using namespace std;

void Show::printShow(){
    cout << "Title : " << title << "\n";
    cout << "Hallname: " << eventHall->get_name() << "\n";
    cout << "Time : " << time << " \n";
}
void Show::showAvailableSeats(){
    eventHall->printAvailabletSeats();
}
int Show::noSeatsAvailable(){
    return eventHall->noSeatsAvailable();
}
Hall* Show::get_hall(){
    return eventHall;
}

Show::Show(string title, Hall* hallName, int time)
{
    this->time = time;
    this->title = title;
    this->eventHall = hallName;
    status = "created";
}

Show::~Show()
{
}
