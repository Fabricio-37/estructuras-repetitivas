#include <iostream>
using namespace std;
int main () {
    int n, multi = 1;
    cout<<"Ingresa un numero: "; cin>>n;
    for (int i=1; i<=n; i++) {
        multi = multi * i;
    }
    cout<<"El factorial de "<<n<<"! es: "<< multi<<endl;
    return 0;
}