#include "animal_exotico.h"

Animal_Exotico::Animal_Exotico(string autorizacao_ibama, string pais_origem) : Animal_Silvestre(autorizacao_ibama)
{
  set_pais_origem(pais_origem);
}

void Animal_Exotico::set_pais_origem(string pais_origem)
{
  this->m_pais_origem = pais_origem;
}

string Animal_Exotico::get_pais_origem()
{
  return m_pais_origem;
}
