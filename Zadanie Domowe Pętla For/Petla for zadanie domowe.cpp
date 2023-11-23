#include<iostream>
using namespace std;

int main(){
int szerokosc, wysokosc;

std::cout << "Podaj szerokosc: ";
std::cin >> szerokosc;

std::cout << "Podaj wysokosc: ";
std::cin >> wysokosc;
for (int i = wysokosc; i > 0; i--){
	for (int j = 0; j < szerokosc - i; j++){
		std::cout << " ";
	}
	for (int k = 0; k < i; k++){
		std::cout << "*";
	}
	std::cout << std::endl;
} 
return 0;
}