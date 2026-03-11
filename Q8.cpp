#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;
    for(int i=1; i<=n; i++) {
        if(i % 3 == 0 && i % 5 == 0)
            cout << "BuzzFuzz ";
        else if(i % 3 == 0)
            cout << "Buzz ";
        else if(i % 5 == 0)
            cout << "Fuzz ";
        else
            cout << i << " ";
    }
    return 0;
}
