#include "animal_exotico.h"

Animal_Exotico::Animal_Exotico(map<string, string> dados) : Animal(stoi(dados["id"]), dados["batismo"])
{
  set_classe(dados["classe"]);
  set_nome_cientifico(dados["nome"]);
  set_sexo(dados["sexo"][0]);
  set_tamanho(stod(dados["tamanho"]));
  set_dieta(dados["dieta"]);
  set_pais_origem(dados["pais_origem"]);
  set_veterinario(dados["veterinario"]);
  set_tratador(dados["tratador"]);
}

void Animal_Exotico::set_pais_origem(string pais_origem)
{
  this->m_pais_origem = pais_origem;
}

string Animal_Exotico::get_pais_origem()
{
  return m_pais_origem;
}

vector<string> Animal_Exotico::get_dados()
{
  vector<string> dados;
  //id;classe;nome;sexo;tamanho;dieta;batismo;pais_origem;
  dados.push_back(to_string(get_id()));
  dados.push_back(get_classe());
  dados.push_back(get_nome_cientifico());
  dados.push_back(to_string(get_sexo()));
  dados.push_back(to_string(get_tamanho()));
  dados.push_back(get_dieta());
  dados.push_back(get_nome_batismo());
  dados.push_back(get_pais_origem());
  return dados;
}

Animal_Exotico::~Animal_Exotico()
{
}
