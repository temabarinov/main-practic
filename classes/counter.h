#ifndef COUNTER_H
#define COUNTER_H



class counter{
    private:
    int first_number;
    public:
    counter();
    void setFirsrt_number(int First_number);
    
    void increment() ;
    void decrement();
    counter(int start);
    int getCounter();



};










#endif