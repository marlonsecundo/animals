#ifndef REPTIL_NATIVO_H

#define REPTIL_NATIVO_H

#include "reptil.h"
#include "animal_nativo.h"
#include <string>
#include <map>

using std::string;
using std::map;

class ReptilNativo : public Reptil, Animal_Nativo
{
    public:
        ReptilNativo(map<string, string> dados);
        ~ReptilNativo();
};

#endif // REPTIL_NATIVO_H
