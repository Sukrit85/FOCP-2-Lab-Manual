#include <iostream>
#include <cctype>
using namespace std;
int main() {
    string s;
    int words = 0, digits = 0, special = 0;
    cout << "Enter a string: ";
    getline(cin, s);
    for(char c : s) {
        if(isdigit(c))
            digits++;
        else if(!isalnum(c) && c!=' ')
            special++;
    }
    if(!s.empty())
        s[0] = toupper(s[0]);
    for(int i=1;i<s.length();i++)
        s[i] = tolower(s[i]);
    for(int i=0;i<s.length();i++) {
        if(i==0 || (s[i]!=' ' && s[i-1]==' '))
            words++;
    }
    cout << "Sentence Case: " << s << endl;
    cout << "Words = " << words << endl;
    cout << "Digits = " << digits << endl;
    cout << "Special Characters = " << special << endl;
    bool valid = true;
    for(char c : s) {
        if(!isalnum(c) && c!=' ') {
            valid = false;
            break;
        }
    }
    if(valid)
        cout << "String is valid";
    else
        cout << "String contains invalid characters";
    return 0;
}
