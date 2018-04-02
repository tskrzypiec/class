#include <iostream>


class post{

public:
    std:: string nadawca, odbiorca, temat, tresc ;


};

void wypisz (post p){

    std::cout<<"nadawca : "<<p.nadawca<<std::endl;
    std::cout<<"odbiorca : "<<p.odbiorca<<std::endl;
    std::cout<<"temat : "<<p.temat<<std::endl;
    std::cout<<"tresc : "<<p.tresc<<std::endl;


}


int main() {



post p;





    return 0;
}