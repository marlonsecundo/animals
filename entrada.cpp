#include "entrada.h"

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <map>

using std::cin;
using std::cout;
using std::endl;
using std::string;

vector<string> split(string str, string sep)
{
  char *cstr = const_cast<char *>(str.c_str());
  char *current;
  vector<string> arr;
  current = strtok(cstr, sep.c_str());
  while (current != NULL)
  {
    arr.push_back(current);
    current = strtok(NULL, sep.c_str());
  }
  return arr;
}

void Entrada::cadastrar_animal()
{
  vector<string> dados;
  map<string, string> dadosAnim;
  string input;

  cout << "[---    Cadastrar Animal    ---]" << endl;
  cout << "ANIMAL   : id;classe;nome;tamanho;dieta;veterinario;tratador;batismo;" << endl;
  cout << "MAMIFERO : cor do pelo;" << endl;
  cout << "AVE      : evergadura das asas; tamanho do bico;" << endl;
  cout << "ANFIBIO  : total de mudas; data da ultima muda;" << endl;
  cout << "REPTIL   : venenoso (sim|nao); tipo de veneno;" << endl;
  cout << "Digite os dados do animal separados por ;" << endl;
  getline(cin, input);
  getline(cin, input);

  dados = split(input, ";");

  dadosAnim = {{"id", dados[0]},
               {"classe", dados[1]},
               {"nome", dados[2]},
               {"tamanho", dados[3]},
               {"dieta", dados[4]},
               {"veterinario", dados[5]},
               {"tratador", dados[6]},
               {"batismo", dados[7]}};

  if (dados[1].compare("MAMIFERO") == 0)
  {
    dadosAnim.insert(pair<string, string>("cor_pelo", dados[8]));
    m_gerenciador.addMamifero(dadosAnim);
  }
  else if (dados[1].compare("AVE") == 0)
  {
    dadosAnim.insert(pair<string, string>("envergadura_das_asas", dados[8]));
    dadosAnim.insert(pair<string, string>("tamanho_do_bico", dados[9]));
    m_gerenciador.addAve(dadosAnim);
  }
  else if (dados[1].compare("ANFIBIO") == 0)
  {
    dadosAnim.insert(pair<string, string>("total_mudas", dados[8]));
    dadosAnim.insert(pair<string, string>("ultima_muda", dados[9]));
    m_gerenciador.addAnfibio(dadosAnim);
  }
  else if (dados[1].compare("REPTIL") == 0)
  {
    dadosAnim.insert(pair<string, string>("venenoso", dados[8]));
    dadosAnim.insert(pair<string, string>("tipo_veneno", dados[9]));
    m_gerenciador.addReptil(dadosAnim);
  }
}

void Entrada::consultar_animal_id()
{
  int id = 0;

  cout << "[---  Consultar Animal Id ---]" << endl;
  cout << "Digite o Id do Animal: ";
  cin >> id;

  cout << m_gerenciador.consultar_animal(id);
}

void Entrada::consultar_animal_tipo()
{
  string tipo = "";

  cout << "[--- Consultar Animal Tipo ---]" << endl;
  cout << "MAMIFERO,REPTIL,ANFIBIO,AVE,ANF_EXOTICO,AVE_NATIVA...";
  cout << "Digite o Tipo do Animal: ";
  cin >> tipo;

  vector<string> result = m_gerenciador.consultar_animal_tipo(tipo);
  cout << "[--- Resultado ---]";

  for (int i = 0; i < result.size(); i++)
  {
    cout << result[i] << endl;
  }
}

void Entrada::consultar_funcionario()
{
  int id = 0;

  cout << "[---  Consultar Funcionario  ---]" << endl;
  cout << "Digite o Id do Funcionario: ";
  cin >> id;

  string result = m_gerenciador.consultar_funcionario(id);
  cout << result;
}

void Entrada::cadastrar_funcionario()
{
  vector<string> dados;
  map<string, string> dadosFunc;
  string input;

  cout << "[---    Cadastrar Animal    ---]" << endl;
  cout << "FUNCIONARIO : id;classe;nome;cpf;idade;sangue;rh;especialidade;" << endl;
  cout << "VETERINARIO : crmv;" << endl;
  cout << "TRATADOR    : seguranca;" << endl;
  cout << "Digite os dados do animal separados por ;" << endl;
  getline(cin, input);
  getline(cin, input);

  dados = split(input, ";");

  dadosFunc = {{"id", dados[0]},
               {"classe", dados[1]},
               {"nome", dados[2]},
               {"cpf", dados[3]},
               {"idade", dados[4]},
               {"sangue", dados[5]},
               {"rh", dados[6]},
               {"especialidade", dados[7]}};

  if (dados[1].compare("VETERINARIO") == 0)
  {
    dadosFunc.insert(pair<string, string>("crmv", dados[8]));
    m_gerenciador.addVeterinario(dadosFunc);
  }
  else if (dados[1].compare("TRATADOR") == 0)
  {
    dadosFunc.insert(pair<string, string>("seguranca", dados[8]));
    m_gerenciador.addTratador(dadosFunc);
  }
}

void Entrada::deletar_animal()
{
  int id = 0;

  cout << "[---  Deletar Animal Id ---]" << endl;
  cout << "Digite o Id do Animal: ";
  cin >> id;

  m_gerenciador.deletarAnimal(id);
}

void Entrada::atualizar_animal()
{
  vector<string> dados;
  map<string, string> dadosAnim;
  string input;

  cout << "[---    Atualizar Animal    ---]" << endl;
  cout << "ANIMAL   : id;classe;nome;tamanho;dieta;veterinario;tratador;batismo;" << endl;
  cout << "MAMIFERO : cor do pelo;" << endl;
  cout << "AVE      : evergadura das asas; tamanho do bico;" << endl;
  cout << "ANFIBIO  : total de mudas; data da ultima muda;" << endl;
  cout << "REPTIL   : venenoso (sim|nao); tipo de veneno;" << endl;
  cout << "Digite os dados do animal separados por ;" << endl;
  getline(cin, input);
  getline(cin, input);

  dados = split(input, ";");

  dadosAnim = {{"id", dados[0]},
               {"classe", dados[1]},
               {"nome", dados[2]},
               {"tamanho", dados[3]},
               {"dieta", dados[4]},
               {"veterinario", dados[5]},
               {"tratador", dados[6]},
               {"batismo", dados[7]}};

  if (dados[1].compare("MAMIFERO") == 0)
  {
    dadosAnim.insert(pair<string, string>("cor_pelo", dados[8]));
    m_gerenciador.atualizarMamifero(dadosAnim);
  }
  else if (dados[1].compare("AVE") == 0)
  {
    dadosAnim.insert(pair<string, string>("envergadura_das_asas", dados[8]));
    dadosAnim.insert(pair<string, string>("tamanho_do_bico", dados[9]));
    m_gerenciador.atualizarAve(dadosAnim);
  }
  else if (dados[1].compare("ANFIBIO") == 0)
  {
    dadosAnim.insert(pair<string, string>("total_mudas", dados[8]));
    dadosAnim.insert(pair<string, string>("ultima_muda", dados[9]));
    m_gerenciador.atualizarAnfibio(dadosAnim);
  }
  else if (dados[1].compare("REPTIL") == 0)
  {
    dadosAnim.insert(pair<string, string>("venenoso", dados[8]));
    dadosAnim.insert(pair<string, string>("tipo_veneno", dados[9]));
    m_gerenciador.atualizarReptil(dadosAnim);
  }
}

void Entrada::consultar_animal_veterinario()
{
  int id = 0;

  cout << "[---  Consultar Animal Por Vet Id ---]" << endl;
  cout << "Digite o Id do Vet: ";
  cin >> id;

  vector<string> result = m_gerenciador.consultar_animal_vet(to_string(id));

  cout << "[--- Resultado ---]" << endl;
  for (int i = 0; i < result.size(); i++)
  {
    cout << result[i] << endl;
  }
}

void Entrada::iniciar()
{
  int opcao = 0;

  while (true)
  {
    cout << endl
         << endl
         << endl
         << endl;

    cout << "[---         Menu         ---]" << endl;
    cout << "1 - Cadastrar Animal" << endl;
    cout << "2 - Consultar Animal Por Id" << endl;
    cout << "3 - Consultar Animal Por Tipo" << endl;
    cout << "4 - Consultar Funcionario" << endl;
    cout << "5 - Cadastrar Funcionario" << endl;
    cout << "6 - Deletar Animal" << endl;
    cout << "7 - Deletar Funcionario " << endl;
    cout << "8 - Consultar Animal Por Vet Id" << endl;
    cout << "9 - Atualizar Animal" << endl;
    cout << "[---                      ---]" << endl;
    cout << "Digite uma opção: ";
    cin >> opcao;

    cout << endl
         << endl
         << endl
         << endl;

    switch (opcao)
    {
    case 1:
      cadastrar_animal();
      break;
    case 2:
      consultar_animal_id();
      break;
    case 3:
      consultar_animal_tipo();
      break;
    case 4:
      consultar_funcionario();
      break;
    case 5:
      cadastrar_funcionario();
      break;
    case 6:
      deletar_animal();
      break;
    case 7:
      deletar_funcionario();
      break;
    case 8:
      consultar_animal_veterinario();
      break;
    case 9:
      atualizar_animal();
      break;
    default:
      return;
      break;
    }
  }
}

void Entrada::deletar_funcionario()
{
  int id = 0;

  cout << "[---  Deletar Funcionario Id ---]" << endl;
  cout << "Digite o Id do Funcionario: ";
  cin >> id;

  m_gerenciador.deletarFuncionario(id);
}
