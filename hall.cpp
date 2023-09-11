#include <iostream>
#include <vector>
#include "Seat.h"
#include "Hall.h"

using namespace std;

void Hall::setSeatSize(int len, int breadth){
    this->totalSeats = len*breadth;
    this->seatsAvailable = this->totalSeats;
    int id_ = 0;
    for(int i = 0; i < len; ++i){
        // this->seats.push_back(vector<Seat*> {});
        for(int j = 0; j < breadth; ++j){
            this->seats[i].push_back(new Seat(id_++,false));
        }
    }
}

string Hall::get_name(){
    return this->name;
}

void Hall::printAvailabletSeats(){
    cout << "*********** Printing Seats ************";
    for(int i = 0; i < seats.size(); ++i){
        for(int j = 0; j < seats[i].size(); ++j){
            if(seats[i][j]->get_is_occupied() == false){
                cout << "\t" << seats[i][j]->get_id() << " ";
            }else{
                cout << "\tNA";
            }
        }
        cout << " \n";
    }
}

int Hall::noSeatsAvailable(){
    return this->seatsAvailable;
}

void Hall::bookSeat(int id){
    if(seatsAvailable > 0){
        for(int i = 0 ; i < seats.size(); ++i){
            for(int j = 0; j < seats[i].size(); ++j){
                if(seats[i][j]->get_id() == id){
                    if(seats[i][j]->get_is_occupied() == true){
                        cout << "This seat has been already booked.\n";
                        return ;
                    }
                    seats[i][j]->set_occupied(true);
                    --seatsAvailable;
                    return;
                }
            }
        }
    }
    cout << "No seat available\n"; 
    return;
}

Hall::Hall(string name, int len, int b)
{
    this->name = name;
    seats.resize(len);
    setSeatSize(len, b);
}

Hall::Hall(string name)
{
    this->name = name; 
}

Hall::Hall(Hall* h)
{
    this->name = h->name;
    // this->id = h->id;
    this->seats = h->seats;
    this->totalSeats = h->totalSeats;
    this->seatsAvailable = h->seatsAvailable;
}


Hall::~Hall()
{
}
