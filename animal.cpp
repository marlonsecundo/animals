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

string Animal::get_veterinario()
{
  return this->m_veterinario;
}

string Animal::get_tratador()
{
  return this->m_tratador;
}

vector<string> Animal::get_dados()
{
  vector<string> dados;
  return dados;
}

int Animal::deletar()
{
  ifstream tabela_animais("animal.txt");
  ofstream nova_tabela("animal.temp");
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
    remove("animal.txt");
    rename("animal.temp", "animal.txt");
    return 0;
  }
  tabela_animais.close();
  nova_tabela.close();
  remove("animal.temp");
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

  if (!animal)
  {
    cout << "Erro na abertura do aquivo -> animal.txt" << endl;
    return "";
  }

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
  string linha;
  vector<string> consulta;

  if (!animal)
  {
    cout << "Erro na abertura do aquivo -> animal.txt" << endl;
    return consulta;
  }
  while (getline(animal, linha))
  {
    int it = 0;
    string tipoArq = "";
    while (linha[it] != ';')
    {
      it++;
    }
    it++;
    while (linha[it] != ';')
    {
      tipoArq += linha[it];
      it++;
    }

    if (tipo.compare(tipoArq) == 0)
    {
      consulta.push_back(linha);
    }
  }
  if (consulta.empty() == 0)
  {
    cout << "Nenhum animal desse tipo encontrado." << endl;
  }
  animal.close();
  return consulta;
}
vector<string> Animal::consutarVeterinario(string veterinario)
{
  ifstream animal("animal.txt");
  string linha;
  vector<string> consulta;

  if (!animal)
  {
    cout << "Erro na abertura do aquivo -> animal.txt" << endl;
    return consulta;
  }
  while (getline(animal, linha))
  {
    int it = 0;
    string vetArq = "";
    for (int i = 0; i < 6; i++)
    {
      while (linha[it] != ';')
      {
        it++;
      }
      it++;
    }
    while (linha[it] != ';')
    {
      vetArq += linha[it];
      it++;
    }

    if (veterinario.compare(vetArq) == 0)
    {
      consulta.push_back(linha);
    }
  }
  if (consulta.empty() == 0)
  {
    cout << "Nenhum veterinario encontrado." << endl;
  }
  animal.close();
  return consulta;
}
vector<string> Animal::consutarTratador(string tratador)
{
  ifstream animal("animal.txt");
  string linha;
  vector<string> consulta;

  if (!animal)
  {
    cout << "Erro na abertura do aquivo -> animal.txt" << endl;
    return consulta;
  }
  while (getline(animal, linha))
  {
    int it = 0;
    string tratArq = "";
    for (int i = 0; i < 7; i++)
    {
      while (linha[it] != ';')
      {
        it++;
      }
      it++;
    }
    while (linha[it] != ';')
    {
      tratArq += linha[it];
      it++;
    }

    if (tratador.compare(tratArq) == 0)
    {
      consulta.push_back(linha);
    }
  }
  if (consulta.empty() == 0)
  {
    cout << "Nenhum tratador encontrado." << endl;
  }
  animal.close();
  return consulta;
}
