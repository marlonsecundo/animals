#ifndef AVE_EXOTICA_H

#define AVE_EXOTICA_H

#include "ave.h"
#include <string>
#include <map>

using std::string;
using std::map;

class AveExotica : public Ave
{
    public:
        AveExotica(map<string, string> dados);
        ~AveExotica();
};

#endif // AVE_EXOTICA_H
