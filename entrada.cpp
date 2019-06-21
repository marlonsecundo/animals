#include <iostream>
#include "entrada.h"
#include <stdio.h>
#include <string.h>

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
  string input;

  cout << "[--- Cadastrar Animal ---]" << endl;
  cout << "Digite os dados do animal separados por ;" << endl;
  getline(cin, input);
  getline(cin, input);

  dados = split(input, ";");
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
