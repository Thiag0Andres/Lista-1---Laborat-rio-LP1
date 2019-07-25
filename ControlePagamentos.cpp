#include "ControlePagamentos.h"
#include <iostream>

using namespace std;

ControlePagamentos::ControlePagamentos(){
    int i;
    for(i = 0; i < MAX_PAGAMENTOS; i++){
        pay[i].setValorPagamento(0);
        pay[i].setNomeFuncionario(" ");
    }
}

double ControlePagamentos::calculaTotalDePagamentos(){
    int i;
    double soma = 0;

    for(i = 0; i < MAX_PAGAMENTOS; i++){
        soma += pay[i].getValorPagamento();
    }

    return soma;
}

bool ControlePagamentos::existePagamentoParaFuncionario(std::string nomeFuncionario){
    int i;
    for(i = 0; i < MAX_PAGAMENTOS; i++){
        if(pay[i].getNomeFuncionario() == nomeFuncionario)
            return true;
    }
    return false;
}

int ControlePagamentos::VerificaIndiceDisponivel(){
    int i;
    for(i = 0; i < MAX_PAGAMENTOS; i++){
        if(pay[i].getValorPagamento() == 0)
            return i;
    }
    return 0;
}

void ControlePagamentos::setPagamentos(std::string nomeFuncionario, double valorPagamento){
    int aux = VerificaIndiceDisponivel();

    pay[aux].setNomeFuncionario(nomeFuncionario);
    pay[aux].setValorPagamento(valorPagamento);
}
