#include "funcionario.h"
#include <fstream>
#include <vector>
using namespace std;

Funcionario::Funcionario(map<string, string> dados)
{
  setId(stod(dados["id"]));
  setClasse(dados["classe"]);
  setNome(dados["nome"]);
  setCPF(dados["cpf"]);
  setIdade(stod(dados["idade"]));
  setSangue(dados["tipo_sanguineo"]);
  setRH(dados["rh"][0]);
  setEspecialidade(dados["especialidade"]);
}
Funcionario::Funcionario()
{

}
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

void Funcionario::setClasse(string classe)
{
  this->m_classe = classe;
}

int Funcionario::getId()
{
  return this->m_id;
}

string Funcionario::getClasse()
{
  return this->m_classe;
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

vector<string> Funcionario::get_dados()
{
  // id;classe;nome;cpf;idade;sangue;rh;especcialidade;
  vector<string> dados;
  dados.push_back(to_string(getId()));
  dados.push_back(getClasse());
  dados.push_back(getNome());
  dados.push_back(getCPF());
  dados.push_back(to_string(getIdade()));
  dados.push_back(getSangue());
  dados.push_back(to_string(getRH()));
  dados.push_back(getEspecialidade());

  return dados;
}

void Funcionario::cadastrar()
{
  vector<string> dados = get_dados();

  std::ofstream arquivo;

  arquivo.open("funcionario.txt", std::ios::app);

  for (int i = 0; i < dados.size(); i++)
  {
    arquivo << dados[i] << ";";
  }

  arquivo << "\n";

  arquivo.close();
}

string Funcionario::consultar(string id)
{
  ifstream funcionario("funcionario.txt");
  string linha;
  string consulta = "";

  if (!funcionario)
  {
    cout << "Erro na abertura do aquivo -> funcionario.txt" << endl;
    return consulta;
  }

  while (getline(funcionario, linha))
  {
    int it = 0;
    string idArq = "";

    while (linha[it] != ';')
    {
      idArq += linha[it];
      it++;
    }

    if (id.compare(idArq) == 0)
    {
      consulta = linha;
    }
  }
  if (consulta.compare("") == 0)
  {
    cout << "Nenhum funcionario encontrado." << endl;
  }
  funcionario.close();
  return consulta;
}
