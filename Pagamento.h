#ifndef PAGAMENTO_H_INCLUDED
#define PAGAMENTO_H_INCLUDED

#include <string>

class Pagamento{
    private:
        double valorPagamento;
        std::string nomeFuncionario;
    public:
    //Construtor
        Pagamento();
    //Metodos get
        double getValorPagamento();
        std::string getNomeFuncionario();
    //Metodos set
        void setValorPagamento(double valor);
        void setNomeFuncionario(std::string nome);

};

#endif // PAGAMENTO_H_INCLUDED
