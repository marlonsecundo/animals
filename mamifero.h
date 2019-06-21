#ifndef MAMIFERO_H

#define MAMIFERO_H

#include <string>
#include <vector>
#include <fstream>
#include <cstring>
#include "animal.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::ifstream;

class Mamifero : public Animal
{

protected:
  string m_cor_pelo;

public:
  Mamifero(unsigned int novoId, string novoNomeBatismo);

  void set_cor_pelo(string cor_pelo);

  string get_cor_pelo();
  vector<string> get_dados();
  
  void atualizar();
  
  ~Mamifero();
};

#endif // MAMIFERO_H
