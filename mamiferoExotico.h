#ifndef MAMIFERO_EXOTIVO_H

#define MAMIFERO_EXOTICO_H
#include "mamifero.h"
#include <string>
#include <map>

using std::string;
using std::map;

class MamiferoExotico : public Mamifero {
    public:
        MamiferoExotico(map<string, string> dados);
        ~MamiferoExotico();
};

#endif // MAMIFERO_EXOTICO_H
