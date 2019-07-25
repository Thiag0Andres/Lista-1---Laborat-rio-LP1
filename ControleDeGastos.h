#ifndef CONTROLEDEGASTOS_H_INCLUDED
#define CONTROLEDEGASTOS_H_INCLUDED

#include "Despesa.h"
#define MAX 10

class ControleDeGastos{
    private:
        Despesa despesas[MAX];
    public:
    //Construtor
        ControleDeGastos();
    //Metodos
        double calculaTotalDeDespesas();
        bool existeDespesaDoTipo(std::string tipoDeGasto);
    //Metodo set
        void setDespesa(Despesa d, int pos);
        void printInf();
};

#endif // CONTROLEDEGASTOS_H_INCLUDED
