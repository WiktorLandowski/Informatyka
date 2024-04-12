#include <iostream>
#include <vector>

using namespace std;
 
vector<int> wyszukiwanieLiniowe(int szukana, int tab[], int rozmiar) {
    vector<int> liczby; 
    int index = 0;
 
    for (int i = 0; i < rozmiar; ++i) {
        if (tab[i] == szukana) {
            liczby.push_back(i); 
            index++;
        }
    }
 
    return liczby;
}
 
int main() {
    int tab[] = {2, 3, 5, 7, 11, 2, 3, 5, 7, 11, 31, 37, 41, 43, 47, 2, 3, 5, 7, 11, 31, 37, 41, 43, 47};
    int rozmiar = sizeof(tab) / sizeof(tab[0]);
 
    cout << "Jaka liczbe poszukujesz: ";
    int szukana;
    cin >> szukana;
 
    vector<int> wyniki = wyszukiwanieLiniowe(szukana, tab, rozmiar);
 
    if (wyniki.empty()) {
        cout << "Poszukiwana liczba nie zostala znaleziona." << endl;
    } else {
        cout << "Poszukiwana liczba znajduje sie na pozycjach: ";
        for (int i = 0; i < wyniki.size(); ++i) {
            cout << wyniki[i];
            if (i < wyniki.size() - 1) {
                cout << ", ";
            }
        }
        cout << endl;
    }
 
    return 0;
}