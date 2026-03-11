#include <iostream>
using namespace std;
int main() {
    int a[10][10], b[10][10], c[10][10];
    int m,n,p,q;
    cout << "Enter rows and columns of first matrix: ";
    cin >> m >> n;
    cout << "Enter rows and columns of second matrix: ";
    cin >> p >> q;
    if(n != p) {
        cout << "Matrix multiplication not possible";
        return 0;
    }
    cout << "Enter first matrix:\n";
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    cout << "Enter second matrix:\n";
    for(int i=0;i<p;i++)
        for(int j=0;j<q;j++)
            cin>>b[i][j];
    for(int i=0;i<m;i++) {
        for(int j=0;j<q;j++) {
            c[i][j] = 0;
            for(int k=0;k<n;k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    cout << "Result matrix:\n";
    for(int i=0;i<m;i++) {
        for(int j=0;j<q;j++)
            cout << c[i][j] << " ";
        cout << endl;
    }
    return 0;
}
