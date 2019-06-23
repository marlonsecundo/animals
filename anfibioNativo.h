#ifndef ANFIBIO_NATIVO_H

#define ANFIBIO_NATIVO_H
#include "anfibio.h"
#include <string>
#include <map>

using std::map;
using std::string;

class AnfibioNativo : public Anfibio
{
public:
  AnfibioNativo(map<string, string> dados);
  ~AnfibioNativo();
};

#endif // ANFIBIO_NATIVO_H
