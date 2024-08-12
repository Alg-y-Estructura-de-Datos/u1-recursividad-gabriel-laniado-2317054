#include <iostream>
#include <vector>
using namespace std;

/*void mayorde (vector<int> v, int &mayor){
    if (v.size()==0){
        return;
    } else {
        if (v[v.size()-1]>mayor){
            mayor = v[v.size()-1];
        }
        v.pop_back();
        mayorde(v, mayor);
    }
}*/

int max (const vector<int>&v, int n){
    if (n==1){
        return v[0];
    } else {
        int maxant = max(v, n-1);

        if (v[n-1]>maxant){
            return v[n-1];
        } else {
            return maxant;
        }
    }
}

int main(){
    vector<int> v;
    int n, numero; /*mayor=0*/

    cout<<"Ingrese la cantidad de elementos del vector: ";
    cin>>n;

    for (int i=0;i<n;i++){
        cout<<"Ingrese un numero: ";
        cin>>numero;
        v.push_back(numero);
    }
    /*mayorde(v, mayor);
    cout << "El mayor de los numeros es: "<<mayor;*/
    cout << "El valor maximo es: "<<max(v, n)<<endl;
    return 0;
}