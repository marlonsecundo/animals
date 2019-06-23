#ifndef ENTRADA_H
#define ENTRADA_H

#include "animal.h"
#include <vector>
#include <fstream>
#include <sstream>
#include <string>
#include "gerenciador.h"

class Entrada
{
private:
  Gerenciador m_gerenciador;

public:
  void cadastrar_animal();
  void atualizar_animal();
  void consultar_animal();
  int deletar_animal(unsigned int m_id);
  void iniciar();
};

#endif
