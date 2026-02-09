#include <iostream>
using namespace std;

class Employee {
private:
    float basicSalary;
    float bonus;
    float netSalary;

public:
    void inputSalary() {
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }

    void calculateSalary() {
        bonus = 0.12 * basicSalary;   
        netSalary = basicSalary + bonus;
    }

    void displaySalary(int empNo) {
        cout << "\nEmployee " << empNo << " Details:";
        cout << "\nBasic Salary : " << basicSalary;
        cout << "\nBonus (12%)  : " << bonus;
        cout << "\nNet Salary   : " << netSalary << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    Employee emp[n];   

    for (int i = 0; i < n; i++) {
        cout << "\n--- Employee " << i + 1 << " ---\n";
        emp[i].inputSalary();
        emp[i].calculateSalary();
        emp[i].displaySalary(i + 1);
    }

    return 0;
}
