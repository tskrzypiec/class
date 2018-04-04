#include <iostream>


class post{

public:
    std:: string nadawca, odbiorca, temat, tresc ;

    void wczytaj();
    void wypisz();

};

void post::wypisz (){

    std::cout<<"nadawca : "<<nadawca<<std::endl;
    std::cout<<"odbiorca : "<<odbiorca<<std::endl;
    std::cout<<"temat : "<<temat<<std::endl;
    std::cout<<"tresc : "<<tresc<<std::endl;


}

void post::wczytaj() {

    std::cout << "Podaj_nadawce:";
    std::cin >> nadawca;
    std::cout << "Podaj_temat";
    std::cin >> temat;


    
}

int main() {



post p;
    p.wczytaj();
    p.wypisz();

    return 0;
}