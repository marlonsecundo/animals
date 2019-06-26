#ifndef ANIMAL_EXOTICO_H

#define ANIMAL_EXOTICO_H

#include <string>
#include "animal.h"
#include <vector>
#include <map>
#include "animal_silvestre.h"

class Animal_Exotico : public Animal_Silvestre
{

protected:
  string m_pais_origem;
  Animal_Exotico(string autorizacao_ibama, string pais_origem);
private:

  void set_pais_origem(string pais_origem);

  string get_pais_origem();
};

#endif // ANIMAL_EXOTICO_H
