#include "triangles.h"


triangle::triangle(int seta,int setb,int setc,int setA,int setB,int setC):a{seta},b{setb},c{setc},A{setA},B{setB},C{setC}{};


int triangle::geta(){
    return a;
}
int triangle::getb(){
    return b;
}
int triangle::getc(){
    return c;
}
int triangle::getA(){
    return A;
}
int triangle::getB(){
    return B;
}
int triangle::getC(){
    return C;
}

void triangle::draw(){
            std::cout<<"Четырехугольник: "<<std::endl;
            std::cout<<"Стороны:     "<<"a="<<geta()<<" b="<<getb()<<" c="<<getc()<<" d="<<getc()<<std::endl;
            std::cout<<"Углы:        "<<"A="<<getA()<<" B="<<getB()<<" C="<<getC()<<" D="<<getC()<<"\n"<<std::endl;
        }
triangle90::triangle90(int seta,int setb,int setc,int setA,int setB):triangle(seta,setb,setc,setA,setB,90){}

void triangle90::draw(){
        std::cout<<"Прямоугольный треугольник: "<<std::endl;
        std::cout<<"Стороны:     "<<"a="<<geta()<<" b="<<getb()<<" c="<<getc()<<std::endl;
        std::cout<<"Углы:        "<<"A="<<getA()<<" B="<<getB()<<" C="<<getC()<<"\n"<<std::endl;
    }
triangle_equal_two_sides::triangle_equal_two_sides(int seta,int setb,int setA,int setB):triangle(seta,setb,seta,setA,setB,setA){}

void triangle_equal_two_sides::draw(){
        std::cout<<"Равнобедренный треугольник: "<<std::endl;
        std::cout<<"Стороны:     "<<"a="<<geta()<<" b="<<getb()<<" c="<<getc()<<std::endl;
        std::cout<<"Углы:        "<<"A="<<getA()<<" B="<<getB()<<" C="<<getC()<<"\n"<<std::endl;
    }
triangle_equal_all_sides::triangle_equal_all_sides(int seta):triangle(seta,seta,seta,60,60,60){}
void triangle_equal_all_sides::draw(){
        std::cout<<"Равносторонний треугольник: "<<std::endl;
        std::cout<<"Стороны:     "<<"a="<<geta()<<" b="<<getb()<<" c="<<getc()<<std::endl;
        std::cout<<"Углы:        "<<"A="<<getA()<<" B="<<getB()<<" C="<<getC()<<"\n"<<std::endl;
    }
