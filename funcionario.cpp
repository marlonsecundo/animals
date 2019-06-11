#include "funcionario.h"
using namespace std;

void Funcionario::setId(int novoId)
{
  this->id = novoId;
}
void Funcionario::setNome(string novoNome)
{
  this->nome = novoNome;
}
void Funcionario::setCPF(string novoCPF)
{
  this->cpf = novoCPF;
}
void Funcionario::setIdade(int novoIdade)
{
  this->idade = novoIdade;
}
void Funcionario::setSangue(string novoSangue)
{
  this->tipo_sanguineo = novoSangue;
}
void Funcionario::setRH(char novoRH)
{
  this->fator_rh = novoRH;
}
void Funcionario::setEspecialidade(string novoEspecialidade)
{
  this->especialidade = novoEspecialidade;
}
int Funcionario::getId()
{
  return this->id;
}
string Funcionario::getNome()
{
  return this->nome;
}
string Funcionario::getCPF()
{
  return this->cpf;
}
int Funcionario::getIdade()
{
  return this->idade;
}
string Funcionario::getSangue()
{
  return this->tipo_sanguineo;
}
char Funcionario::getRH()
{
  return this->fator_rh;
}
string Funcionario::getEspecialidade()
{
  return this->especialidade;
}
