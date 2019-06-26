/**
 * @file veterinario.cpp
 * @brief Arquivo que implementa os métodos da classe Veterinario.
 * @author Davi César, Emanuel Felipe, João Paulo Carneiro, Lucas Vinicius, Marlon Secundo
 * @since 28/05/2019
 * @date 25/06/2019
 * @version 1.0
 */

#include "veterinario.h"
using namespace std;
Veterinario::Veterinario(map<string, string> dados) : Funcionario(dados)
{
  setCRMV(dados["crmv"]);
}

void Veterinario::setCRMV(string novoCRMV)
{
  this->m_crmv = novoCRMV;
}

string Veterinario::getCRMV()
{
  return this->m_crmv;
}

vector<string> Veterinario::get_dados()
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
  dados.push_back(getCRMV());
  dados.push_back("");
  return dados;
}
