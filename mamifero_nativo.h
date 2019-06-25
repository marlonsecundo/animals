#ifndef MAMIFERO_NATIVO_H

#define MAMIFERO_NATIVO_H
#include "mamifero.h"
#include "animal_nativo.h"
#include <string>
#include <map>

using std::string;
using std::map;

class MamiferoNativo : public Mamifero, Animal_Nativo {
    public:
        MamiferoNativo(map<string, string> dados);
        ~MamiferoNativo();
};

#endif // MAMIFERO_NATIVO_H
