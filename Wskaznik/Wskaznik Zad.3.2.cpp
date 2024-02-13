#include <iostream>
 
void modifyValues(float *a, float *b, float *c) {
    *a += 1; 
    *b += 2; 
    *c += 3; 
}
 
int main() {
    float a, b, c;
 
    std::cout << "Podaj wartosci zmiennych a, b, c przed modyfikacja:" << std::endl;
    std::cin >> a >> b >> c;
 
    std::cout << "Wartosci zmiennych :" << std::endl;
    std::cout << "a: " << a << ", adres: " << &a << std::endl;
    std::cout << "b: " << b << ", adres: " << &b << std::endl;
    std::cout << "c: " << c << ", adres: " << &c << std::endl;
 
    modifyValues(&a, &b, &c);
 
    std::cout << "Wartosci zmiennych po modyfikacji :" << std::endl;
    std::cout << "a: " << a << ", adres: " << &a << std::endl;
    std::cout << "b: " << b << ", adres: " << &b << std::endl;
    std::cout << "c: " << c << ", adres: " << &c << std::endl;
 
    return 0;
}