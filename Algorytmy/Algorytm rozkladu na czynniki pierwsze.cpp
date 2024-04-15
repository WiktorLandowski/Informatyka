#include <iostream>
 using namespace std;
int main() {
    int n;
    cout << "Podaj liczbe: ";
    cin >> n;
 
    cout << "Czynniki pierwsze liczby " << n << ": ";
 
    int k = 2;  // zaczynamy od pierwszej liczby pierwszej
 
    while (n > 1) {
        while (n % k == 0) {
            cout << k << " ";
            n /= k;
        }
        k++;
    }
 
    cout << endl;
 
    return 0;
}