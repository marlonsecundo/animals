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

Mamifero::~Mamifero()
{
}
