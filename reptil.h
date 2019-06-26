
/**
 * @file reptil.h
 * @brief Arquivo que faz referência aos métodos do arquivo reptil.cpp
 * @author Davi César, Emanuel Felipe, João Paulo Carneiro, Lucas Vinicius, Marlon Secundo
 * @since 28/05/2019
 * @date 25/06/2019
 * @version 1.0
 */

#ifndef REPTIL_H

#define REPTIL_H

#include <string>
#include "animal.h"
#include <vector>
#include <map>

using std::map;
using std::string;
using std::vector;

class Reptil : public Animal
{

protected:
  bool m_venenoso;        /**< Variável responsável por armazenar se o réptil é venenoso ou não. */
  string m_tipo_venenoso; /**< Variável responsável por armazenar o tipo de veneno do réptil. */

public:
  /**
   * @brief Construtor da classe Reptil.
   * @param dados Responsável por armazenar o registro do réptil.
   */
  Reptil(map<string, string> dados);
  /**
   * @brief Função responsável por mudar se o réptil é venenoso ou não.
   * @param venenoso Variável que armazena a nova resposta, sendo "sim" ou "não" (True/False).
   */
  void set_venenoso(bool venenoso);
  /**
   * @brief Função responsável por mudar o tipo de veneno do réptil.
   * @param tipo_veneno Variável responsável por armazenar o novo tipo de veneno.
   */
  void set_tipo_venenoso(string tipo_veneno);

  /**
   * @brief Função responsável por retornar os dados do réptil.
   * return Dados do réptil.
   */
  vector<string> get_dados(); // id;classe;nome;sexo;tamanho;dieta;batismo;
  /**
   * @brief Função responsável por retornar se o réptil é venenoso ou não.
   * @return Se o réptil é venenoso ou não (True/False).
   */
  bool get_venenoso();
  /**
   * @brief Função responsável por retornar o tipo de veneno do réptil.
   * @return Tipo de veneno do réptil.
   */
  string get_tipo_venenoso();

  /**
   * @brief Destrutor da classe Reptil
   */
  ~Reptil();
};

#endif // REPTIL_H
