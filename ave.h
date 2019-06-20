#ifndef AVE_H

#define AVE_H

#include <string>
#include "animal.h"
#include <vector>

using std::cin;
using std::cout;
using std::endl;

class Ave : public Animal
{
protected:
  double m_tamanho_do_bico_cm;
  double m_envergadura_das_asas;

public:
  Ave(unsigned int novoId, string novoNomeBatismo);
  void set_tamanho_do_bico_cm(double tamanho_do_bico_cm);
  void set_envergadura_das_asas(double envergadura_das_asas);
  vector<string> get_dados();  // id;classe;nome;sexo;tamanho;dieta;batismo;
  
  double get_tamanho_do_bico_cm();
  double get_envergadura_das_asas();

  ~Ave();
};

#endif // AVE_H
