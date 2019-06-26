/**
 * @file tratador.h
 * @brief Arquivo que faz referência aos métodos do arquivo tratador.cpp
 * @author Davi César, Emanuel Felipe, João Paulo Carneiro, Lucas Vinicius, Marlon Secundo
 * @since 28/05/2019
 * @date 25/06/2019
 * @version 1.0
 */

#ifndef TRATADOR_H
#define TRATADOR_H

#include <iostream>
#include <string>
#include "funcionario.h"
using namespace std;

class Tratador : public Funcionario
{
private:
  int m_nivel_de_seguranca; /**< Variável responsável por armazenar o nível de segurança do tratador. */
public:
  /**
   * @brief Construtor da classe Tratador.
   * @param dados Responsável por armazenar o registro do tratador.
   */
  Tratador(map<string, string> dados);

  /**
   * @brief Função responsável por mudar o nível de segurança do tratador..
   * @param novoSegur Variável que armazena o novo nível de segurança do tratador.
   */
  void setSegur(int novoSegur);
  /**
   * @brief Função responsável por retornar o nível de segurança.
   * @return Nível de segurança.
   */
  int getSegur();
  /**
   * @brief Função responsável por retornar os dados do tratador.
   * @return Dados do tratador.
   */

  vector<string> get_dados();
};
#endif
