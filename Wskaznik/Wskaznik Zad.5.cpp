#include <iostream>
#include <cstdlib>
#include <ctime> )
 
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
 
    const int rozmiar = 10;
    int liczby[rozmiar];
 
    cout << "Wylosowane liczby to: ";
    for (int i = 0; i < rozmiar; ++i) {
        liczby[i] = rand() % 51; 
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
 
    return 0;
}