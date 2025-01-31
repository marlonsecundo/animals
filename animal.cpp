/**
 * @file animal.cpp
 * @brief Arquivo que implementa os métodos da classe Animal.
 * @author Davi César, Emanuel Felipe, João Paulo Carneiro, Lucas Vinicius, Marlon Secundo
 * @since 28/05/2019
 * @date 25/06/2019
 * @version 1.0
 */

#include "animal.h"
#include <fstream>
using namespace std;
Animal::Animal(map<string, string> dados)
{
  set_id(stoi(dados["id"]));
  set_nome_batismo(dados["batismo"]);
  set_classe(dados["classe"]);
  set_nome_cientifico(dados["nome"]);
  set_sexo(dados["sexo"][0]);
  set_tamanho(stod(dados["tamanho"]));
  set_dieta(dados["dieta"]);
  set_veterinario(dados["veterinario"]);
  set_tratador(dados["tratador"]);
}

Animal::Animal()
{
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

string Animal::consultar()
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

    if (to_string(m_id).compare(idArq) == 0)
    {
      animal.close();
      return linha;
    }
  }
  animal.close();
  return "Animal nao encontrado";
}

vector<string> Animal::consultarTipo()
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

    if (m_classe.compare(tipoArq) == 0)
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
vector<string> Animal::consutarVeterinario()
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

    if (m_veterinario.compare(vetArq) == 0)
    {
      consulta.push_back(linha);
    }
  }
  if (consulta.empty() == 1)
  {
    cout << "Nenhum veterinario encontrado." << endl;
  }
  animal.close();
  return consulta;
}

vector<string> Animal::consutarTratador()
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

    if (m_tratador.compare(tratArq) == 0)
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

int Animal::atualizar()
{
  vector<string> dados = get_dados();
  ifstream tabela_animais("animal.txt");
  ofstream nova_tabela("animal.temp");
  string linha;

  string linhaAtualizada = "";
  for (int i = 0; i < dados.size(); i++)
  {
    linhaAtualizada += dados[i] + ";";
  }

  if (tabela_animais.is_open() && nova_tabela.is_open())
  {
    while (!tabela_animais.eof())
    {
      getline(tabela_animais, linha);
      if (to_string(m_id) != linha.substr(0, linha.find(";")) && !linha.empty())
      {
        nova_tabela << linha << endl;
      }
      else if (!linha.empty())
      {
        nova_tabela << linhaAtualizada << endl;
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
