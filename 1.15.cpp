#include <iostream>

using namespace std;


class Liczba {

public:

    void wczytaj(int x) {

        wartosc = x;
    };

    int wypisz() {

        return wartosc;
    };

private:

    int wartosc;

};

int main() {


    Liczba p;

    p.wczytaj(3);


    cout << p.wypisz() << endl;

    return 0;
}