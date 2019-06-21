#include "funcionario.h"
#include <fstream>
#include <vector>
using namespace std;

void Funcionario::setId(int novoId)
{
  this->m_id = novoId;
}
void Funcionario::setNome(string novoNome)
{
  this->m_nome = novoNome;
}
void Funcionario::setCPF(string novoCPF)
{
  this->m_cpf = novoCPF;
}
void Funcionario::setIdade(int novoIdade)
{
  this->m_idade = novoIdade;
}
void Funcionario::setSangue(string novoSangue)
{
  this->m_tipo_sanguineo = novoSangue;
}
void Funcionario::setRH(char novoRH)
{
  this->m_fator_rh = novoRH;
}
void Funcionario::setEspecialidade(string novoEspecialidade)
{
  this->m_especialidade = novoEspecialidade;
}
int Funcionario::getId()
{
  return this->m_id;
}
string Funcionario::getNome()
{
  return this->m_nome;
}
string Funcionario::getCPF()
{
  return this->m_cpf;
}
int Funcionario::getIdade()
{
  return this->m_idade;
}
string Funcionario::getSangue()
{
  return this->m_tipo_sanguineo;
}
char Funcionario::getRH()
{
  return this->m_fator_rh;
}
string Funcionario::getEspecialidade()
{
  return this->m_especialidade;
}
vector<string> Funcionario::consultar(string id)
{
  ifstream funcionario("funcionario.txt");
  string aux;
  vector <string> consulta;
  char aux3;

  if (!funcionario)
  {
    cout << "Erro na abertura do aquivo -> animal.txt" << endl;
  }
  while(!funcionario.eof())
  {
    int i = 0;
    int t_id = 0;
    getline(funcionario, aux);
    while(aux3 != ';')
    {
      aux3 = getchar();
      t_id++;
    }
    consulta[i] = aux.substr(0, (t_id-2));
    if(id.compare(consulta[i]) == 0)
    {
      consulta.push_back(aux);
    }
    i++;
  }
  funcionario.close();
  return consulta;
}
