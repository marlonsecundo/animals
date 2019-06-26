
/**
 * @file ave.h
 * @brief Arquivo que faz referência aos métodos do arquivo ave.cpp
 * @author Davi César, Emanuel Felipe, João Paulo Carneiro, Lucas Vinicius, Marlon Secundo
 * @since 28/05/2019
 * @date 25/06/2019
 * @version 1.0
 */

#ifndef AVE_H

#define AVE_H

#include <string>
#include "animal.h"
#include <vector>
#include <map>

using std::map;
using std::string;

class Ave : public Animal
{
protected:
  double m_tamanho_do_bico_cm;   /**< Variável responsável por armazenar valor do tamanho do bico (em cm). */
  double m_envergadura_das_asas; /**< Variável responsável por armazenar o valor da envergadura das asas. */

public:
  /**
   * @brief Construtor da classe Ave.
   * @param dados Responsável por armazenar o registro da ave.
   */
  Ave(map<string, string> dados);

  /**
   * @brief Função responsável por mudar o tamanho do bico da ave.
   * @param tamanho_do_bico_cm Variável que armazena o novo tamanho do bico da ave.
   */
  void set_tamanho_do_bico_cm(double tamanho_do_bico_cm);

  /**
   * @brief Função responsável por mudar a envergadura das asas da ave.
   * @param envergadura_das_asas Variável que armazena o novo valor da envergadura das asas da ave.
   */
  void set_envergadura_das_asas(double envergadura_das_asas);

  /**
   * @brief Função responsável por retornar o tamanho do bico da ave.
   * @return Tamanho do bico.
   */
  double get_tamanho_do_bico_cm();

  /**
   * @brief Função responsável por retornar a envergadura das asas da ave.
   * @return Envergadura das asas.
   */
  double get_envergadura_das_asas();

  /**
   * @brief Função responsável por retornar os dados da ave.
   * @return Dados da ave.
   */
  vector<string> get_dados();

  /**
   * @brief Destrutor da classe Ave.
   */
  ~Ave();
};

#endif // AVE_H
