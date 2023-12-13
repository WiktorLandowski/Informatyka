#include<iostream>
using namespace std;

int main(){
char tablica[100];
cout << "Twoje dane osobowe: ";
cin.getline(tablica, 100);
int indeksSpacji = -1;
int dlugoscTekstu = strlen(tablica);
for (int i = 0; i < dlugoscTekstu; ++i){
	if (tablica[i] == ' '){
		indeksSpacji = i;
		break;
	} 
}
cout << "Pozycja spacji: " << indeksSpacji << endl;
cout << "Pozycja znaku konca " << dlugoscTekstu << endl; 

    return 0;	
}