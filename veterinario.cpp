#include "veterinario.h"
using namespace std;

void Veterinario::setCRMV(string novoCRMV)
{
    this->m_crmv = novoCRMV;
}
string Veterinario::getCRMV()
{
    return this->m_crmv;
}
