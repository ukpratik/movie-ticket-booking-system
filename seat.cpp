#include "user.cpp"

class seat
{
private:
    int id;
    bool is_occupied;
    user* customer;

public:
    seat(int id, bool is_occupied);
    ~seat();
    int get_id(){
        return id;
    }
    bool get_is_occupied(){
        return is_occupied;
    }
    void set_occupied(bool occu){
        this->is_occupied = occu;
    }
};

seat::seat(int id, bool is_occupied = false)
{
    this->id = id;
    this->is_occupied = is_occupied;
}

seat::~seat()
{
}
