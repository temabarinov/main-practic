#include "common.h"


class counter{
    private:
    int first_number;
    public:
    counter() : first_number(1) {}
    void setFirsrt_number(int First_number){
        first_number=First_number;
    }
    std::string operation{};
    void increment() { first_number++; }
    void decrement() { first_number--; }
    counter(int start) : first_number(start) {}
    int getCounter(){return first_number;}



};


int main(int argc,char** argv){
    std::string ask{};
    std::cout<<"Вы хотите указать начаьное значение счётчика? Выберите да или нет:"<<std::endl;
    std::cin>>ask;
    std::string operation{};

    
    if (ask=="Да" || ask=="да"){
        int first_number;
        std::cout<<"Введите начальное значение счетчика:"<<std::endl;
        std::cin>>first_number;
        counter ccounter(first_number);


        

        while(operation!="x"){
            std::cout<<"Введите команду ('+', '-', '=' или 'x'):"<<std::endl;
            std::cin>>operation;
            if (operation=="+"){
                ccounter.increment();

            }else if(operation=="-"){
                ccounter.decrement();
            }else if(operation=="="){
                std::cout<<ccounter.getCounter()<<"\n";
            }

        }
        std::cout<<"До свидания!"<<std::endl;

        
        


    }else{
        counter ccounter(1);
         while(operation!="x"){
            std::cout<<"Введите команду ('+', '-', '=' или 'x'):"<<std::endl;
            if (operation=="+"){
                ccounter.increment();

            }else if(operation=="-"){
                ccounter.decrement();
            }else if(operation=="="){
                std::cout<<ccounter.getCounter()<<"\n";
            }

        }
        std::cout<<"До свидания!"<<std::endl;
    }


    return 0;
}