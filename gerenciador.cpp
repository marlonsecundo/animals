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

void Gerenciador::atualizarMamifero(map<string, string> dados)
{
  Mamifero mam(dados);
  mam.atualizar();
}

void Gerenciador::atualizarAve(map<string, string> dados)
{
  Ave ave(dados);
  ave.atualizar();
}

void Gerenciador::atualizarAnfibio(map<string, string> dados)
{
  Anfibio anf(dados);
  anf.atualizar();
}

void Gerenciador::atualizarReptil(map<string, string> dados)
{
  Reptil rep(dados);
  rep.atualizar();
}

void Gerenciador::deletarAnimal(int id)
{
  Animal anim;
  anim.set_id(id);
  anim.deletar();
}

string Gerenciador::consultar_animal(int id)
{
  Animal anim;
  anim.set_id(id);
  string result = anim.consultar();
  return result;
}

vector<string> Gerenciador::consultar_animal_tipo(string tipo)
{
  Animal anim;
  anim.set_classe(tipo);
  vector<string> result = anim.consultarTipo();
  return result;
}

vector<string> Gerenciador::consultar_animal_vet(string id)
{
  Animal anim;
  anim.set_veterinario(id);
  vector<string> result = anim.consutarVeterinario();
  return result;
}

string Gerenciador::consultar_funcionario(int id)
{
  Funcionario func;
  string result = func.consultar(to_string(id));
  return result;
}

void Gerenciador::deletarFuncionario(int id)
{
  Funcionario func;
  func.setId(id);
  func.deletar();
}

vector<string> Gerenciador::consultar_animal_trat(string tratId)
{
  Animal anim;
  anim.set_veterinario(tratId);
  vector<string> result = anim.consutarTratador();
  return result;
}
