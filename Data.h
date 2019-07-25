#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED

#include <string>


class Data{
    private:
        int dia;
        int mes;
        int ano;
    public:
    //Construtor
        Data(int dia, int mes, int ano);

    //Metodos
        int avancarDia(Data *objeto);
    //Metodos get
        int getDia();
        int getMes();
        int getAno();
    //Metodos set
        void setDia(int dia);
        void setMes(int mes);
        void setAno(int ano);
        void printInf(Data *objeto);
};

#endif // DATA_H_INCLUDED
