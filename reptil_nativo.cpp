#include "reptil_nativo.h"

ReptilNativo::ReptilNativo(map<string, string> dados) : Reptil(dados), Animal_Nativo(dados["autorizacao_ibama"], dados["uf_origem"], dados["autorizacao"])
{
}
