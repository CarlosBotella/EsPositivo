//
//  EsPositivo.cpp
//  Programacion
//
//  Created by Carlos Botella Navarro on 23/9/21.
//

/*
 -------------------------------------------------
 Datos de entrada: a : Z
 Datos de salida: B (Boolean)
 
 si a≥0
 
 Devolver verdadero
 
 si no
 
 Devolver falso
 -------------------------------------------------
 */

#include <iostream>
using namespace std;

// -----------------------------------------------
bool esPositivo(int num){
    bool comparativo;
    comparativo = false;
    if (num >= 0) {comparativo = true;}
    if (comparativo == true) {cout << "Verdadero";}
    else {cout << "Falso";}
    return comparativo;
}
// -----------------------------------------------

int main(){
//    int numero;
//    cout << "Elige un número: ";
//    cin >> numero;
    if (esPositivo(4)){
        cout << "todo correcto";
    } else {
        cout << "hay un error";
    }
}
