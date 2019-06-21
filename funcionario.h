#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Funcionario
{
private:
  int m_id;
  string m_nome;
  string m_cpf;
  int m_idade;
  string m_tipo_sanguineo;
  char m_fator_rh;
  string m_especialidade;

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
  vector<string> get_dados();

  void cadastrar(vector<string> dados);
  void atualizar(vector<string> dados);
  void deletar();
  vector<string> consultar(string id);
};
#endif
