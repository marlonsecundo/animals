#include "anfibio.h"

#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

Anfibio::Anfibio(map<string, string> dados) : Animal(stoi(dados["id"]), dados["batismo"])
{
  set_classe(dados["classe"]);
  set_nome_cientifico(dados["nome"]);
  set_sexo(dados["sexo"][0]);
  set_tamanho(stod(dados["tamanho"]));
  set_dieta(dados["dieta"]);
  set_total_mudas(stod(dados["total_mudas"]));
  set_data_string(dados["ultima_muda"]);
  set_veterinario(dados["veterinario"]);
  set_tratador(dados["tratador"]);
}

void Anfibio::set_total_mudas(int total_mudas)
{
  this->m_total_de_mudas = total_mudas;
}

void Anfibio::set_ultima_muda(Date ultima_muda)
{
  this->m_ultima_muda.dia = ultima_muda.dia;
  this->m_ultima_muda.mes = ultima_muda.mes;
  this->m_ultima_muda.ano = ultima_muda.ano;
}

int Anfibio::get_total_mudas()
{
  return m_total_de_mudas;
}

Date Anfibio::get_data_ultima_muda()
{
  return m_ultima_muda;
}

vector<string> Anfibio::get_dados()
{
  vector<string> dados;
  //id;classe;nome;sexo;tamanho;dieta;m_veterinario;m_tratador;batismo;total_mudas;ultima_muda
  dados.push_back(to_string(get_id()));
  dados.push_back(get_classe());
  dados.push_back(get_nome_cientifico());
  dados.push_back(to_string(get_sexo()));
  dados.push_back(to_string(get_tamanho()));
  dados.push_back(get_dieta());
  dados.push_back(get_veterinario());
  dados.push_back(get_tratador());
  dados.push_back(get_nome_batismo());
  dados.push_back(to_string(get_total_mudas()));
  dados.push_back(get_data_ultima_muda().toString());
  return dados;
}

void Anfibio::set_data_string(string d) // xx/xx/xxxx
{
  int dia, mes, ano;
  dia = stoi(d.substr(0, 2));
  mes = stoi(d.substr(3, 2));
  ano = stoi(d.substr(6, 4));

  m_ultima_muda.dia = dia;
  m_ultima_muda.mes = mes;
  m_ultima_muda.ano = ano;
}
