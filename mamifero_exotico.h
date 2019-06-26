#ifndef MAMIFERO_EXOTICO_H

#define MAMIFERO_EXOTICO_H
#include "mamifero.h"
#include "animal_exotico.h"
#include <string>
#include <map>

using std::map;
using std::string;

class MamiferoExotico : public Mamifero, Animal_Exotico
{
public:
  MamiferoExotico(map<string, string> dados);
  ~MamiferoExotico();
};

#endif // MAMIFERO_EXOTICO_H
