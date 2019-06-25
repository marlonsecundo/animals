#ifndef REPTIL_EXOTICO_H

#define REPTIL_EXOTICO_H

#include "reptil.h"
#include "animal_exotico.h"
#include <string>
#include <map>

using std::string;
using std::map;

class ReptilExotico : public Reptil, Animal_Exotico
{
    public:
        ReptilExotico(map<string, string> dados);
        ~ReptilExotico();
};

#endif // REPTIL_EXOTICO_H
