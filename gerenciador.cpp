#include "gerenciador.h"
#include "mamifero.h"
#include <map>

void Gerenciador::addMamifero(map<string, string> dados)
{
  Mamifero mam(dados);
  mam.cadastrar();
}
