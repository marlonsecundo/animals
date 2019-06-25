#ifndef TRATADOR_H
#define TRATADOR_H

#include <iostream>
#include <string>
#include "funcionario.h"
using namespace std;

class Tratador : public Funcionario
{
private:
  int m_nivel_de_seguranca;

public:
  Tratador(map<string, string> dados);
  void setSegur(int novoSegur);
  int getSegur();
  vector<string> get_dados();
};
#endif
