#include <iostream>
#include <cctype>
using namespace std;
int main() {
    string username;
    bool valid = true;
    cout << "Enter username: ";
    cin >> username;
    for(char c : username) {
        if(!isalnum(c)) {
            valid = false;
            break;
        }
    }
    if(valid)
        cout << "Valid Username";
    else
        cout << "Invalid Username";
    return 0;
}
