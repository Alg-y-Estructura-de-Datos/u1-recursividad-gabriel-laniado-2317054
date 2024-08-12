#include <iostream>
using namespace std;

int contarParesEnPosicionesImpares(int n, int cantDigitos){
    if (n==0){
        return 0;
    }

    int digitoActual = n%10;
    int pos = cantDigitos;

    if (pos % 2 !=0 && digitoActual %2 ==0){
        return 1 + contarParesEnPosicionesImpares(n/10, pos-1);
    } else {
        return contarParesEnPosicionesImpares(n/10, pos-1);
    }
}

int main(){
    int n, cantDigitos;

    cout<<"Ingrese la cantidad de digitos:";
    cin>>cantDigitos;

    cout<<"Ingrese un numero: ";
    cin>>n;

    cout<<"El numero "<<n<<" tiene "<<contarParesEnPosicionesImpares(n, cantDigitos)<<" digitos pares en posiciones impares"<<endl;
}