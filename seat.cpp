#include "User.h"
#include "Seat.h"

int Seat::get_id(){
    return id;
}
bool Seat::get_is_occupied(){
    return is_occupied;
}
void Seat::set_occupied(bool occu){
    this->is_occupied = occu;
}

Seat::Seat(int id, bool is_occupied = false)
{
    this->id = id;
    this->is_occupied = is_occupied;
}

Seat::~Seat()
{
}
