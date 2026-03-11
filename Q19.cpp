#include <iostream>
using namespace std;
int main(){
    int a,b,i,j,flag;
    cin>>a>>b;
    for(i=a;i<=b;i++){
        flag=1;
        for(j=2;j<=i/2;j++){
            if(i%j==0){
                flag=0;
                break;
            }
        }
        if(flag && i>1)
            cout<<i<<" ";
    }
}
