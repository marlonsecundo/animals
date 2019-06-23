#ifndef ANFIBIO_EXOTICO_H

#define ANFIBIO_EXOTICO_H
#include "anfibio.h"
#include <string>
#include <map>

using std::string;
using std::map;

class AnfibioExotico : public Anfibio
{
    public:
        AnfibioExotico(map<string, string> dados);
        ~AnfibioExotico();
};

#endif // ANFIBIO_EXOTICO_H
