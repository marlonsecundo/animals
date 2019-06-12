#ifndef ANFIBIO_H

#define ANFIBIO_H

#include <string>
#include "animal.h"

using std::cin;
using std::cout;
using std::endl;

typedef struct date
{

  int dia;
  int mes;
  int ano;

} Date;

class Anfibio : public Animal
{

protected:
  int m_total_de_mudas;
  Date m_ultima_muda;

public:
  Anfibio(unsigned int novoId, string novoNomeBatismo);
  int set_total_mudas(int total_mudas);
  Date set_ultima_muda(Date data_ultima_muda);

  int get_total_mudas();
  Date get_data_ultima_muda();

  ~Anfibio();
};

#endif // ANFIBIO_H