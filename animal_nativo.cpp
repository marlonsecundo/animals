#include "animal_nativo.h"

Animal_Nativo::Animal_Nativo(string autorizacao_ibama, string uf_origem, string autorizacao) : Animal_Silvestre(autorizacao_ibama)
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
