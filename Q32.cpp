#include <iostream>
using namespace std;
int main() {
    int a[5];
    int largest, secondLargest;
    cout << "Enter 5 numbers:\n";
    for(int i = 0; i < 5; i++)
        cin >> a[i];
    largest = secondLargest = -999999;
    for(int i = 0; i < 5; i++) {
        if(a[i] > largest) {
            secondLargest = largest;
            largest = a[i];
        }
        else if(a[i] > secondLargest && a[i] != largest) {
            secondLargest = a[i];
        }
    }
    cout << "Largest = " << largest << endl;
    cout << "Second Largest = " << secondLargest << endl;
    return 0;
}
