#include "mamifero_nativo.h"

MamiferoNativo::MamiferoNativo(map<string, string> dados) : Mamifero(dados) 
{
  set_classe(dados["classe"]);
  set_nome_cientifico(dados["nome"]);
  set_sexo(dados["sexo"][0]);
  set_tamanho(stod(dados["tamanho"]));
  set_dieta(dados["dieta"]);
  set_cor_pelo(dados["cor_do_pelo"]);
  set_veterinario(dados["veterinario"]);
  set_tratador(dados["tratador"]);
}

MamiferoNativo::~MamiferoNativo() {

}


