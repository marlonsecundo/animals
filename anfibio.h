#ifndef ANFIBIO_H

#define ANFIBIO_H

#include <string>
#include <vector>
#include "animal.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

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
  Anfibio(vector<string> dados);
  void set_total_mudas(int total_mudas);
  void set_ultima_muda(Date data_ultima_muda);

  int get_total_mudas();
  Date get_data_ultima_muda();
  vector<string> get_dados();
<<<<<<< HEAD

}
=======
};
>>>>>>> 09db33fe1ad53e94519b7c79dbc68e748aae3691

#endif // ANFIBIO_H
