#include "reptil.h"

Reptil::Reptil()
{
}

bool Reptil::set_venenoso(bool venenoso)
{

  this->m_venenoso = venenoso;
}
string Reptil::set_tipo_venenoso(string tipo_venenoso)
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
