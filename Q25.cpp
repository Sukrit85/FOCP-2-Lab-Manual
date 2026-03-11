#include <iostream>
using namespace std;
int main() {
    int start, end;
    bool isPrime;
    cout << "Enter starting limit: ";
    cin >> start;
    cout << "Enter ending limit: ";
    cin >> end;
    cout << "Prime numbers between " << start << " and " << end << " are:\n";
    for(int i = start; i <= end; i++) {
        if(i <= 1)
            continue;
        isPrime = true;
        for(int j = 2; j <= i/2; j++) {
            if(i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if(isPrime)
            cout << i << " ";
    }
    return 0;
}
