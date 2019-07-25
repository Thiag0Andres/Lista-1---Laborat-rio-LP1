#include <iostream>
#include "Invoice.h"

using namespace std;

Invoice::Invoice(int numItem, int quantItem, double precoItem, std::string descricao){
    setNumItem(numItem);
    setQuantItem(quantItem);
    setPrecoItem(precoItem);
    setDescricao(descricao);
}

int Invoice::getNumItem(){
    return numItem;
}

int Invoice::getQuantItem(){
    return quantItem;
}

double Invoice::getPrecoItem(){
    return precoItem;
}

std::string Invoice::getDescricao(){
    return descricao;
}

double Invoice::getInvoiceAmount(){
    return quantItem * precoItem;
}

void Invoice::setNumItem(int numItem){
    this-> numItem = numItem;
}

void Invoice::setQuantItem(int quantItem){
    if (quantItem < 1)
        this-> quantItem = 0;
    else
        this-> quantItem = quantItem;
}

void Invoice::setPrecoItem(double precoItem){
      if (precoItem < 1)
        this-> precoItem = 0.0;
    else
        this-> precoItem = precoItem;
}

void Invoice::setDescricao(std::string descricao){
    this-> descricao = descricao;
}

void Invoice::printInf(Invoice *objeto){
    cout << "\nItem "<< objeto-> getNumItem() << ": " << objeto-> getDescricao() << "\nQuantidade: " << objeto-> getQuantItem() << "\nPreco: " << objeto-> getPrecoItem()<< endl;
    cout << "Preco final: " << objeto->getInvoiceAmount() << endl << endl;
}
