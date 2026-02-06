#ifndef TRIANGLES_H
#define TRIANGLES_H
#include"drawshape.h"
#include "iostream"
class triangle:public drawshape{
    private:
        int a,b,c;
        int A,B,C;
    public:
        triangle(int seta,int setb,int setc,int setA,int setB,int setC);
        
        int geta();
        int getb();
        int getc();
        int getA();
        int getB();
        int getC();
        void draw();



};


class triangle90: public triangle{
    public:
        triangle90(int seta,int setb,int setc,int setA,int setB);
        
        void draw();



};



class triangle_equal_two_sides:public triangle{
    public:
    triangle_equal_two_sides(int seta,int setb,int setA,int setB);

    void draw();

};


class triangle_equal_all_sides:public triangle{
    public:
        triangle_equal_all_sides(int seta);

    void draw();

};


#endif