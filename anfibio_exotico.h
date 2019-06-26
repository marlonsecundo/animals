#ifndef ANFIBIO_EXOTICO_H

#define ANFIBIO_EXOTICO_H
#include "anfibio.h"
#include "animal_exotico.h"
#include <string>
#include <map>

using std::map;
using std::string;

class AnfibioExotico : public Anfibio, Animal_Exotico
{
public:
  AnfibioExotico(map<string, string> dados);
  ~AnfibioExotico();
};

#endif // ANFIBIO_EXOTICO_H
