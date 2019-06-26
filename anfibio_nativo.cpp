#include "anfibio_nativo.h"

AnfibioNativo::AnfibioNativo(map<string, string> dados) : Anfibio(dados), Animal_Nativo(dados["autorizacao_ibama"], dados["uf_origem"], dados["autorizacao"])
{
  set_classe(dados["classe"]);
  set_nome_cientifico(dados["nome"]);
  set_sexo(dados["sexo"][0]);
  set_tamanho(stod(dados["tamanho"]));
  set_dieta(dados["dieta"]);
  set_total_mudas(stod(dados["total_mudas"]));
  set_data_string(dados["ultima_muda"]);
  set_veterinario(dados["veterinario"]);
  set_tratador(dados["tratador"]);
}
