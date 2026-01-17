#include "common.h"


class calculator{
    public:
    double num1;
    double num2;
    calculator(double num1,double num2){};
    double add(){
        return num1+num2;

    }
    double multiply(){
        return num1*num2;
    }
    double subtract_1_2(){
        return num2-num1;
    }
    double subtract_2_1(){
        return num1-num2;
    }
    double divide_1_2(){
        return num2/num1;
    }
    double divide_2_1(){
        return num1/num2;
    }
    bool set_num1(double num1){
        
            this->num1=num1;
        
    }
    bool set_num2(double num2){
        
        
            this->num2=num2;
        
    }


};


int main(){
    double num1,num2;
    std::cout<<"Введите num1:"<<std::endl;
    std::cin>>num1;
    std::cout<<"Введите num2:"<<std::endl;
    std::cin>>num2;
    calculator calculator={num1,num2};
    std::cout<<"num1 + num2 = "<<calculator.add()<<std::endl;
    std::cout<<"num1 - num2 = "<<calculator.subtract_2_1()<<std::endl;
    std::cout<<"num2 - num1 = "<<calculator.subtract_1_2()<<std::endl;
    std::cout<<"num1 * num2 = "<<calculator.multiply()<<std::endl;
    std::cout<<"num1 / num2 = "<<calculator.divide_2_1()<<std::endl;
    std::cout<<"num2 / num1 = "<<calculator.divide_1_2()<<std::endl;




    

    double new_num2=0,new_num1=0; 
    
    while(new_num1==0){
        std::cout<<"Введите num1:"<<std::endl;
        std::cin>>new_num1;
        if (new_num1==0){
            std::cout<<"Неверный ввод!"<<std::endl;
            continue;
        }
        calculator.set_num1(new_num1);
    } 
    
    while (new_num2==0){
        std::cout<<"Введите num2:"<<std::endl;
        std::cin>>new_num2;
        if (new_num2==0){
            std::cout<<"Неверный ввод!"<<std::endl;
            continue;
        }
        calculator.set_num2(new_num2);
    }
    std::cout<<"num1 + num2 = "<<calculator.add()<<std::endl;
    std::cout<<"num1 - num2 = "<<calculator.subtract_2_1()<<std::endl;
    std::cout<<"num2 - num1 = "<<calculator.subtract_1_2()<<std::endl;
    std::cout<<"num1 * num2 = "<<calculator.multiply()<<std::endl;
    std::cout<<"num1 / num2 = "<<calculator.divide_2_1()<<std::endl;
    std::cout<<"num2 / num1 = "<<calculator.divide_1_2()<<std::endl;
    return 0;
}