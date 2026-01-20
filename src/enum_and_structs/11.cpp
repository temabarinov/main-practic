#include "common.h"

enum months{
    January=1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};






int main(){
    int n;
    
    
    while (n!=0){
        std::cout<<"Введите номер месяца"<<std::endl;
        std::cin>>n;
        switch (n)
        {
        case January:
            std::cout<<"January"<<std::endl;;
            break;
        case February:
            std::cout<<"February"<<std::endl;;
            break;
        case March:
            std::cout<<"March"<<std::endl;;
            break;
        case April:
            std::cout<<"April"<<std::endl;;
            break;
        case May:
            std::cout<<"May"<<std::endl;;
            break;
        case June:
            std::cout<<"June"<<std::endl;;
            break;
        case July:
            std::cout<<"July"<<std::endl;;
            break;
        case August:
            std::cout<<"August"<<std::endl;;
            break;
        case September:
            std::cout<<"September"<<std::endl;;
            break;
        case October:
            std::cout<<"October"<<std::endl;;
            break;
        case November:
            std::cout<<"November"<<std::endl;;
            break;
        case December:
            std::cout<<"December"<<std::endl;;
            break;
        case 0:
            std::cout<<"Goodbay";
            break;
           
        default:
            std::cout<<"Wrong month number"<<std::endl;
            break;
        }
}


    return 0;
}