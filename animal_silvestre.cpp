#include "animal_silvestre.h"

Animal_Silvestre::Animal_Silvestre(string autorizacao_ibama)
{
  set_autorizacao_ibama(autorizacao_ibama);
}

void Animal_Silvestre::set_autorizacao_ibama(string autorizacao_ibama)
{
  this->m_autorizacao_ibama = autorizacao_ibama;
}

string Animal_Silvestre::get_autorizacao_ibama()
{
  return m_autorizacao_ibama;
}
