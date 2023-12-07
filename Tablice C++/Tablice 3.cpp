#include <iostream>
using namespace std;

int main(){
int liczby[5];
cout << "Wprowadz 5 liczb: " << endl;
for(int i = 0; i < 5; i++){
	cin >> liczby[i];
	if(liczby[i] < 0){
		liczby[i] = 0;
	}
}
cout << "Liczby ujemne zmienione na 0: " << endl;
for(int i = 0; i < 5; i++){
	cout << liczby[i] << " ";
}
return 0;
	}