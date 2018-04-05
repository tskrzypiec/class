#include <iostream>

using namespace std;

class Portfel {

public:
    void inicjuj() {
        kwota = 0;
    };

    void zarobki(int dodaj) {

        kwota = kwota + dodaj;

    };

    void wydatki(int odejmij) {

        kwota = kwota - odejmij;
    };

    int zawartosc() {

        return kwota;
    };
private:

    int kwota;

};

int main() {

    Portfel p;

    p.inicjuj();
    p.zarobki(10);
    p.wydatki(2);
    cout << p.zawartosc() << endl;

    return 0;
}