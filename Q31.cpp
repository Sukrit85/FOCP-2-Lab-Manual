#include <iostream>
using namespace std;
int main() {
    int a[5];
    int count = 0;
    cout << "Enter 5 numbers:\n";
    for(int i = 0; i < 5; i++) {
        cin >> a[i];
        if(a[i] % 3 == 0 && a[i] % 5 == 0)
            count++;
    }
    cout << "Numbers divisible by 3 and 5 = " << count << endl;
    return 0;
}
