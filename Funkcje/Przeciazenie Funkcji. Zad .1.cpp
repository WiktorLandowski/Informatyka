#include <iostream>
 
int Suma(int a, int b) {
    return a + b;
}
 
double Suma(double a, double b) {
    return a + b;
}
 
int main() {
    int liczbaCalkowita1, liczbaCalkowita2;
    double liczbaZmiennoprzecinkowa1, liczbaZmiennoprzecinkowa2;
 
    std::cout << "Podaj pierwsza liczba calkowita: ";
    std::cin >> liczbaCalkowita1;
    std::cout << "Podaj druga liczba calkowita: ";
    std::cin >> liczbaCalkowita2;
 
    std::cout << "Suma liczb calkowitych: " << Suma(liczbaCalkowita1, liczbaCalkowita2) << std::endl;
 
    std::cout << "Podaj pierwsza liczba zmiennoprzecinkowa: ";
    std::cin >> liczbaZmiennoprzecinkowa1;
    std::cout << "Podaj druga liczba zmiennoprzecinkowa: ";
    std::cin >> liczbaZmiennoprzecinkowa2;
 
    std::cout << "Suma liczb zmiennoprzecinkowych: " << Suma(liczbaZmiennoprzecinkowa1, liczbaZmiennoprzecinkowa2) << std::endl;
 
    return 0;
}
