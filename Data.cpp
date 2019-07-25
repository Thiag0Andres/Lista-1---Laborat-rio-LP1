#include "Data.h"
#include <iostream>

using namespace std;

Data::Data(int dia, int mes, int ano){
    setDia(dia);
    setMes(mes);
    setAno(ano);
}

int Data::getDia(){
    return dia;
}

int Data::getMes(){
    return mes;
}

int Data::getAno(){
    return ano;
}

void Data::setDia(int dia){
    if(dia < 1 ||dia > 31)
        this-> dia = 1;
    else
        this-> dia = dia;
}

void Data::setMes(int mes){
    if(mes < 1 || mes > 31)
        this-> mes = 1;
    else
        this-> mes = mes;
}

void Data::setAno(int ano){
    if(ano < 1)
        this-> ano = 1;
    else
        this-> ano = ano;
}

int Data::avancarDia(Data *objeto){
    if(dia > 31){
        mes++;
    }
    if(mes > 12){
        ano++;
    }
}

void Data::printInf(Data *objeto){
    cout << "\nA data 1: " << objeto-> getDia() << "/" << objeto-> getMes() << "/" << objeto-> getAno() << endl;
}
