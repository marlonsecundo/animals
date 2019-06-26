#include "reptil_exotico.h"

ReptilExotico::ReptilExotico(map<string, string> dados) : Reptil(dados), Animal_Exotico(dados["autorizacao_ibama"], dados["pais_origem"])
{
}

ReptilExotico::~ReptilExotico()
{
}
