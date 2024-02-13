#include <iostream>
 
int main() {
    int n = 3;          
    int* wsk = &n;      
 
    std::cout << "WartoA›Ä‡ wskazywana przez wsk: " << *wsk << std::endl;
 
    std::cout << "Adres zmiennej n: " << wsk << std::endl;
 
    return 0;
}