#include "ave_nativa.h"

AveNativa::AveNativa(map<string, string> dados) : Ave(dados)
{
  set_classe(dados["classe"]);
  set_nome_cientifico(dados["nome"]);
  set_sexo(dados["sexo"][0]);
  set_tamanho(stod(dados["tamanho"]));
  set_dieta(dados["dieta"]);
  set_envergadura_das_asas(stod(dados["envergadura_das_asas"]));
  set_tamanho_do_bico_cm(stod(dados["tamanho_do_bico"]));
  set_veterinario(dados["veterinario"]);
  set_tratador(dados["tratador"]);
}

AveNativa::~AveNativa()
{
}
