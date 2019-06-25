#ifndef ENTRADA_H
#define ENTRADA_H

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
  void cadastrar_funcionario();

  void atualizar_animal();
  void consultar_animal_id();
  void consultar_animal_veterinario();
  void consultar_animal_tipo();
  void consultar_funcionario();
  void deletar_animal();
  void iniciar();
};

#endif
