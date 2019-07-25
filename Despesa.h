#ifndef DESPESA_H_INCLUDED
#define DESPESA_H_INCLUDED

#include <string>

class Despesa{
    private:
        double valor;
        std::string tipoDeGasto;
    public:
    //Construtores
        Despesa();
        Despesa(double valor, std::string tipoDeGasto);
    //Metodo set
        void setValor(double valor);
        void setTipoDeGasto(std::string tipoDeGasto);
        void printInf();
    //Metodo get
        double getValor();
        std::string getTipoDeGasto();
};

#endif // DESPESA_H_INCLUDED
