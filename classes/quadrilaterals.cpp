#include "quadrilaterals.h"



int a{},b{},c{},d{};
int A{},B{},C{},D{};
quadrilateral::quadrilateral(int seta,int setb,int setc,int setd,int setA,int setB,int setC,int setD):a{seta},b{setb},c{setc},d{setd},A{setA},B{setb},C{setC},D{setD}{}

 int quadrilateral::geta(){
    return a;
        }
int quadrilateral::getb(){
    return b;
        }
int quadrilateral::getc(){
    return c;
        }
int quadrilateral::getd(){
    return d;
        }
int quadrilateral::getA(){
    return A;
        }
int quadrilateral::getB(){
    return B;
        }
int quadrilateral::getC(){
    return C;
        }
int quadrilateral::getD(){
    return D;
        }
void quadrilateral::draw(){
            std::cout<<"Четырехугольник: "<<std::endl;
            std::cout<<"Стороны:     "<<"a="<<geta()<<" b="<<getb()<<" c="<<getc()<<" d="<<getd()<<std::endl;
            std::cout<<"Углы:        "<<"A="<<getA()<<" B="<<getB()<<" C="<<getC()<<" D="<<getD()<<"\n"<<std::endl;
        }
square::square(int seta):quadrilateral(seta,seta,seta,seta,90,90,90,90){}
 void square::draw(){
            std::cout<<"Квадрат:     "<<std::endl;
            std::cout<<"Стороны:     "<<"a="<<geta()<<" b="<<getb()<<" c="<<getc()<<" d="<<getd()<<std::endl;
            std::cout<<"Углы:        "<<"A="<<getA()<<" B="<<getB()<<" C="<<getC()<<" D="<<getD()<<"\n"<<std::endl;
        }
rhombus::rhombus(int seta,int setA,int setB):quadrilateral(seta,seta,seta,seta,setA,setB,setA,setB){}

 void rhombus::draw(){
            std::cout<<"Ромб: "<<std::endl;
            std::cout<<"Стороны:     "<<"a="<<geta()<<" b="<<getb()<<" c="<<getc()<<" d="<<getd()<<std::endl;
            std::cout<<"Углы:        "<<"A="<<getA()<<" B="<<getB()<<" C="<<getC()<<" D="<<getD()<<"\n"<<std::endl;
        }
 rectangle::rectangle(int seta,int setb):quadrilateral(seta,setb,seta,setb,90,90,90,90){}
 void rectangle::draw(){
            std::cout<<"Прямоугольник: "<<std::endl;
            std::cout<<"Стороны:     "<<"a="<<geta()<<" b="<<getb()<<" c="<<getc()<<" d="<<getd()<<std::endl;
            std::cout<<"Углы:        "<<"A="<<getA()<<" B="<<getB()<<" C="<<getC()<<" D="<<getD()<<"\n"<<std::endl;
        }
parallelogram::parallelogram(int seta,int setb,int setA,int setB):quadrilateral(seta,setb,seta,setb,setA,setB,setA,setB){}
 void parallelogram::draw(){
            std::cout<<"Параллелограмм: "<<std::endl;
            std::cout<<"Стороны:     "<<"a="<<geta()<<" b="<<getb()<<" c="<<getc()<<" d="<<getd()<<std::endl;
            std::cout<<"Углы:        "<<"A="<<getA()<<" B="<<getB()<<" C="<<getC()<<" D="<<getD()<<"\n"<<std::endl;
        }