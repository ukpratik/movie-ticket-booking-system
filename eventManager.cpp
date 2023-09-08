#include <string>
#include <vector>
#include "moviePlex.cpp"
#include "show.cpp"

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

    void createMoviePLex(){

    }

    void addhall(string name, int l, int b){
        plex->addhall(name, l, b);
    }

    hall* get_hall(string hallName){
        return plex->get_hall(hallName);
    }

    void createShow(string tittle, string hallName, int time){
        events.push_back(new show(tittle, get_hall(hallName), time));
    }

    void printshows(){
        for(int i = 0; i < events.size(); ++i){
            cout << "***************** \n";
            events[i]->printShow();
            cout << "\n";
        }
    }

    void bookTicket(string eventName, string name, int seatNo){
        for(int i = 0; i < events.size(); ++i){
            if(events[i]->noSeatsAvailable() > 0){
                events[i]->get_hall()->bookSeat(seatNo);
            }else{

            }
        }
    }
};

eventManager::eventManager(string plexName)
{
    plex = new moviePlex(plexName);
    events.resize(0);
}

eventManager::~eventManager()
{
}
