#include "reptil.h"
#include "animal.h"

Reptil::Reptil(unsigned int novo_id, string novo_nome_batismo) : Animal(novo_id, novo_nome_batismo)
{
}

void Reptil::set_venenoso(bool venenoso)
{
  this->m_venenoso = venenoso;
}

void Reptil::set_tipo_venenoso(string tipo_venenoso)
{

  this->m_tipo_venenoso = tipo_venenoso;
}

string Reptil::get_tipo_venenoso()
{

  return m_tipo_venenoso;
}

bool Reptil::get_venenoso()
{

  return m_venenoso;
}
vector<string> Ave::get_dados()
{
  vector<string> dados;
  //id;classe;nome;sexo;tamanho;dieta;batismo;tamanho_das_asas;tamanho_do_bico_cm
  dados.push_back(to_string(get_id()));
  dados.push_back(get_classe());
  dados.push_back(get_nome_cientifico());
  dados.push_back(to_string(get_sexo()));
  dados.push_back(to_string(get_tamanho()));
  dados.push_back(get_dieta());
  dados.push_back(get_nome_batismo());
  dados.push(to_string(get_venenoso()));
  dados.push(get_tipo_venenoso());
  return dados;
}

Reptil::~Reptil()
{
}
