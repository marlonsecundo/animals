#include "gerenciador.h"
#include "mamifero.h"
#include "ave.h"
#include "anfibio.h"
#include "reptil.h"
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

void Gerenciador::addAnfibio(map<string, string> dados)
{
  Anfibio anfibio(dados);
  anfibio.cadastrar();
}

void Gerenciador::addReptil(map<string, string> dados)
{
  Reptil reptil(dados);
  reptil.cadastrar();
}

string Gerenciador::consultar_animal(int id)
{
  Animal anim(0, "");
  string result = anim.consultar(to_string(id));
  return result;
}
