#include <iostream>
using namespace std;

int potencia(int base, int pot){
    if (pot==0){
        return 1; //caso base
    } else {
        return base * potencia(base, pot-1); //caso recursivo
    }
}

int main() {

    int base, pot;
    cout<< "Ingrese la base: ";
    cin>> base;
    cout<< "Ingrese la potencia: ";
    cin>> pot;
    cout<< "El resultado es: " << potencia(base, pot) << endl;
    return 0;
}
