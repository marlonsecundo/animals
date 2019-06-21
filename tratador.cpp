#include "tratador.h"
using namespace std;

void Tratador::setSegur(int novoSegur)
{
    this->m_nivel_de_seguranca = novoSegur;
}
int Tratador::getSegur()
{
    return this->m_nivel_de_seguranca;
}
