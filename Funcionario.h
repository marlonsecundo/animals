#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <iostream>
#include <string>
using namespace std;

class Funcionario{
    private:
        int id = 0;
        string nome;
        string cpf;
        int idade = 0;
        string tipo_sanguineo = 0;
        char fator_rh;
        string especialidade;
    public:
        void setId(int novoId);
        void setNome(string novoNome);
        void setCPF(string novoCPF);
        void setIdade(int novoIdade);
        void setSangue(string novoSangue);
        void setRH(char novoRH);
        void setEspecialidade(string novoEspecialidade);
        int getId();
        string getNome();
        string getCPF();
        int getIdade();
        string getSangue();
        char getRH();
        string getEspecialidade();
};
#endif
