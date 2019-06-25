#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <iostream>
#include <string>
#include <vector>
#include <map>
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
  string m_classe;

public:
  Funcionario(map<string, string> dados);
  Funcionario();
  void setId(int novoId);
  void setClasse(string classe);
  void setNome(string novoNome);
  void setCPF(string novoCPF);
  void setIdade(int novoIdade);
  void setSangue(string novoSangue);
  void setRH(char novoRH);
  void setEspecialidade(string novoEspecialidade);
  int getId();
  string getClasse();
  string getNome();
  string getCPF();
  int getIdade();
  string getSangue();
  char getRH();
  string getEspecialidade();

  // Persistencia

  // id;classe;nome;cpf;idade;sangue;rh;especcialidade;crmv;seguranca;
  virtual vector<string> get_dados();

  void cadastrar(vector<string> dados);
  void atualizar(vector<string> dados);
  void deletar();
  string consultar(string id);

};
#endif
