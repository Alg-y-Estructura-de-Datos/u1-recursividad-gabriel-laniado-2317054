#include <iostream>
using namespace std;

bool contieneDigito(int n, int d){
    if (n==0){
        return false;
    }

    if (n%10==d){
        return true;
    }
    
    return contieneDigito(n/10, d);
}


int main(){
    int n, d;

    cout<<"Ingrese un numero: ";
    cin>>n;

    cout<<"Ingrese el digito a buscar: ";
    cin >> d;

    if (contieneDigito(n, d)){
        cout<<"El numero "<<n<<" contiene el digito "<<d<<endl;
    } else {
        cout<<"El numero "<<n<<" no contiene el digito "<<d<<endl;
    }
}