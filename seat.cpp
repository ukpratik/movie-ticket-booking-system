#include "user.h"
#include "seat.h"

int seat::get_id(){
    return id;
}
bool seat::get_is_occupied(){
    return is_occupied;
}
void seat::set_occupied(bool occu){
    this->is_occupied = occu;
}

seat::seat(int id, bool is_occupied = false)
{
    this->id = id;
    this->is_occupied = is_occupied;
}

seat::~seat()
{
}
