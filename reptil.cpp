
/**
 * @file reptil.cpp
 * @brief Arquivo que implementa os métodos da classe Reptil.
 * @author Davi César, Emanuel Felipe, João Paulo Carneiro, Lucas Vinicius, Marlon Secundo
 * @since 28/05/2019
 * @date 25/06/2019
 * @version 1.0
 */
#include "reptil.h"

Reptil::Reptil(map<string, string> dados) : Animal(dados)
{
  set_tipo_venenoso(dados["tipo_venenoso"]);
  set_venenoso(dados["venenoso"].compare("sim") == 0);
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

vector<string> Reptil::get_dados()
{
  vector<string> dados;
  //id;classe;nome;sexo;tamanho;dieta;m_veterinario;m_tratador;batismo;tamanho_das_asas;tamanho_do_bico_cm
  dados.push_back(to_string(get_id()));
  dados.push_back(get_classe());
  dados.push_back(get_nome_cientifico());
  dados.push_back(to_string(get_sexo()));
  dados.push_back(to_string(get_tamanho()));
  dados.push_back(get_dieta());
  dados.push_back(get_veterinario());
  dados.push_back(get_tratador());
  dados.push_back(get_nome_batismo());
  dados.push_back(to_string(get_venenoso()));
  dados.push_back(get_tipo_venenoso());
  return dados;
}

Reptil::~Reptil()
{
}
