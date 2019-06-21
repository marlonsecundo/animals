#include "animal_nativo.h"


Animal_Nativo::Animal_Nativo(vector<string> dados) : Animal(stoi(dados[0]), dados[1])
{
}

void Animal_Nativo::set_uf_origem(string uf_origem)
{
  this->m_uf_origem = uf_origem;
}

void Animal_Nativo::set_autorizacao(string autorizacao)
{

  this->m_autorizacao = autorizacao;
}

string Animal_Nativo::get_autorizacao()
{

  return m_autorizacao;
}

string Animal_Nativo::get_uf_origem()
{

  return m_uf_origem;
}

vector<string> Animal_Nativo::get_dados()
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
  dados.push_back(get_uf_origem());
  dados.push_back(get_autorizacao());
  return dados;
}

Animal_Nativo::~Animal_Nativo()
{
}