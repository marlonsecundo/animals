#include "tratador.h"
using namespace std;

void Tratador::setSegur(int novoSegur)
{
    this->nivel_de_seguranca = novoSegur;
}
int Tratador::getSegur()
{
    return this->nivel_de_seguranca;
}
