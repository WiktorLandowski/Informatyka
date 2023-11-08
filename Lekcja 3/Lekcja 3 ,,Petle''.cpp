#include <iostream>
using namespace std;

int main(){
/* inklamentacje
1 = 1 + 1
1 ++ 1
1++
deinklamentacje
1 = 1 - 1
1 -- 1
1--
for(wartoscpoczątkowa; warunekkończący; krok)
*/
for(int i = 0; i < 5; i += 2){ // i - zmienna lokalna, istnieje tylko w klamrach petli
        cout << i << endl;
    }
    
    // petla zagniezdzona
    for(int i=0; i < 3; i++){
       for(int j=0; j < 5; j++){
           cout << "*";
       }
       cout << endl;
   }

cout << endl;
system ("pause");
}