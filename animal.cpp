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

vector<string> Animal::get_dados()
{
  vector<string> dados;
  return dados;
}

int Animal::deletar()
{
  ifstream tabela_animais("animais.txt");
  ofstream nova_tabela("animais.temp");
  string linha;
  if (tabela_animais.is_open() && nova_tabela.is_open())
  {
    while (!tabela_animais.eof())
    {
      getline(tabela_animais, linha);
      if (to_string(m_id) != linha.substr(0, linha.find(";")) && !linha.empty())
      {
        nova_tabela << linha << endl;
      }
    }
    tabela_animais.close();
    nova_tabela.close();
    remove("animais.txt");
    rename("animais.temp", "animais.txt");
    return 0;
  }
  tabela_animais.close();
  nova_tabela.close();
  remove("animais.temp");
  return 1;
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
  string linha;

  while (getline(animal, linha))
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
      animal.close();
      return linha;
    }
  }
  animal.close();
  return "Animal nao encontrado";
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

    consulta[i] = aux.substr(t_id, (t_id + t_tipo - 1));
    if (tipo.compare(consulta[i]) == 0)
    {
      consulta.push_back(aux);
    }
    i++;
  }
  animal.close();
  return consulta;
}
vector<string> Animal::consutarVeterinario(string veterinario)
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
    int t_dieta = 0;
    int t_veter = 0;
    getline(animal, aux);
    for (int j = 0; j < 6; j++)
    {
      while (aux3 != ';')
      {
        aux3 = getchar();
        t_dieta++;
        t_veter++;
      }
      aux3 = getchar();
      t_dieta++;
      t_veter++;
    }
    aux3 = getchar();
    while (aux3 != ';')
    {
      aux3 = getchar();
      t_veter++;
    }

    consulta[i] = aux.substr(t_dieta, (t_veter - 1));
    if (veterinario.compare(consulta[i]) == 0)
    {
      consulta.push_back(aux);
    }
    i++;
  }
  animal.close();
  return consulta;
}
vector<string> Animal::consutarTratador(string tratador)
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
    int t_veter = 0;
    int t_trat = 0;
    getline(animal, aux);
    for (int j = 0; j < 7; j++)
    {
      while (aux3 != ';')
      {
        aux3 = getchar();
        t_veter++;
        t_trat++;
      }
      aux3 = getchar();
      t_veter++;
      t_trat++;
    }
    aux3 = getchar();
    while (aux3 != ';')
    {
      aux3 = getchar();
      t_trat++;
    }

    consulta[i] = aux.substr(t_veter, (t_trat - 1));
    if (tratador.compare(consulta[i]) == 0)
    {
      consulta.push_back(aux);
    }
    i++;
  }
  animal.close();
  return consulta;
}
