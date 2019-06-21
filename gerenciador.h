#ifndef GERENCIADOR_H
#define GERENCIADOR_H

#include <iostream>
#include <string>
#include <vector>

#include "animal.h"
#include "funcionario.h"

class Gerenciador
{
private:
  vector<Animal> m_animais;
  vector<Funcionario> m_funcionarios;

public:
  void addMamifero(vector<string> dados);
};
#endif
