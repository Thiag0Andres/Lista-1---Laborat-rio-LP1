#include "Pessoa.h"

Pessoa::Pessoa(std::string nome){
    this-> nome = nome;
}

Pessoa::Pessoa(std::string nome, int idade, std::string telefone){
    setIdade(idade);
    setNome(nome);
    setTelefone(telefone);
}

int Pessoa::getIdade(){
    return idade;
}

std::string Pessoa::getNome(){
    return nome;
}

std::string Pessoa::getTelefone(){
    return telefone;
}

void Pessoa::setIdade(int idade){
    if(idade < 1)
        this-> idade = 1;
    else
        this-> idade = idade;
}

void Pessoa::setNome(std::string nome){
    this-> nome = nome;
}

void Pessoa::setTelefone(std::string telefone){
    this-> telefone = telefone;
}
