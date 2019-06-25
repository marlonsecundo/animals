#ifndef MAMIFERO_H

#define MAMIFERO_H

#include <string>
#include <vector>
#include <map>
#include <fstream>
#include <cstring>

#include "animal.h"

using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::map;
using std::string;
using std::vector;

class Mamifero : public Animal
{

protected:
  string m_cor_pelo;

public:
  Mamifero(map<string, string> dados);

  void set_cor_pelo(string cor_pelo);

  string get_cor_pelo();
  vector<string> get_dados();

  ~Mamifero();
};

#endif // MAMIFERO_H
