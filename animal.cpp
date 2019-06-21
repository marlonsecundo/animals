#include "animal.h"
#include <fstream>
using namespace std;
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

void Animal::set_veterinario(string novo_veterinario)
{
  this->m_veterinario = novo_veterinario;
}

void Animal::set_tratador(string novo_tratador)
{
  this->m_tratador = novo_tratador;
}

void Animal::cadastrar()
{
  vector<string> dados = get_dados();

  std::ofstream arquivo;

  arquivo.open("animal.txt", std::ios::app);

  for (int i = 0; i < dados.size(); i++)
  {
    arquivo << dados[i] << ";";
  }

  arquivo << "\n";

  arquivo.close();
}

string Animal::consultar(string id)
{
  ifstream animal("animal.txt");
  string aux;
  string aux2;
  char aux3;

  if (!animal)
  {
    cout << "Erro na abertura do aquivo -> animal.txt" << endl;
  }
  while (!animal.eof())
  {
    int t_id = 0;
    getline(animal, aux);
    while (aux3 != ';')
    {
      aux3 = getchar();
      t_id++;
    }
    aux2 = aux.substr(0, t_id);
    if (id.compare(aux2) == 0)
    {
      return aux;
    }
  }
  animal.close();
}
vector<string> Animal::consultarTipo(string tipo)
{
  ifstream animal("animal.txt");
  string aux;
  vector<string> consulta;
  char aux3;

  if (!animal)
  {
    cout << "Erro na abertura do aquivo -> animal.txt" << endl;
  }
  while (!animal.eof())
  {
    int i = 0;
    int t_id = 0;
    int t_tipo = 0;
    getline(animal, aux);
    while (aux3 != ';')
    {
      aux3 = getchar();
      t_id++;
    }
    aux3 = getchar();
    while (aux3 != ';')
    {
      aux3 = getchar();
      t_tipo++;
    }

    consulta[i] = aux.substr((t_id - 2), (t_id + t_tipo - 2));
    if (tipo.compare(consulta[i]) == 0)
    {
      consulta.push_back(aux);
    }
    i++;
  }
  animal.close();
  return consulta;
}
