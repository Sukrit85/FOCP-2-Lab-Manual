#include <iostream>
using namespace std;
int main() {
    int qty;
    float price,total;
    cout<<"Enter quantity: ";
    cin>>qty;
    cout<<"Enter price per item: ";
    cin>>price;
    total=qty*price;
    if(qty>1000)
        total=total*0.9;
    cout<<"Total Expense = "<<total;
}
