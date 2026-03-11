#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,sum=0,temp,d;
    cin>>n;
    temp=n;
    while(temp){
        d=temp%10;
        sum+=pow(d,3);
        temp/=10;
    }
    if(sum==n)
        cout<<"Armstrong";
    else
        cout<<"Not Armstrong";
}
