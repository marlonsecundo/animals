#ifndef ANIMAL_EXOTICO_H

#define ANIMAL_EXOTICO_H

#include <string>
#include "animal.h"
#include <vector>
#include <map>

using std::cin;
using std::cout;
using std::endl;

class Animal_Exotico : public Animal
{
  
protected:
  string m_pais_origem;
private:
  Animal_Exotico(map<string, string> dados);
  void set_pais_origem(string pais_origem);
  
  vector<string> get_dados(); // id;classe;nome;sexo;tamanho;dieta;batismo;pais_origem;

  string get_pais_origem();

  ~Animal_Exotico();
};

#endif // ANIMAL_EXOTICO_H