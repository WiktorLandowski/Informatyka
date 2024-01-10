#include <iostream>
using namespace std;
 
// Definicja funkcji MaxFun
int MaxFun(int liczby[5]) {
    int max = liczby[0];
    for(int i = 1; i < 5; i++) {
        if(liczby[i] > max) {
            max = liczby[i];
        }
    }
    return max;
}
 
int main() {
    int liczby[5];
    cout << "Podaj 5 liczb: ";
    for(int i = 0; i < 5; i++)
        cin >> liczby[i];
 
    cout << "Najwieksza liczba: " << MaxFun(liczby) << endl;
    
    system("pause");
    return 0;
}