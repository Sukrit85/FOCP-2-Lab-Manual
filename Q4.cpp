#include <iostream>
using namespace std;
int main() {
    int item_no, quantity, price_per_item;

    float total_cost;
    
    cout << "Enter item number: ";
    
    cin >> item_no;
    
    cout << "Enter quantity: ";
    
    cin >> quantity;
    
    cout << "Enter price per item: ";
    
    cin >> price_per_item;
    
    total_cost = quantity * price_per_item * 0.2;
    
    cout << "Total cost for item number " << endl;
    cout << " is: " << total_cost << endl;
    
    return 0;    

}
