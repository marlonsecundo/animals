#include "reptil_nativo.h"

ReptilNativo::ReptilNativo(map<string, string> dados) : Reptil(dados)
{
  set_classe(dados["classe"]);
  set_nome_cientifico(dados["nome"]);
  set_sexo(dados["sexo"][0]);
  set_tamanho(stod(dados["tamanho"]));
  set_dieta(dados["dieta"]);
  set_venenoso(stod(dados["envergadura_das_asas"]));
  set_tipo_venenoso(dados["tipo_venenoso"]);
  set_veterinario(dados["veterinario"]);
  set_tratador(dados["tratador"]);
}

ReptilNativo::~ReptilNativo()
{
}
