#include <iostream>
using namespace std;
int main () {
    double a, b, c;
    cout<<"Ingrese tres numeros: "; cin>>a; cin>>b; cin>>c;
    if (a<b && b<c) {
        cout<<"El orden de los numeros es: "<<a<<" < "<<b<<" < "<<c<<endl;
    }
    else if (c<b && b<a) {
        cout<<"El orden de los numeros es: "<<c<<" < "<<b<<" < "<<a<<endl;
    }
    else if (c<a && a<b) {
        cout<<"El orden de los numeros es: "<<c<<" < "<<a<<" < "<<b<<endl;
    }
    else if (b<a && a<c) {
        cout<<"El orden de los numeros es: "<<b<<" < "<<a<<" < "<<c<<endl;
    }
    else if (a<c && c<b) {
        cout<<"El orden de los numeros es: "<<a<<" < "<<c<<" < "<<b<<endl;
    }
    else if (b<c && c<a) {
        cout<<"El orden de los numeros es: "<<b<<" < "<<c<<" < "<<a<<endl;
    }
    return 0;
}