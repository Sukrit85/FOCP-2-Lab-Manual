#include <iostream>
using namespace std;
int main() {
    int a, b, swap;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    a = a * b;
    b = a / b;
    b = a / b;
    cout << "The new value of a is " << a << endl;
        cout << "The new value of b is " << b << endl;

    return 0;    

}
