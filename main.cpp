#include <iostream>
#include <vector>
#include "eventManager.h"

int main(){

    EventManager* owner = new EventManager("PVR");
    owner->addhall("Hall1", 10, 10);
    owner->createShow("Bahubali", "Hall1", 3);
    owner->createShow("3 Idiots", "Hall1", 4);
    owner->createShow("SpiderMan", "Hall1", 5);

    owner->printshows();
    owner->showAvailableSeats("Bahubali",3);
    owner->bookTicket("Bahubali", "Pratik" , 12);
    owner->bookTicket("Bahubali", "erwq" , 52);
    owner->bookTicket("Bahubali", "Prarqwertik" , 2);
    owner->showAvailableSeats("Bahubali",3);
    owner->bookTicket("Bahubali", "4534" , 72);
    owner->bookTicket("Bahubali", "wer" , 43);
    owner->bookTicket("Bahubali", "erere" , 12);
    owner->bookTicket("Bahubali", "Pratik" , 12);


    return 0;
}



