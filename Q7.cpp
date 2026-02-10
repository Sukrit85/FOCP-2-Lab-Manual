#include <iostream>
using namespace std;
int main(){
    int p1, p2, p3;
    cout << "Enter the value of p1: ";
    cin >> p1;
    cout << "Enter the value of p2: ";
    cin >> p2;
    cout << "Enter the value of p3: ";
    cin >> p3;
    if(p1 > p2 && p1 > p3){
        if(p2 > p3){
            cout << "the decending order " << p1 << " " << p2<< " " << p3<< " " << endl;

        }
        else if(p3 > p2){
            cout << "the decending order " << p1 << " "<< p3<< " " << p2<< " " << endl;

        }
    }
    else if(p2 > p1 && p2 > p3){
        if(p1 > p3){
            cout << "the decending order " << p2<< " " << p1<< " " << p3<< " " << endl;

        }
        else if(p3 > p1){
            cout << "the decending order " << p2<< " " << p3<< " " << p1<< " " << endl;

        }

    }
        else if(p3 > p1 && p3 > p2){
        if(p1 > p2){
            cout << "the decending order " << p3 << " " <<  p1 <<" " << p2<<" " << endl;

        }
        else if(p2 > p1){
            cout << "the decending order " << p3<< " " << p2<< " " << p1<< " " << endl;

        }

    }
    

    return 0;
}
