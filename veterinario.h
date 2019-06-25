#ifndef VETERINARIO_H
#define VETERINARIO_H

#include <iostream>
#include <string>
#include "funcionario.h"
using namespace std;

class Veterinario : public Funcionario{
  private:
    string m_crmv;
  public:
    Veterinario(map<string, string> dados);
    void setCRMV(string novoCRMV);
    string getCRMV();
};
#endif
