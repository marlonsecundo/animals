#ifndef ANFIBIO_H

#define ANFIBIO_H

#include <string>
#include <vector>
#include <map>
#include "animal.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::map;

typedef struct date
{

  int dia;
  int mes;
  int ano;

  string toString()
  {
    return to_string(dia) + "/" + to_string(mes) + "/" + to_string(ano);
  }
  

} Date;

class Anfibio : public Animal
{

protected:
  int m_total_de_mudas;
  Date m_ultima_muda;

public:
  Anfibio(map<string, string> dados);
  void set_total_mudas(int total_mudas);
  void set_ultima_muda(Date data_ultima_muda);
  void set_data_string(string d);

  int get_total_mudas();
  string get_data();
  Date get_data_ultima_muda();
  vector<string> get_dados();
};

#endif // ANFIBIO_H
