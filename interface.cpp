#include <iostream>
#include "interface.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

void Interface::cadastrar_animal()
{
}

void Interface::iniciar()
{
  int opcao = 0;

  while (true)
  {
    cout << endl;

    cout << "[---    Animais    ---]" << endl;
    cout << "1 - Cadastrar Animal" << endl;
    cout << "[---               ---]" << endl;
    cout << "Digite uma opção: ";
    cin >> opcao;

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
