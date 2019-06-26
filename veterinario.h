
/**
 * @file veterinario.h
 * @brief Arquivo que faz referência aos métodos do arquivo veterinario.cpp
 * @author Davi César, Emanuel Felipe, João Paulo Carneiro, Lucas Vinicius, Marlon Secundo
 * @since 28/05/2019
 * @date 25/06/2019
 * @version 1.0
 */

#ifndef VETERINARIO_H
#define VETERINARIO_H

#include <iostream>
#include <string>
#include "funcionario.h"
using namespace std;

class Veterinario : public Funcionario
{
private:
  string m_crmv; /**< Variável responsável por armazenar o CRMV do veterinário. */

public:
  /**
   * @brief Construtor da classe Veterinario.
   * @param dados Responsável por armazenar o registro do veterinário.
   */

  Veterinario(map<string, string> dados);
  /**
   * @brief Função responsável por mudar o CRMV do veterinário.
   * @param novoCRMV Variável que armazena o novo CRMV do veterinário.
   */
  void setCRMV(string novoCRMV);
  /**
   * @brief Função responsável por retornar o CRMV do veterinário.
   * @return CRMV do veterinário.
   */

  string getCRMV();
  /**
   * @brief Função responsável por retornar os dados do veterinário.
   * @return Dados do veterinários.
   */
  vector<string> get_dados();
};
#endif
