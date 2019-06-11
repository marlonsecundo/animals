#ifndef REPTIL_H

#define REPTIL_H

#include <string>
#include "animal.h"

using std::cin;
using std::cout;
using std::endl;

class Reptil : public Animal
{

protected:
  bool m_venenoso;
  string m_tipo_venenoso;

public:
  Reptil();
  bool set_venenoso(bool venenoso);
  string set_tipo_venenoso(string tipo_veneno);

  bool get_venenoso();
  string get_tipo_venenoso();

  ~Reptil();
};

#endif // REPTIL_H
