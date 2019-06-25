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

void Gerenciador::addTratador(map<string, string> dados)
{
  Tratador func(dados);
  func.cadastrar();
}

void Gerenciador::addVeterinario(map<string, string> dados)
{
  Veterinario vet(dados);
  vet.cadastrar();
}

string Gerenciador::consultar_animal(int id)
{
  Animal anim(0, "");
  string result = anim.consultar(to_string(id));
  return result;
}

vector<string> Gerenciador::consultar_animal_tipo(string tipo)
{
  Animal anim(0, "");
  vector<string> result = anim.consultarTipo(tipo);
  return result;
}
string Gerenciador::consultar_funcionario(int id)
{
  Funcionario func;
  string result = func.consultar(to_string(id));
  return result;
}
