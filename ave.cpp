/**
 * @file ave.cpp
 * @brief Arquivo que implementa os métodos da classe Ave.
 * @author Davi César, Emanuel Felipe, João Paulo Carneiro, Lucas Vinicius, Marlon Secundo
 * @since 28/05/2019
 * @date 25/06/2019
 * @version 1.0
 */
#include "ave.h"

Ave::Ave(map<string, string> dados) : Animal(dados)
{
  set_envergadura_das_asas(stod(dados["envergadura_das_asas"]));
  set_tamanho_do_bico_cm(stod(dados["tamanho_do_bico"]));
}

void Ave::set_tamanho_do_bico_cm(double tamanho_do_bico_cm)
{
  this->m_tamanho_do_bico_cm = tamanho_do_bico_cm;
}

void Ave::set_envergadura_das_asas(double envergadura_das_asas)
{
  this->m_envergadura_das_asas = envergadura_das_asas;
}

double Ave::get_envergadura_das_asas()
{
  return m_envergadura_das_asas;
}

double Ave::get_tamanho_do_bico_cm()
{
  return m_tamanho_do_bico_cm;
}

vector<string> Ave::get_dados()
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
  dados.push_back(to_string(get_envergadura_das_asas()));
  dados.push_back(to_string(get_tamanho_do_bico_cm()));
  return dados;
}

Ave::~Ave()
{
}
