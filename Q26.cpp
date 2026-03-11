#include <iostream>
using namespace std;
int main(){
    int m[5],total=0;
    float per;
    for(int i=0;i<5;i++)
        cin>>m[i];
    for(int i=0;i<5;i++)
        total+=m[i];
    per=total/5.0;
    cout<<"Total="<<total<<"\nPercentage="<<per;
}
