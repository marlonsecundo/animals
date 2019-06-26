#ifndef AVE_NATIVA_H

#define AVE_NATIVO_H
#include "ave.h"
#include "animal_nativo.h"
#include <string>
#include <map>

using std::map;
using std::string;

class AveNativa : public Ave, Animal_Nativo
{
public:
  AveNativa(map<string, string> dados);
  ~AveNativa();
};

#endif // AVE_NATIVA_H
