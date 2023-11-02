	#include <iostream>
	using namespace std;
	
		int main(){
		
		
		// liczby calkowite - short, int, long, long long, unisigned short
		// liczb zmiennoprzecinkowych - float, double 
		// ciag znakow - string
		short a, b;
		cout << "Podaj a: ";
		cin >> a;
		cout << "Podaj b: ";
		cin >> b;
		
		// instukcja warunkowa - if(warunek)
		if(a > b){
			cout << a << " > " << b; // cout << zmienna << "tekst" << zmienna
		} 
		// = operator przypisania
		// == operator porownania
		// <= mniejsze lub rowne
		// != nie rowne czemus
		else if(a == b){
			cout << a << " == " << b; // cout << zmienna << "tekst" << zmienna
		}
		else{
				cout << a << " < " << b; // cout <, zmienna << "tekst" << zmienna
			}
			
		cout << endl; 
		system("pause");
		return 0;
	}