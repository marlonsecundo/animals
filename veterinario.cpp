#include "veterinario.h"
using namespace std;
Veterinario::Veterinario(map<string, string> dados) : Funcionario(dados)
{
  setId(stod(dados["id"]));
  setNome(dados["nome"]);
  setCPF(dados["cpf"]);
  setIdade(stod(dados["idade"]));
  setSangue(dados["tipo_sanguineo"]);
  setRH(dados["rh"][0]);
  setEspecialidade(dados["especialidade"]);
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
