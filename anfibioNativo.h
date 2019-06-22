#ifndef ANFIBIO_NATIVO_H

#define ANFIBIO_NATIVO_H
#include "Anfibio.h"
#include <string>
#include <map>

using std::string;
using std::map;

class AnfibioNativo : public Anfibio 
{
    public:
        AnfibioNativo(map<string, string> dados);
        ~AnfibioNativo();
};

#endif // ANFIBIO_NATIVO_H
