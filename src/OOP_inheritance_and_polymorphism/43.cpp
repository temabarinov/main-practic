#include "common.h"

class shape{
    private:
        int count_sides{};
    public:
        shape():count_sides{1}{}
        virtual void draw(){
            std::cout<<"Фигура:"<<std::endl;
            if (check()){
                std::cout<<"Правильная"<<std::endl;
            }else{
                std::cout<<"Неправильная"<<std::endl;
            }
            std::cout<<"Количество сторон:"<<count_sides<<"\n"<<std::endl;


        }
        virtual bool check(){
            if (count_sides==0){
                return true;
            }else{
                return false;
            }

        }




};





class triangle:public shape{
    private:
        int a{},b{},c{};
        int A{},B{},C{};
    public:
        triangle(int seta,int setb,int setc,int setA,int setB,int setC):a{seta},b{setb},c{setc},A{setA},B{setB},C{setC}{};
        
        int geta(){
            return a;
        }
        int getb(){
            return b;
        }
        int getc(){
            return c;
        }
        int getA(){
            return A;
        }
        int getB(){
            return B;
        }
        int getC(){
            return C;
        }
        void draw(){
            std::cout<<"Треугольник: "<<std::endl;
            std::cout<<"Стороны:     "<<"a="<<geta()<<" b="<<getb()<<" c="<<getc()<<std::endl;
            std::cout<<"Углы:        "<<"A="<<getA()<<" B="<<getB()<<" C="<<getC()<<"\n"<<std::endl;
        }
        



};


class triangle90: public triangle{
    public:
        triangle90(int seta,int setb,int setc,int setA,int setB):triangle(seta,setb,setc,setA,setB,90){}
        
    void draw(){
        std::cout<<"Прямоугольный треугольник: "<<std::endl;
        std::cout<<"Стороны:     "<<"a="<<geta()<<" b="<<getb()<<" c="<<getc()<<std::endl;
        std::cout<<"Углы:        "<<"A="<<getA()<<" B="<<getB()<<" C="<<getC()<<"\n"<<std::endl;
    }




};



class triangle_equal_two_sides:public triangle{
    public:
    triangle_equal_two_sides(int seta,int setb,int setA,int setB):triangle(seta,setb,seta,setA,setB,setA){}

    void draw(){
        std::cout<<"Равнобедренный треугольник: "<<std::endl;
        std::cout<<"Стороны:     "<<"a="<<geta()<<" b="<<getb()<<" c="<<getc()<<std::endl;
        std::cout<<"Углы:        "<<"A="<<getA()<<" B="<<getB()<<" C="<<getC()<<"\n"<<std::endl;
    }

};


class triangle_equal_all_sides:public triangle{
    public:
        triangle_equal_all_sides(int seta):triangle(seta,seta,seta,60,60,60){}

    void draw(){
        std::cout<<"Равносторонний треугольник: "<<std::endl;
        std::cout<<"Стороны:     "<<"a="<<geta()<<" b="<<getb()<<" c="<<getc()<<std::endl;
        std::cout<<"Углы:        "<<"A="<<getA()<<" B="<<getB()<<" C="<<getC()<<"\n"<<std::endl;
    }

};

class quadrilateral:public shape{
    private:
        int a{},b{},c{},d{};
        int A{},B{},C{},D{};
    public:
        quadrilateral(int seta,int setb,int setc,int setd,int setA,int setB,int setC,int setD):a{seta},b{setb},c{setc},d{setd},A{setA},B{setb},C{setC},D{setD}{}
        
        int geta(){
            return a;
        }
        int getb(){
            return b;
        }
        int getc(){
            return c;
        }
        int getd(){
            return d;
        }
        int getA(){
            return A;
        }
        int getB(){
            return B;
        }
        int getC(){
            return C;
        }
        int getD(){
            return D;
        }


        void draw(){
            std::cout<<"Четырехугольник: "<<std::endl;
            std::cout<<"Стороны:     "<<"a="<<geta()<<" b="<<getb()<<" c="<<getc()<<" d="<<getd()<<std::endl;
            std::cout<<"Углы:        "<<"A="<<getA()<<" B="<<getB()<<" C="<<getC()<<" D="<<getD()<<"\n"<<std::endl;
        }







};

class square:public quadrilateral{
    public:
        square(int seta):quadrilateral(seta,seta,seta,seta,90,90,90,90){}

        void draw(){
            std::cout<<"Квадрат:     "<<std::endl;
            std::cout<<"Стороны:     "<<"a="<<geta()<<" b="<<getb()<<" c="<<getc()<<" d="<<getd()<<std::endl;
            std::cout<<"Углы:        "<<"A="<<getA()<<" B="<<getB()<<" C="<<getC()<<" D="<<getD()<<"\n"<<std::endl;
        }

};
class rhombus:public quadrilateral{
    public:
        rhombus(int seta,int setA,int setB):quadrilateral(seta,seta,seta,seta,setA,setB,setA,setB){}


        void draw(){
            std::cout<<"Ромб: "<<std::endl;
            std::cout<<"Стороны:     "<<"a="<<geta()<<" b="<<getb()<<" c="<<getc()<<" d="<<getd()<<std::endl;
            std::cout<<"Углы:        "<<"A="<<getA()<<" B="<<getB()<<" C="<<getC()<<" D="<<getD()<<"\n"<<std::endl;
        }


};

class rectangle:public quadrilateral{
    public:
        rectangle(int seta,int setb):quadrilateral(seta,setb,seta,setb,90,90,90,90){}


        void draw(){
            std::cout<<"Прямоугольник: "<<std::endl;
            std::cout<<"Стороны:     "<<"a="<<geta()<<" b="<<getb()<<" c="<<getc()<<" d="<<getd()<<std::endl;
            std::cout<<"Углы:        "<<"A="<<getA()<<" B="<<getB()<<" C="<<getC()<<" D="<<getD()<<"\n"<<std::endl;
        }



};


class parallelogram:public quadrilateral{
    public:
        parallelogram(int seta,int setb,int setA,int setB):quadrilateral(seta,setb,seta,setb,setA,setB,setA,setB){}


        void draw(){
            std::cout<<"Параллелограмм: "<<std::endl;
            std::cout<<"Стороны:     "<<"a="<<geta()<<" b="<<getb()<<" c="<<getc()<<" d="<<getd()<<std::endl;
            std::cout<<"Углы:        "<<"A="<<getA()<<" B="<<getB()<<" C="<<getC()<<" D="<<getD()<<"\n"<<std::endl;
        }


};








int main(int argc,char** argv){


    shape a;
    a.draw();




    return 0;
}