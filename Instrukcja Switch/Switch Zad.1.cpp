#include <iostream>
using namespace std;
 
int main() {
    double num1, num2;
    char oper;
    cout << "Podaj dwie liczby: ";
    cin >> num1 >> num2;
    cout << "Wprowadz znak (+, -, *, /): ";
    cin >> oper;
 
    switch (oper) {
        case '+':
            cout << "Wynik: " << num1 + num2;
            break;
        case '-':
            cout << "Wynik: " << num1 - num2;
            break;
        case '*':
            cout << "Wynik: " << num1 * num2;
            break;
        case '/':
            if(num2 != 0) {
                cout << "Wynik: " << num1 / num2;
            } else {
                cout << "Error, nie mozna dzielic przez 0";
            }
            break;
        default:
            cout << "Nieprawidlowy znak!";
    }
    return 0;
}