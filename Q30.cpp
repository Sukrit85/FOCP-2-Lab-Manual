#include <iostream>
using namespace std;
int main() {
    float salary[10];
    float total = 0, avg;
    cout << "Enter salary of 10 employees:\n";
    for(int i = 0; i < 10; i++) {
        cin >> salary[i];
        total += salary[i];
    }
    avg = total / 10;
    cout << "Total Salary = " << total << endl;
    cout << "Average Salary = " << avg << endl;
    return 0;
}
