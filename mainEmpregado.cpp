/*
Thiago Andres Paiva Palacios.
Questão 3 da lista.
*/

#include "Empregado.h"
#include <iostream>

using namespace std;

int main(){

    Empregado *empregado1= new Empregado("Thiago Andres", "Palacios", 1500);

    empregado1->setNome("Thiago Andres");
    empregado1->setSobrenome("Palacios");
    empregado1->setSalario(1500);

    cout << "Empregado 1:\n" << "Nome: " << empregado1->getNome() << "\nSobrenome: " << empregado1->getSobrenome() << "\nSalario: " << empregado1->getSalario()<< endl << endl;

    cout << "Salario anual: " << empregado1->getSalario() * 12 << endl;
    cout << "Salario anual com os 10%: " << (empregado1->getSalario() * 12) * 1.1 << endl;

    delete empregado1;

    return 0;
}
