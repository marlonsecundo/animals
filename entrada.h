/**
 * @file entrada.h
 * @brief Arquivo que faz referência aos métodos do arquivo entrada.cpp
 * @author Davi César, Emanuel Felipe, João Paulo Carneiro, Lucas Vinicius, Marlon Secundo
 * @since 28/05/2019
 * @date 25/06/2019
 * @version 1.0
 */

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
  /**
   * @brief Função responsável por cadastrar os dados do animal.
   */
  void cadastrar_animal();
  /**
   * @brief Função responsável por cadastrar os dados do funcionário.
   */
  void cadastrar_funcionario();
  /**
   * @brief Função responsável por atualizar os dados  do animal.
   */
  void atualizar_animal();
  /**
   * @brief Função responsável pela consulta por id do animal.
   */
  void consultar_animal_id();

  /**
   * @brief Função responsável pela consulta do animal pelo veterinário.
   */
  void consultar_animal_veterinario();

  void consultar_animal_tratador();
  /**
   * @brief Função responsável pela consulta do animal por tipo.
   */
  void consultar_animal_tipo();

  /**
   * @brief Função responsável pela consulta do funcionário.
   */
  void consultar_funcionario();
  /**
   * @brief Função responsável por deletar um animal.
   */
  void deletar_animal();
  /**
   * @brief Função responsável por deletar um funcionário.
   */
  void deletar_funcionario();
  /**
   * @brief Função responsável pelo menu de opções.
   */
  void iniciar();
};

#endif
