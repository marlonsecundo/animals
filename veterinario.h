#ifndef VETERINARIO_H
#define VETERINARIO_H

#include <iostream>
#include <string>
#include "funcionario.h"
using namespace std;

class Veterinario : public Funcionario{
  private:
    string crmv;
  public:
    void setCRMV(string novoCRMV);
    string getCRMV();
};
#endif
