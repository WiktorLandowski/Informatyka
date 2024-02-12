#include <iostream>

 

int main() {

    int x = 15; 

    int* ptr = &x; 

    std::cout << "Wartosc zmiennej x za pomoca wskaznika: " << *ptr << std::endl;

 

    return 0;

}