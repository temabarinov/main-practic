
#ifndef QUADRILATERALS_H
#define QUADRILATERALS_H
#include "drawshape.h"
#include <iostream>


class quadrilateral: public drawshape{
    private:
        int a,b,c,d;
        int A,B,C,D;
    public:
        quadrilateral(int seta,int setb,int setc,int setd,int setA,int setB,int setC,int setD);
        
        int geta();
        int getb();
        int getc();
        int getd();
        int getA();
        int getB();
        int getC();
        int getD();


        void draw();






};

class square:public quadrilateral{
    public:
        square(int seta);

        void draw();

};
class rhombus:public quadrilateral{
    public:
        rhombus(int seta,int setA,int setB);


        void draw();


};

class rectangle:public quadrilateral{
    public:
        rectangle(int seta,int setb);


        void draw();



};


class parallelogram:public quadrilateral{
    public:
        parallelogram(int seta,int setb,int setA,int setB);


        void draw();


};



#endif