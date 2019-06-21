#include "ave.h"

Ave::Ave(map<string, string> dados) : Animal(stoi(dados["id"]), dados["batismo"])
{
  set_classe(dados["classe"]);
  set_nome_cientifico(dados["nome"]);
  set_sexo(dados["sexo"][0]);
  set_tamanho(stod(dados["tamanho"]));
  set_dieta(dados["dieta"]);
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
  //id;classe;nome;sexo;tamanho;dieta;batismo;tamanho_das_asas;tamanho_do_bico_cm
  dados.push_back(to_string(get_id()));
  dados.push_back(get_classe());
  dados.push_back(get_nome_cientifico());
  dados.push_back(to_string(get_sexo()));
  dados.push_back(to_string(get_tamanho()));
  dados.push_back(get_dieta());
  dados.push_back(get_nome_batismo());
  dados.push_back(to_string(get_envergadura_das_asas()));
  dados.push_back(to_string(get_tamanho_do_bico_cm()));
  return dados;
}

Ave::~Ave()
{
}
