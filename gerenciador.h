#ifndef GERENCIADOR_H
#define GERENCIADOR_H

#include <iostream>
#include <string>
#include <vector>
#include <map>

#include "animal.h"
#include "funcionario.h"

class Gerenciador
{
private:
  vector<Animal> m_animais;
  vector<Funcionario> m_funcionarios;

public:
  void addMamifero(map<string, string> dados);
  void addAve(map<string, string> dados);
  void addAnfibio(map<string, string> dados);
  void addReptil(map<string, string> dados);
};
#endif
