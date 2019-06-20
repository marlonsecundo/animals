#ifndef MAMIFERO_H

#define MAMIFERO_H

#include <string>
#include <vector>
#include "animal.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

class Mamifero : public Animal
{

protected:
  string m_cor_pelo;

public:
  Mamifero(vector<string> dados);

  void set_cor_pelo(string cor_pelo);

  string get_cor_pelo();
  vector<string> get_dados();
  vector<string> atualizar();

  ~Mamifero();
};

#endif // MAMIFERO_H
