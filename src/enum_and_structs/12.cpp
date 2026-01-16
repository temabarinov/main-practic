#include "common.h"


struct Person
{
    std::string id;
    std::string name{};
    double money;
};

void g(Person& a,int new_money){
    a.money=new_money;
}





int main(){
    double money,new_money;
    std::string id{};
    std::string name{};
    std::cout<<"Введите номер счета:"<<std::endl;
    std::cin>>id;
    std::cout<<"Введите имя владельца"<<std::endl;
    std::cin>>name;
    std::cout<<"Введите баланс:"<<std::endl;
    std::cin>>money;
    Person p={id,name,money};
    std::cout<<"Введите новый баланс:"<<std::endl;
    std::cin>>new_money;
    g(p,new_money);
    std::cout<<"Ваш счет:"<<p.name<<", "<<p.id<<", "<<p.money;




    return 0;
}