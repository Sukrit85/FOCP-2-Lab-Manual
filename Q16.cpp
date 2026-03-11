#include <iostream>
using namespace std;
int main() {
    int n,i,flag=1;
    cin>>n;
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }
    if(flag && n>1)
        cout<<"Prime";
    else
        cout<<"Not Prime";
}
