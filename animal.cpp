#include "animal.h"

Animal::Animal(unsigned int novo_id, string novo_nome_batismo)
{
  this->m_id = novo_id;
  this->m_nome_batismo = novo_nome_batismo;
}

Animal::~Animal()
{
}

int Animal::get_id()
{
  return this->m_id;
}
void Animal::set_id(unsigned int novo_id)
{
  this->m_id = novo_id;
}
string Animal::get_classe()
{
  return this->m_classe;
}
void Animal::set_classe(string nova_classe)
{
  this->m_classe = nova_classe;
}
string Animal::get_nome_cientifico()
{
  return this->m_nome_cientifico;
}
void Animal::set_nome_cientifico(string novo_nome_cientifico)
{
  this->m_nome_cientifico = novo_nome_cientifico;
}
char Animal::get_sexo()
{
  return this->m_sexo;
}
void Animal::set_sexo(char novo_sexo)
{
  this->m_sexo = novo_sexo;
}
double Animal::get_tamanho()
{
  return this->m_tamanho;
}
void Animal::set_tamanho(double novo_tamanho)
{
  this->m_tamanho = novo_tamanho;
}
string Animal::get_dieta()
{
  return this->m_dieta;
}
void Animal::set_dieta(string nova_dieta)
{
  this->m_dieta = nova_dieta;
}
string Animal::get_nome_batismo()
{
  return this->m_nome_batismo;
}
void Animal::set_nome_batismo(string novo_nome_batismo)
{
  this->m_nome_batismo = novo_nome_batismo;
}
Veterinario Animal::get_veterinario()
{
  return this->m_veterinario;
}
void Animal::set_veterinario(Veterinario novo_veterinario)
{
  this->m_veterinario = novo_veterinario;
}
Tratador Animal::get_tratador()
{
  return this->m_tratador;
}
void Animal::set_tratador(Tratador novo_tratador)
{
  this->m_tratador = novo_tratador;
}
