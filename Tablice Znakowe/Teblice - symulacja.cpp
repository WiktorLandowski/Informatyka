#include <iostream>
using namespace std;

int main()
{
    char tablica[100];
    cout << "Podaj imie i nazwisko: "; 
    cin >> tablica;
    cout << "Twoje dane osobowe: "<< tablica << endl; //dane zostaną zredukowane do imienia
    system("pause");

    return 0;
}