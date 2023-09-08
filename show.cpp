#include <string>
#include <iostream>
#include "hall.cpp"

using namespace std;

class show
{
private:
    string title;
    int id;
    hall* eventHall;
    int time;
    string status;

public:
    show(string title, hall* eventHall, int time);
    ~show();
    void printShow(){
        cout << "Title : " << title << "\n";
        cout << "Hallname: " << eventHall->get_name() << "\n";
        cout << "Time : " << time << " \n";
    }
    void showAvailableSeats(){
        eventHall->prinAvailabletSeats();
    }
    int noSeatsAvailable(){
        return eventHall->noSeatsAvailable();
    }
    hall* get_hall(){
        return eventHall;
    }
};

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
