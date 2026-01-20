#include "common.h"
class adress{
    private:
    std::string city;
    std::string street;
    std::string house_num;
    std::string apart_num;
    

    public:
    adress(std::string setcity,std::string setstreet,std::string setHouse_num,std::string setApart_num): city{setcity},
    street{setstreet},
    house_num{setHouse_num},
    apart_num{setApart_num}
    {}
    adress() {};


    void setAllData(std::string setCity,std::string setStreet,std::string setHouse,std::string setAppart)
    {
        
        

        city=setCity;
        street=setStreet;
        house_num=setHouse;
        apart_num=setAppart;
    }

    void out_file(){
        std::fstream out{};
        out.open("/Users/artembarinov61icloud.com/Desktop/project/txt_files/out.txt",std::fstream::app);
        out<<city<<", "<<street<<", "<<house_num<<", "<<apart_num<<"\n";
        out.close();
    }


};


int main(int argc,char** argv){
    std::fstream in_file{};
    in_file.open("/Users/artembarinov61icloud.com/Desktop/project/txt_files/in.txt",std::fstream::in);
    std::string setCity{};
    std::string setStreet{};
    std::string setHouse{};
    std::string setApart{};
    std::string n{};
    in_file>>n;
    std::fstream out{};
    out.open("/Users/artembarinov61icloud.com/Desktop/project/txt_files/out.txt",std::fstream::out);
    out<<n<<"\n";
    out.close();
    

    for (int i=0;i<std::stoi(n);i++){
        in_file>>setCity;
        in_file>>setStreet;
        in_file>>setHouse;
        in_file>>setApart;
        adress main{};
        main.setAllData(setCity,setStreet,setHouse,setApart);
        main.out_file();


        
    }
    

    in_file.close();
    

    
    
    return 0;
}