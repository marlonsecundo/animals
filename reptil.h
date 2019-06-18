#ifndef REPTIL_H

#define REPTIL_H

#include <string>
#include "animal.h"
#include <vector>

using std::cin;
using std::cout;
using std::endl;

class Reptil : public Animal
{

protected:
  bool m_venenoso;
  string m_tipo_venenoso;

public:
  Reptil(unsigned int novo_id, string novo_nome_batismo);
  void set_venenoso(bool venenoso);
  void set_tipo_venenoso(string tipo_veneno);
  
  vector<string> get_dados();  // id;classe;nome;sexo;tamanho;dieta;batismo;
  
  bool get_venenoso();
  string get_tipo_venenoso();

  ~Reptil();
};

#endif // REPTIL_H
