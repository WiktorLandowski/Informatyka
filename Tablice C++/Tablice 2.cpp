#include <iostream>
using namespace std;

int main(){
	int liczby[5];
	cout << "wprowadz 5 liczb: " << endl;
	for (int i = 0 ; i < 5; i++){
		cin >> liczby[i];
	}

cout << "W odwrotnej kolejnosci: " << endl;
for(int i = 4; i >= 0; --i){
	cout << liczby[i] << " ";
	}
			
		}