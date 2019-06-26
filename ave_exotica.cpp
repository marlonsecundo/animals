#include "ave_exotica.h"

AveExotica::AveExotica(map<string, string> dados) : Ave(dados), Animal_Exotico(dados["autorizacao_ibama"], dados["pais_origem"])
{
}

AveExotica::~AveExotica()
{
}
