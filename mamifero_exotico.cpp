#include "mamifero_exotico.h"

MamiferoExotico::MamiferoExotico(map<string, string> dados) : Mamifero(dados), Animal_Exotico(dados["autorizacao_ibama"], dados["pais_origem"])
{
}

MamiferoExotico::~MamiferoExotico()
{
}
