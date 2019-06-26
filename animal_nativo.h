#ifndef ANIMAL_NATIVO_H

#define ANIMAL_NATIVO_H

#include <string>
#include "animal.h"
#include <vector>
#include <map>
#include "animal_silvestre.h"

using std::cin;
using std::cout;
using std::endl;

class Animal_Nativo : public Animal_Silvestre
{

private:
  string m_uf_origem;
  string m_autorizacao;

public:
  Animal_Nativo(string autorizacao_ibama, string uf_origem, string autorizacao);
  void set_uf_origem(string uf_origem);
  void set_autorizacao(string autorizacao);

  string get_uf_origem();
  string get_autorizacao();
};

#endif // ANIMAL_NATIVO_H
