#include <iostream>
using namespace std;
 
long long silnia(int n);
 
int main() {
    int n;
    cout << "Podaj liczbe: ";
    cin >> n;
    cout << n << "! = " << silnia(n) << endl;
    return 0;
}
 
long long silnia(int n) {
    if (n <= 1)
        return 1;
    return n * silnia(n - 1);
}