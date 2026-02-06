#include"counter.h"




    
    
    counter::counter() : first_number(1) {}
    void counter::setFirsrt_number(int First_number){
        first_number=First_number;
    }
    
    void counter::increment() { first_number++; }
    void counter::decrement() { first_number--; }
    counter::counter(int start) : first_number(start) {}
    int counter::getCounter(){return first_number;}



