
/**
 * @file mamifero.h
 * @brief Arquivo que faz referência aos métodos do arquivo mamifero.cpp.
 * @author Davi César, Emanuel Felipe, João Paulo Carneiro, Lucas Vinicius, Marlon Secundo
 * @since 28/05/2019
 * @date 25/06/2019
 * @version 1.0
 */

#ifndef MAMIFERO_H

#define MAMIFERO_H

#include <string>
#include <vector>
#include <map>
#include <fstream>
#include <cstring>

#include "animal.h"

using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::map;
using std::string;
using std::vector;

class Mamifero : public Animal
{

protected:
  string m_cor_pelo; /**< Variável responsável por armazenar a cor do pelo do mamifero. */

public:
  /**
   * @brief Construtor da classe Mamifero.
   * @param dados Responsável por armazenar o registro do mamifero.
   */
  Mamifero(map<string, string> dados);
  /**
   * @brief Função responsável por mudar a cor do pelo do mamifero.
   * @param cor_pelo Variável que armazena a nova cor do pelo do mamifero.
   */
  void set_cor_pelo(string cor_pelo);
  /**
   * @brief Função responsável por retornar a cor do pelo do mamifero.
   * @return Cor do pelo.
   */
  string get_cor_pelo();
  /**
   * @brief Função responsável pelo retorno dos dados do mamifero.
   * @return Dados do mamifero.
   */
  vector<string> get_dados();

  /**
   * @brief Destrutor da classe Mamifero.
   */
  ~Mamifero();
};

#endif // MAMIFERO_H
