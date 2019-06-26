#include "mamifero_nativo.h"

MamiferoNativo::MamiferoNativo(map<string, string> dados) : Mamifero(dados), Animal_Nativo(dados["autorizacao_ibama"], dados["uf_origem"], dados["autorizacao"])
{
}
