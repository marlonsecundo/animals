#ifndef TRATADOR_H
#define TRATADOR_H

#include <iostream>
#include <string>
#include "funcionario.h"
using namespace std;

class Tratador : public Funcionario{
  private:
    int nivel_de_seguranca;
  public:
    void setSegur(int novoSegur);
    int getSegur();
};
#endif
