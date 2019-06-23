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

  cout << "[--- Cadastrar Animal ---]" << endl;
  cout << "ANIMAL   : id;classe;nome;tamanho;dieta;veterinario;tratador;batismo;" << endl;
  cout << "MAMIFERO : cor do pelo;" << endl;
  cout << "AVE      : evergadura das asas; tamanho do bico;" << endl;
  // Falta Colocar os Outros Animais
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
  // Falta Colocar os Outros Animais
}

void Entrada::iniciar()
{
  int opcao = 0;

  while (true)
  {
    cout << endl;

    cout << "[---       Menu       ---]" << endl;
    cout << "1 - Cadastrar Animal" << endl;
    cout << "[---                  ---]" << endl;
    cout << "Digite uma opção: ";
    cin >> opcao;

    cout << endl;
    switch (opcao)
    {
    case 1:
      cadastrar_animal();
      break;

    default:
      return;
      break;
    }
  }
}
