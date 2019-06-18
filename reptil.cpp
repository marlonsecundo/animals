#include "reptil.h"
#include "animal.h"

Reptil::Reptil(unsigned int novo_id, string novo_nome_batismo) : Animal(novo_id, novo_nome_batismo)
{
}

void Reptil::set_venenoso(bool venenoso)
{
  this->m_venenoso = venenoso;
}

void Reptil::set_tipo_venenoso(string tipo_venenoso)
{

  this->m_tipo_venenoso = tipo_venenoso;
}

string Reptil::get_tipo_venenoso()
{

  return m_tipo_venenoso;
}

bool Reptil::get_venenoso()
{

  return m_venenoso;
}

Reptil::~Reptil()
{
}
