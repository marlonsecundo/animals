#include "tratador.h"
using namespace std;

Tratador::Tratador(map<string, string> dados) : Funcionario(dados)
{
  setId(stod(dados["id"]));
  setNome(dados["nome"]);
  setCPF(dados["cpf"]);
  setIdade(stod(dados["idade"]));
  setSangue(dados["tipo_sanguineo"]);
  setRH(dados["rh"][0]);
  setEspecialidade(dados["especialidade"]);
  setSegur(stod(dados["nivel_de_seguranca"]));
}
void Tratador::setSegur(int novoSegur)
{
    this->m_nivel_de_seguranca = novoSegur;
}
int Tratador::getSegur()
{
    return this->m_nivel_de_seguranca;
}
