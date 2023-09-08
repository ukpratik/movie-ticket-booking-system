#include <string>
#include <vector>
#include "iostream"
#include "seat.cpp"

using namespace std;

class hall
{
private:
    string name;
    int id;
    vector<vector<seat*>> seats;
    int totalSeats;
    int seatsAvailable;

public:
    hall(string name);
    hall(string name, int l, int b);
    hall(hall* h);
    ~hall();
    void setSeatSize(int len, int breadth){
        totalSeats = len*breadth;
        seatsAvailable = totalSeats;
        int id = 0;
        for(int i = 0; i < len; ++i){
            seats.push_back(vector<seat*> {});
            for(int j = 0; j < breadth; ++j){
                seats[i].push_back(new seat(id++));
            }
        }
    }

    string get_name(){
        return this->name;
    }

    void prinAvailabletSeats(){
        cout << "*********** Printing Seats ************";
        for(int i = 0; i < seats.size(); ++i){
            for(int j = 0; j < seats[i].size(); ++j){
                if(seats[i][j]->get_is_occupied() == false){
                    cout << seats[i][j]->get_id() << " ";
                }
            }
            cout << " \n";
        }
    }

    int noSeatsAvailable(){
        return seatsAvailable;
    }

    void bookSeat(int id){
        if(seatsAvailable > 0){
            for(int i = 0 ; i < seats.size(); ++i){
                for(int j = 0; j < seats[i].size(); ++j){
                    if(seats[i][j]->get_id() == id){
                        seats[i][j]->set_occupied(true);
                        --seatsAvailable;
                        return;
                    }
                }
            }
        }
    }
    
};

hall::hall(string name, int len, int b)
{
    this->name = name;
    setSeatSize(len, b);
}

hall::hall(string name)
{
    this->name = name; 
}

hall::hall(hall* h)
{
    this->name = h->name;
    this->id = h->id;
    this->seats = h->seats;
}


hall::~hall()
{
}
