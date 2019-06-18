#include "mamifero.h"

Mamifero::Mamifero(unsigned int novoId, string novoNomeBatismo) : Animal(novoId, novoNomeBatismo)
{
}

void Mamifero::set_cor_pelo(string cor_pelo)
{
  this->m_cor_pelo = cor_pelo;
}

string Mamifero::get_cor_pelo()
{
  return m_cor_pelo;
}

vector<string> Mamifero::getDados()
{
    vector<string> dados;
    //id;classe;nome;sexo;tamanho;dieta;batismo;corPelo (nesse caso)
    dados.push_back(to_string(get_id()));
    dados.push_back(get_classe());
    dados.push_back(get_nome_cientifico());
    dados.push_back(to_string(get_sexo()));
    dados.push_back(to_string(get_tamanho()));
    dados.push_back(get_dieta());
    dados.push_back(get_nome_batismo());
    dados.push_back(get_cor_pelo());
    return dados;
}

vector<string> Mamifero::atualizar()
{
  vector<string> dados;
}

Mamifero::~Mamifero()
{
}
