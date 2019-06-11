#include "ave.h"

Ave::Ave(unsigned int novoId, string novoNomeBatismo) : Animal(novoId, novoNomeBatismo)
{
}

double Ave::set_tamanho_do_bico_cm(double tamanho_do_bico_cm)
{
  this->m_tamanho_do_bico_cm = tamanho_do_bico_cm;
}

double Ave::set_envergadura_das_asas(double envergadura_das_asas)
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

Ave::~Ave()
{
}
