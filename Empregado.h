#ifndef EMPREGADO_H_INCLUDED
#define EMPREGADO_H_INCLUDED

#include <string>

class Empregado{
    private:
        std::string nome;
        std::string sobrenome;
        double salario;

    public:
    //Construtor
        Empregado(std::string nome, std::string sobrenome, double salario);

    //Metodos get
        std::string getNome();
        std::string getSobrenome();
        double getSalario();
    //Metodos set
        void setNome(std::string nome);
        void setSobrenome(std::string sobrenome);
        void setSalario(double salario);
};

#endif // EMPREGADO_H_INCLUDED
