#include "common.h"
#include "mymath.h"



int main(int argc,char** argv){
    int first{},second{};
    int operation{};
    std::cout<<"Введите первое число:"<<std::endl;
    std::cin>>first;
    std::cout<<"Введите второе число:"<<std::endl;
    std::cin>>second;
    std::cout<<"Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень):"<<std::endl;
    std::cin>>operation;
    if (operation==1){
        std::cout<<first<<" плюс "<<second<<" = "<<sum(first,second);

    }else if(operation==2){
        std::cout<<first<<" минус "<<second<<" = "<<dif(first,second);
    }else if(operation==3){
        std::cout<<first<<" умножить на "<<second<<" = "<<umn(first,second);
    }else if(operation==4){
        std::cout<<first<<" поделить на "<<second<<" = "<<del(first,second);
    }else if(operation==5){
        std::cout<<first<<" в степени "<<second<<" = "<<step(first,second);
    }





}