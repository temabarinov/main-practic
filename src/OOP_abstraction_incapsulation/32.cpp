#include "common.h"


class adress{
    private:
        std::string city{};
        std::string street{};
        int num_house;
        int num_apart;
    public:
        adress(){};
        adress(std::string setcity, std::string setstreet,int setnum_house, int setnum_apart):
        city {setcity}, street{setstreet}, num_house {setnum_house}, num_apart {setnum_apart}{}
        adress(std::string setcity){}
        void setadress(std::string setcity,std::string  setstreet,int setnum_house,int setnum_apart){
            city=setcity;
            street=setstreet;
            num_house=setnum_house;
            num_apart=setnum_apart;
        }
        void printAllData(){
            std::cout<<city<<std::endl;
            std::cout<<street<<std::endl;
            std::cout<<num_house<<std::endl;
            std::cout<<num_apart<<std::endl;
        }
        std::string getCity(){
            return city;
        }
        std::string getStreet(){
            return street;
        }
        int getnum_house(){
            return num_house;
        }
        int getnum_apart(){
            return num_apart;
        }






};



void sorted(adress* adresses,int size){
    adress min{};
    min.setadress(adresses[0].getCity(),adresses[0].getStreet(),adresses[0].getnum_house(),adresses[0].getnum_apart());
        
        for (int i=1;i<size;i++){
            std::string first_city{};
            std::string second_city{};
            first_city=min.getCity();
        
            second_city=adresses[i].getCity();
            if (second_city[0]<first_city[0]){
                
                adresses[i-1].setadress(adresses[i].getCity(),adresses[i].getStreet(),adresses[i].getnum_house(),adresses[i].getnum_apart());
                adresses[i].setadress(min.getCity(),min.getStreet(),min.getnum_house(),min.getnum_apart());
            }else{
                min.setadress(adresses[i].getCity(),adresses[i].getStreet(),adresses[i].getnum_house(),adresses[i].getnum_apart());


            
        }

    }
}




int main (int argc,char** argv){
    int i;
    std::string all_adress{};
    std::fstream in_file{};
    in_file.open("/Users/artembarinov61icloud.com/Desktop/project/txt_files/in.txt",std::fstream::in);
    if (in_file.is_open()){
        in_file>>i;
        std::string city{};
        std::string street{};
        int num_house;
        int num_apart;
        adress* adresses=new adress[i];
        for (int n=0;n<i;n++){
            in_file>>city;
            in_file>>street;
            in_file>>num_house;
            in_file>>num_apart;
            adresses[n].setadress(city,street,num_house,num_apart);
            all_adress+=adresses[n].getCity();

            
        }
        
        
        std::fstream out_file{};
        out_file.open("/Users/artembarinov61icloud.com/Desktop/project/txt_files/out.txt",std::fstream::out);
        sorted(adresses,i);
        for (int n=0;n<i;n++){
            out_file<<i<<std::endl;
            out_file<<adresses[n].getCity()<<std::endl;
            out_file<<adresses[n].getStreet()<<std::endl;
            out_file<<adresses[n].getnum_house()<<std::endl;
            out_file<<adresses[n].getnum_apart()<<std::endl;

        }
       
        delete[] adresses;
        in_file.close();
        out_file.close();

    
   

    }else{
        std::cout<<"file is not open";
    }

    return 0;
}