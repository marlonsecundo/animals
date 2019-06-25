#include "tratador.h"
using namespace std;

Tratador::Tratador(map<string, string> dados) : Funcionario(dados)
{
  setId(stod(dados["id"]));
  setNome(dados["nome"]);
  setCPF(dados["cpf"]);
  setIdade(stod(dados["idade"]));
  setSangue(dados["sangue"]);
  setRH(dados["rh"][0]);
  setEspecialidade(dados["especialidade"]);
  setSegur(stod(dados["seguranca"]));
}
void Tratador::setSegur(int novoSegur)
{
  this->m_nivel_de_seguranca = novoSegur;
}
int Tratador::getSegur()
{
  return this->m_nivel_de_seguranca;
}

vector<string> Tratador::get_dados()
{
  // id;classe;nome;cpf;idade;sangue;rh;especcialidade;
  vector<string> dados;

  dados.push_back(to_string(getId()));
  dados.push_back(getClasse());
  dados.push_back(getNome());
  dados.push_back(getCPF());
  dados.push_back(to_string(getIdade()));
  dados.push_back(getSangue());
  dados.push_back(to_string(getRH()));
  dados.push_back(getEspecialidade());
  dados.push_back("");
  dados.push_back(to_string(getSegur()));
  return dados;
}
