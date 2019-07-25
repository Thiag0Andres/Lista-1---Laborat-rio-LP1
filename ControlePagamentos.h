#ifndef CONTROLEPAGAMENTOS_H_INCLUDED
#define CONTROLEPAGAMENTOS_H_INCLUDED

#include "Pagamento.h"
#include <string>

#define MAX_PAGAMENTOS 100

class ControlePagamentos{
    private:
        Pagamento pay[MAX_PAGAMENTOS];
    public:
    //Construtor
        ControlePagamentos();

    //Metodos
        double calculaTotalDePagamentos();
        bool existePagamentoParaFuncionario (std::string nomeFuncionario);
        int VerificaIndiceDisponivel();
    //Metodo set
        void setPagamentos(std::string nomeFuncionario, double valorPagamento);
};

#endif // CONTROLEPAGAMENTOS_H_INCLUDED
