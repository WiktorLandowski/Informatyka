#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    cout << "Ile liczb pierwszych chcesz wyswietlic: ";
    cin >> n;
 
    int lp = 0;  
    int p = 2;   
 
    cout << "Liczby pierwsze: ";
 
    while (lp < n) {
        bool isPrime = true;  
 
        for (int d = 2; d <= p - 1; ++d) {
            if (p % d == 0) {  
                isPrime = false;
                break;
            }
        }
 
        if (isPrime) {  
            cout << p << ", ";
            lp++;  
        }
 
        p++;  
    }
 
    cout << endl;
    return 0;
}