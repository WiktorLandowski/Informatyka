#include <iostream>
#include <string>
 
using namespace std;
 
struct Zwierze {
    string nazwa;
    double waga;
    int wiek;
};
 
int main() {
    const int liczbaZwierzat = 5;
    Zwierze zwierzeta[liczbaZwierzat];
 
    cout << "Wprowadz dane zwierzat:" << endl;
    for (int i = 0; i < liczbaZwierzat; i++) {
        cout << "Nazwa: ";
        cin >> zwierzeta[i].nazwa;
        cout << "Waga (gram): ";
        cin >> zwierzeta[i].waga;
        cout << "Wiek (tygodnie): ";
        cin >> zwierzeta[i].wiek;
        cout << endl;
    }
 
    cout << "Wprowadzone zwierzeta:" << endl;
    for (int i = 0; i < liczbaZwierzat; i++) {
        cout << "Zwierze nr " << i + 1 << "\t";
        cout << "Nazwa: " << zwierzeta[i].nazwa << "\t";
        cout << "Waga: " << zwierzeta[i].waga << "\t\t";
        cout << "Wiek: " << zwierzeta[i].wiek << endl;
    }
 
    return 0;
}