#include <iostream>
using namespace std;
int main () {
    int a[10],max;

for(int i=0;i<10;i++)
    cin>>a[i];

max=a[0];

for(int i=1;i<10;i++)
    if(a[i]>max)
        max=a[i];

cout<<"Max="<<max;
    return 0;
}
