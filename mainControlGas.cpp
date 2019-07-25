/*
Thiago Andres Paiva Palacios.
Questão 5 da lista.
*/

#include <iostream>
#include "Despesa.h"
#include "ControleDeGastos.h"

using namespace std;

int main(){
    int i;
    double valor;
    std::string tipoDeGasto;

    ControleDeGastos *controleGas = new ControleDeGastos();
    Despesa d = Despesa(valor, tipoDeGasto);

    for(i = 0; i < MAX; i++){
        cout << "Digite o tipo de gasto: ";
        cin >> tipoDeGasto;
        cout << "Digite o valor: ";
        cin >> valor;

        d = Despesa(valor, tipoDeGasto);
        controleGas-> setDespesa(d, i);
    }

    controleGas-> printInf();

    cout << "\nTotal desp: " << controleGas-> calculaTotalDeDespesas() << endl;

    delete controleGas;

    return 0;
}
