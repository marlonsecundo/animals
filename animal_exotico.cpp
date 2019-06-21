#include "animal_exotico.h"

Animal_Exotico::Animal_Exotico(vector<string> dados) : Animal(stoi(dados[0]), dados[1])
{
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
