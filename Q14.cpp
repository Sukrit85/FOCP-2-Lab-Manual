#include <iostream>
using namespace std;
int main() {
    int ch;
    float a,b;
    do{
        cout<<"\n1.Add\n2.Sub\n3.Mul\n4.Div\n5.Exit\n";
        cin>>ch;
        if(ch<=4){
            cin>>a>>b;
        }
        switch(ch){
            case 1: cout<<a+b; break;
            case 2: cout<<a-b; break;
            case 3: cout<<a*b; break;
            case 4: cout<<a/b; break;
        }
    }while(ch!=5);
}
