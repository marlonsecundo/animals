#include "animal.h"

Animal::Animal(unsigned int novoId, string novoNomeBatismo)
{
  this->id = novoId;
  this->nomeBatismo = novoNomeBatismo;
}

Animal::~Animal()
{
}

int Animal::getId()
{
  return this->id;
}
void Animal::setId(unsigned int novoId)
{
  this->id = novoId;
}
string Animal::getClasse()
{
  return this->classe;
}
void Animal::setClasse(string novaClasse)
{
  this->classe = novaClasse;
}
string Animal::getNomeCientifico()
{
  return this->nomeCientifico;
}
void Animal::setNomeCientifico(string novoNomeCientifico)
{
  this->nomeCientifico = novoNomeCientifico;
}
char Animal::getSexo()
{
  return this->sexo;
}
void Animal::setSexo(char novoSexo)
{
  this->sexo = novoSexo;
}
double Animal::getTamanho()
{
  return this->tamanho;
}
void Animal::setTamanho(double novoTamanho)
{
  this->tamanho = novoTamanho;
}
string Animal::getDieta()
{
  return this->dieta;
}
void Animal::setDieta(string novaDieta)
{
  this->dieta = novaDieta;
}
string Animal::getNomeBatismo()
{
  return this->nomeBatismo;
}
void Animal::setNomeBatismo(string novoNomeBatismo)
{
  this->nomeBatismo = novoNomeBatismo;
}
veterinario Animal::getVeterinario()
{
  return this->Veterinario;
}
void Animal::setVeterinario(veterinario novoVeterinario)
{
  this->Veterinario = novoVeterinario;
}
tratador Animal::getTratador()
{
  return this->Tratador;
}
void Animal::setTratador(tratador novoTratador)
{
  this->Tratador = novoTratador;
}
