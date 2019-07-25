/*
Thiago Andres Paiva Palacios.
Questão 1 da lista.
*/

#include "Data.h"
#include <iostream>

using namespace std;

int main(){
    int dia;
    int mes;
    int ano;

    Data *data1 = new Data(dia, mes, ano);


    cout << "Digite um dia: ";
    cin >> dia;
    cout << "Digite o mes: ";
    cin >> mes;
    cout << "Digite o ano: ";
    cin >> ano;

    data1-> setDia(dia);
    data1-> setMes(mes);
    data1-> setAno(ano);

    data1->avancarDia(data1);
    data1->printInf(data1);

    delete data1;

    return 0;
}
