#include<iostream>
using namespace std;
int main() {
    int a, b, c, d, e, average,sum;
    cout<<"enter marks in subject 1";
    cin>>a;
    cout<<"enter marks in subject 2";
    cin>>b;
    cout<<"enter marks in subject 3";
    cin>>c;
    cout<<"enter marks in subject 4";
    cin>>d;
    cout<<"enter marks in subject 5";
    cin>>e;
    sum = a + b + c + d + e;
    average = sum / 5;
    cout<<"The average of marks is "<<average;
    return 0;
}
