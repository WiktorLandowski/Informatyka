#include <iostream>
#include <cstdlib>
#include <ctime>
 
using namespace std;
 
bool czyZgadles(int* tablica, int rozmiar, int* liczba) {
    for (int i = 0; i < rozmiar; ++i) {
        if (tablica[i] == *liczba) {
            return true;
        }
    }
    return false;
}
 
int main() {
    srand(static_cast<unsigned int>(time(0)));
    
    int rozmiar;
    cout << "Ile liczb chcesz wylosowac: ";
    cin >> rozmiar;
    
    int poczatekZakresu, koniecZakresu;
    cout << "Podaj poczatek zakresu: ";
    cin >> poczatekZakresu;
    cout << "Podaj koniec zakresu: ";
    cin >> koniecZakresu;
    
    int* liczby = new int[rozmiar];
    
    cout << "Wylosowane liczby to: ";
    for (int i = 0; i < rozmiar; ++i) {
        liczby[i] = poczatekZakresu + rand() % (koniecZakresu - poczatekZakresu + 1);
        cout << liczby[i] << (i < rozmiar - 1 ? ", " : "");
    }
    cout << endl;
    
    int liczba;
    int licznik = 0;
    do {
        cout << "Podaj liczbe: ";
        cin >> liczba;
        licznik++;
        if (czyZgadles(liczby, rozmiar, &liczba)) {
            cout << "Zgadles! za " << licznik << " razem." << endl;
            break;
        } else {
            cout << "Nie zgadles" << endl;
        }
    } while (true);
    
    delete[] liczby; 
    return 0;
}