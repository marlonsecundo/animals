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

protected:
  string m_uf_origem;
  string m_autorizacao;
private:
  Animal_Nativo(map<string, string> dados);
  void set_uf_origem(string uf_origem);
  void set_autorizacao(string autorizacao);

  vector<string> get_dados(); // id;classe;nome;sexo;tamanho;dieta;batismo;

  string get_uf_origem();
  string get_autorizacao();

  ~Animal_Nativo();
};

#endif // ANIMAL_NATIVO_H
