#ifndef AVE_EXOTICA_H

#define AVE_EXOTICA_H
#include "ave.h"
#include "animal_exotico.h"
#include <string>
#include <map>

using std::map;
using std::string;

class AveExotica : public Ave, Animal_Exotico
{
public:
  AveExotica(map<string, string> dados);
  ~AveExotica();
};

#endif // AVE_EXOTICA_H
