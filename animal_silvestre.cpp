#include "animal_silvestre.h"

Animal_Silvestre::Animal_Silvestre(map<string, string> dados) : Animal(stoi(dados["id"]), dados["batismo"])
{
  set_classe(dados["classe"]);
  set_nome_cientifico(dados["nome"]);
  set_sexo(dados["sexo"][0]);
  set_tamanho(stod(dados["tamanho"]));
  set_dieta(dados["dieta"]);
  set_autorizacao_ibama(dados["autorizacao_ibama"]);
  set_veterinario(dados["veterinario"]);
  set_tratador(dados["tratador"]);
}

void Animal_Silvestre::set_autorizacao_ibama(string autorizacao_ibama)
{
  this->m_autorizacao_ibama = autorizacao_ibama;
}


string Animal_Silvestre::get_autorizacao_ibama()
{
  return m_autorizacao_ibama;
}


vector<string> Animal_Silvestre::get_dados()
{
  vector<string> dados;
  //id;classe;nome;sexo;tamanho;dieta;m_veterinario;m_tratador;batismo;m_autorizacao_ibama;
  dados.push_back(to_string(get_id()));
  dados.push_back(get_classe());
  dados.push_back(get_nome_cientifico());
  dados.push_back(to_string(get_sexo()));
  dados.push_back(to_string(get_tamanho()));
  dados.push_back(get_dieta());
  dados.push_back(get_aotorizacao_ibama());
  dados.push_back(m_veterinario);
  dados.push_back(m_tratador);
 
  return dados;
}

Animal_Silvestre::~Animal_Silvestre()
{
}
