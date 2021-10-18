#include <iostream>
using namespace std;

struct uczniowie {
    string imie;
    string nazwisko;
    int wiek;
};


int main()
{
    uczniowie u1;

    cout << "Podaj imie";
    cin >> u1.imie;
    cout << "Podaj nazwisko";
    cin >> u1.nazwisko;
    cout << "Podaj wiek";
    cin >> u1.wiek;

    cout << "******************" << endl;
    cout << "Imie: " << u1.imie << " Nazwisko: " << u1.nazwisko << " wiek: " << u1.wiek << endl;
}

