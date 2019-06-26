#include "anfibio_nativo.h"

AnfibioNativo::AnfibioNativo(map<string, string> dados) : Anfibio(dados), Animal_Nativo(dados["autorizacao_ibama"], dados["uf_origem"], dados["autorizacao"])
{
}
