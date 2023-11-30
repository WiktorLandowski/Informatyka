#include <iostream>
using namespace std;

int main(){
	int liczby[5];
	cout << "wprowadz 5 liczb: " << endl;
	for (int i = 0 ; i < 5; i++){
		cin >> liczby[i];
	}
	cout << "Liczby parzyste: " << endl;
	for(int i = 0; i < 5; i++){
		if(liczby[i] % 2 == 0){
			cout << liczby[i] << " ";
		}
	}
	return 0;
}