#include "anfibio.h"

#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

Anfibio::Anfibio(unsigned int novoId, string novoNomeBatismo) : Animal(novoId, novoNomeBatismo)
{
}

int Anfibio::set_total_mudas(int total_mudas)
{
  this->m_total_de_mudas = total_mudas;
}

Date Anfibio::set_ultima_muda(Date ultima_muda)
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

vector<string> Anfibio::getDados()
{
    vector<string> dados;
    //id;classe;nome;sexo;tamanho;dieta;batismo; Data_ultima_muda (nesse caso)
    dados.push_back(to_string(get_id()));
    dados.push_back(get_classe());
    dados.push_back(get_nome_cientifico());
    dados.push_back(to_string(get_sexo()));
    dados.push_back(to_string(get_tamanho()));
    dados.push_back(get_dieta());
    dados.push_back(get_nome_batismo());
    dados.push_back(get_data_ultima_muda().toString);
    return dados;
}

Anfibio::~Anfibio()
{
}
