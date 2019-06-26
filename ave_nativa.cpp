#include "ave_nativa.h"

AveNativa::AveNativa(map<string, string> dados) : Ave(dados), Animal_Nativo(dados["autorizacao_ibama"], dados["uf_origem"], dados["autorizacao"])
{
}
