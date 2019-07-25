#include "Pagamento.h"

Pagamento::Pagamento(){
    valorPagamento = 0;
    nomeFuncionario = " ";
}

double Pagamento::getValorPagamento(){
    return valorPagamento;
}

std::string Pagamento::getNomeFuncionario(){
    return nomeFuncionario;
}

void Pagamento::setValorPagamento(double valor){
    if(valor > 0)
        valorPagamento = valor;
    else
        valorPagamento = 0;
}

void Pagamento::setNomeFuncionario(std::string nome){
    nomeFuncionario = nome;
}
