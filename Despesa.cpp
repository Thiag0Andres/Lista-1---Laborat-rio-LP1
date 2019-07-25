#include <iostream>
#include "Despesa.h"

using namespace std;

Despesa::Despesa(){
    valor = 0;
}

Despesa::Despesa(double valor, std::string tipoDeGasto){
    setValor(valor);
    setTipoDeGasto(tipoDeGasto);
}

void Despesa::setValor(double valor){
    this-> valor = valor;
}
void Despesa::setTipoDeGasto(std::string tipoDeGasto){
    this-> tipoDeGasto = tipoDeGasto;
}

double Despesa::getValor(){
    return valor;
}
std::string Despesa::getTipoDeGasto() {
    return tipoDeGasto;
}

void Despesa::printInf(){
    cout << "\nTipo de gasto: " << tipoDeGasto << endl << "Valor: " << valor << endl;
}
