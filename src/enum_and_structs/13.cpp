#include "common.h"
struct adress{
    std::string city{};
    std::string street{};
    std::string home{};
    std::string num {};
    std::string index{};


};


void func(adress* n){
    std::cout<<"Город: "<<n->city<<std::endl;
    std::cout<<"Улица: "<<n->street<<std::endl;
    std::cout<<"Номер дома: "<<n->home<<std::endl;
    std::cout<<"Номер квартиры: "<<n->num<<std::endl;
    std::cout<<"Индекс: "<<n->index<<std::endl;

}


int main(){
    adress one={"Москва", "Арбат", "32", "13", "12344"};
    func(&one);

    return 0;
}