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
  cout << "REPTIL   : venenoso; tipo de veneno;" << endl;
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
    cout << result[i];
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

void Entrada::iniciar()
{
  int opcao = 0;

  while (true)
  {
    cout << endl;

    cout << "[---         Menu         ---]" << endl;
    cout << "1 - Cadastrar Animal" << endl;
    cout << "2 - Consultar Animal Por Id" << endl;
    cout << "3 - Consultar Animal Por Tipo" << endl;
    cout << "4 - Consultar Funcionario" << endl;
    cout << "[---                      ---]" << endl;
    cout << "Digite uma opção: ";
    cin >> opcao;

    system("CLS");
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
    default:
      return;
      break;
    }
  }
}
