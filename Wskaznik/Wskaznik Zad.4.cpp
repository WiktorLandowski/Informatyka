#include <iostream>
using namespace std;
 
int SumTab(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}
 
int main() {
    int arr[5]; 
 
    cout << "Podaj 5 liczb, ktore nalezy zsumowac: ";
    for(int i = 0; i < 5; ++i) {
        cin >> arr[i];
    }
 
    cout << "Suma liczb: " << SumTab(arr, 5) << endl;
 
    return 0;
}