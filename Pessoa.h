#ifndef PESSOA_H_INCLUDED
#define PESSOA_H_INCLUDED

#include <string>

class Pessoa{
    private:
        int idade;
        std::string nome;
        std::string telefone;

    public:
    //Construtores
        Pessoa(std::string nome);
        Pessoa(std::string nome, int idade, std::string telefone);

    //Metodos get
        int getIdade();
        std::string getNome();
        std::string getTelefone();
    //Metodos set
        void setIdade(int idade);
        void setNome(std::string nome);
        void setTelefone(std::string telefone);
};

#endif // PESSOA_H_INCLUDED
