#include "anfibio_exotico.h"

AnfibioExotico::AnfibioExotico(map<string, string> dados) : Anfibio(dados), Animal_Exotico(dados["autorizacao_ibama"], dados["pais_origem"])
{
}

AnfibioExotico::~AnfibioExotico()
{
}
