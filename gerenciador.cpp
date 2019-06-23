#include "gerenciador.h"
#include "mamifero.h"
#include "ave.h"
#include <map>

void Gerenciador::addMamifero(map<string, string> dados)
{
  Mamifero mam(dados);
  mam.cadastrar();
}

void Gerenciador::addAve(map<string, string> dados)
{
  Ave ave(dados);
  ave.cadastrar();
}
