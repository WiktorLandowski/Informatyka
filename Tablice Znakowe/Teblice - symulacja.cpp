#include <iostream>
using namespace std;

int main()
{
    //pierwszy sposób
    char tab[5] = {'a','b','\0'}; //tworzymy tablicę 5-elementową, która może przechować do 4 znaków

    cout<< tab<< endl;
    
      //drugi sposób - nie podając wielkości tablicy - program sam dopasuje jej wielkość
    char tab2[] = {'a','b','\0'}; //tym razem tworzymy tablicę 3-elementową

    cout<< tab2<< endl; 

    //trzeci sposób - podajemy ciąg znaków pamiętając o podwójnym cudzysłowie
    char tab3[] = "Ala ma kota :)";

    cout<< tab3<< endl; //przypisanie do każdego elementu tablicy pojedyńczego znakku

    return 0;
}