#include "common.h"


class counter{
    public:
    int first_number;
    std::string operation{};
    void f(){
        if (operation=="+"){
            first_number++;
        }else if(operation=="-"){
            first_number--;
        }else if(operation=="="){
            std::cout<<first_number<<std::endl;
        }

    }



};


int main(int argc,char** argv){
    std::string ask{};
    std::cout<<"Вы хотите указать начаьное значение счётчика? Выберите да или нет:"<<std::endl;
    std::cin>>ask;
    counter counter;
    if (ask=="Да" || ask=="да"){
        int first_number;
        std::cout<<"Введите начальное значение счетчика:"<<std::endl;
        std::cin>>first_number;
        
        counter.first_number=first_number;

        while(counter.operation!="x"){
            std::cout<<"Введите команду ('+', '-', '=' или 'x'):"<<std::endl;
            std::cin>>counter.operation;
            counter.f();

        }
        std::cout<<"До свидания!"<<std::endl;

        
        


    }else{
        counter.first_number=0;
         while(counter.operation!="x"){
            std::cout<<"Введите команду ('+', '-', '=' или 'x'):"<<std::endl;
            std::cin>>counter.operation;
            counter.f();

        }
        std::cout<<"До свидания!"<<std::endl;
    }



    return 0;
}