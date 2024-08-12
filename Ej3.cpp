#include <iostream>
using namespace std;

/*int invertir (int numero){
    if (numero<10){
        return numero;
    } else {
        cout << numero%10;
        return invertir(numero/10);
    }
}*/

void invertir (int numero, int &invertido){
    if (numero==0){ //condicion base
        return;
    } else {
        invertido = invertido*10 + numero%10; //codigo complementario
        invertir(numero/10, invertido); //recursividad y terminacion con el /10
    }
}



int main() {
    int num, invertido=0;
    do{
        cout << "Ingrese el numero a invertir: " << endl;
        cin >> num;
        if (num<0){
            cout << "El numero debe ser positivo" << endl;
        }
    } while (num<0);
    
    cout << "El numero ingresado es: " << num << endl;
    invertir(num, invertido);
    cout << "El numero invertido es: " << invertido << endl;

    return 0;
}
