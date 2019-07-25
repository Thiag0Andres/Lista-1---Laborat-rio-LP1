/*
Thiago Andres Paiva Palacios.
Questao 2 da lista.
*/

#include "Invoice.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
    int numItem;
    int quantItem;
    double precoItem;
    std::string descricao;

    Invoice *in1 = new Invoice(numItem, quantItem, precoItem, descricao);

    cout << "Digite o numero do item: ";
    cin >> numItem;
    cout << "Digite a quantidade item: ";
    cin >> quantItem;
    cout << "Digite o preco do item: ";
    cin >> precoItem;
    cout << "Digite a descricao do item: ";
    cin >> descricao;

    in1-> setNumItem(numItem);
    in1-> setQuantItem(quantItem);
    in1-> setPrecoItem(precoItem);
    in1-> setDescricao(descricao);

    in1-> printInf(in1);

    delete in1;

    return 0;
}
