#include <iostream>
using namespace std;
int main(){
    int n,rev=0,d,temp;
    cin>>n;
    temp=n;
    while(temp){
        d=temp%10;
        rev=rev*10+d;
        temp/=10;
    }
    if(rev==n)
        cout<<"Palindrome";
}
