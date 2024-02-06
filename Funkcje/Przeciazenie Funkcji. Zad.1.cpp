#include <iostream>
 
using namespace std;
 
int suma(int a, int b) {
    return a + b;
}
 
float suma(float a, float b) {
    return a + b;
}
 
float suma(int a, float b) {
    return a + b;
}
 
float suma(float a, int b) {
    return a + b;
}
 
int main() {
    cout << "Podaj dwie liczby : ";
    double num1, num2;
    cin >> num1 >> num2;
 
    if (num1 == static_cast<int>(num1) && num2 == static_cast<int>(num2)) {
        cout << "Suma: " << suma(static_cast<int>(num1), static_cast<int>(num2)) << endl;
    } else if (num1 == static_cast<int>(num1)) {
        cout << "Suma: " << suma(static_cast<int>(num1), static_cast<float>(num2)) << endl;
    } else if (num2 == static_cast<int>(num2)) {
        cout << "Suma: " << suma(static_cast<float>(num1), static_cast<int>(num2)) << endl;
    } else {
        cout << "Suma: " << suma(static_cast<float>(num1), static_cast<float>(num2)) << endl;
    }
 
    return 0;
}