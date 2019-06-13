#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <iostream>
#include <string>
using namespace std;

class Funcionario
{
private:
  int id;
  string nome;
  string cpf;
  int idade;
  string tipo_sanguineo;
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

  // Persistencia

  // 1;Mammalia;Leão;Panthera leo;M;2;Carne;0;1;Simba
  vector<string> getDados();

  void cadastrar(vector<string> dados);
  void atualizar(vector<string> dados);
  void deletar();
  void consultar();
  void consultar(string tipo);
};
#endif
