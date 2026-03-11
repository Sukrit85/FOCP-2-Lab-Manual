#include <iostream>
using namespace std;
int main() {
    int a[5];
   int evenSum = 0, oddSum = 0;
    cout << "Enter 5 numbers:\n";
    for(int i = 0; i < 5; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < 5; i++) {
        if(a[i] % 2 == 0)
            evenSum += a[i];
        else
            oddSum += a[i];
    }
    cout << "Sum of even numbers = " << evenSum << endl;
    cout << "Sum of odd numbers = " << oddSum << endl;
    return 0;
}
