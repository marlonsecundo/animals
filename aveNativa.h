#ifndef AVE_NATIVA_H

#define AVE_NATIVA_H

#include "ave.h"
#include <string>
#include <map>

using std::string;
using std::map;

class AveNativa : public Ave
{
    public:
        AveNativa(map<string, string> dados);
        ~AveNativa();
};

#endif // AVE_NATIVA_H
