#include "Empregado.h"

Empregado::Empregado(std::string nome, std::string sobrenome, double salario){
    setNome(nome);
    setSobrenome(sobrenome);
    setSalario(salario);
}

double Empregado::getSalario(){
    return salario;
}

std::string Empregado::getNome(){
    return nome;
}

std::string Empregado::getSobrenome(){
    return sobrenome;
}

void Empregado::setSalario(double salario){
    if(salario < 0)
        this-> salario = 0;
    else
        this-> salario = salario;
}

void Empregado::setNome(std::string nome){
    this-> nome = nome;
}

void Empregado::setSobrenome(std::string sobrenome){
    this-> sobrenome = sobrenome;
}
