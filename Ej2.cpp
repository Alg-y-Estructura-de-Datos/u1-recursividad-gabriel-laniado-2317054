#include <iostream>
using namespace std;

int suma (int num){
    if (num==1){
        cout << num << " = ";
        return 1;
        
    } else {
        cout << num<< "+" ;
        return num + suma (num-1);
    }
}

int main() {
    int numero;

    cout << "Ingrese el numero:" << endl;
    cin >> numero;

    cout << "La suma de los numeros hasta " << numero << " es: " << suma(numero) << endl;
    return 0;
}
