#include <iostream>
using namespace std;
int main() {
    int n,x,max;
    cin>>n;
    cin>>max;
    for(int i=2;i<=n;i++){
        cin>>x;
        if(x>max)
            max=x;
    }
    cout<<"Largest = "<<max;
}
