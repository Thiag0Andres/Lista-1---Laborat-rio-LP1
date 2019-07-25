#include <iostream>
#include "ControleDeGastos.h"

using namespace std;

ControleDeGastos::ControleDeGastos(){
}

void ControleDeGastos::setDespesa(Despesa d, int pos) {
    despesas[pos] = d;
}

double ControleDeGastos::calculaTotalDeDespesas() {
    double total = 0;

    for (int i=0 ; i < MAX ; i++)
        total += despesas[i].getValor();

    return total;
}

bool ControleDeGastos::existeDespesaDoTipo(std::string tipoDeGasto){
    for (int i=0 ; i < MAX ; i++){
        if (despesas[i].getTipoDeGasto() == tipoDeGasto)
            return true;
    }
    return false;
}

void ControleDeGastos::printInf(){
    for (int i=0 ; i < MAX ; i++){
        if (despesas[i].getValor() > 0){
            despesas[i].printInf();
        }
    }
}



