#include <iostream>
using namespace std;
int main() {
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    if(ch>='0' && ch<='9')
        cout<<"Number";
    else if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
            ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        cout<<"Vowel";
    else
        cout<<"Consonant";
    return 0;
}
