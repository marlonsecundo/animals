/**
 * @file animal.h
 * @brief Arquivo que faz referência aos métodos do arquivo animal.cpp
 * @author Davi César, Emanuel Felipe, João Paulo Carneiro, Lucas Vinicius, Marlon Secundo
 * @since 28/05/2019
 * @date 25/06/2019
 * @version 1.0
 */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>
#include <vector>
#include "veterinario.h"
#include "tratador.h"

class Animal
{
private:
  unsigned int m_id;                  /** Variável que armazena o Id do animal. */
  string m_classe, m_nome_cientifico; /** Variáveis que armazenam a classe do animal e seu nome científico, respectivamente. */
  char m_sexo;                        /** Variável que armazena o sexo do animal. */
  double m_tamanho;                   /** Variável que armazena o tamanho do animal. */

public:
  string m_dieta, m_nome_batismo; /** Variáveis que armazenam a dieta do animal e o seu nome de batismo, respectivamente. */
  string m_veterinario;           /** Variável que armazena o nome do veterinário. */
  string m_tratador;              /** Variável que armazena o nome do tratador do animal. */

  int get_id();

  /**
   * @brief Função responsável por mudar o valor do id.
   * @param novo_id Variável que armazena o novo id do animal.
   */
  void set_id(unsigned int novo_id);
  /**
   * @brief Função responsável por retornar a classe do animal.
   * @return Classe do animal.
   */
  string get_classe();

  /**
   * @brief Função responsável por mudar a classe do animal.
   * @param nova_classe Variável que armazena a nova classe.
   */
  void set_classe(string nova_classe);
  /**
   * @brief Função responável por retornar o nome científico do animal.
   * @return Nome científico do animal.
   */
  string get_nome_cientifico();

  /**
   * @brief Função responsável por mudar o nome científico do animal.
   * @param novo_nome_cientifico Variável que armazena o nome científico do animal.
   */
  void set_nome_cientifico(string novo_nome_cientifico);

  /**
   * @brief Função responsável por retornar o sexo do animal (caractere - M/F).
   * @return Sexo do animal.
   */
  char get_sexo();

  /**
   * @brief Função responsável por mudar o sexo do animal.
   * @param novo_sexo Variável que armazena o sexo do animal.
   */
  void set_sexo(char novo_sexo);

  /**
   * @brief Função responsável por retornar o tamanho do animal.
   * @return Tamanho do animal (Em cm).
   */
  double get_tamanho();

  /**
   * @brief Função responsável por mudar o tamanho do animal.
   * @param novo_tamanho Variável que armazena o tamanho do animal (em cm).
   */
  void set_tamanho(double novo_tamanho);
  /**
   * @brief Função responsável por retornar a dieta do animal.
   * @return Dieta do animal.
   */
  string get_dieta();

  /**
   * @brief Função responsável por mudar a dieta do animal.
   * @param nova_dieta Variável que armazena a nova dieta do animal.
   */
  void set_dieta(string nova_dieta);
  /**
   * @brief Função responsável por mudar o nome de batismo do animal.
   * @return Nome de batismo do animal.
   */
  string get_nome_batismo();

  /**
   * @brief Função responsável por mudar o nome de batismo do animal.
   * @param novo_nome_batismo Variável que armazena o novo nome de batismo.
   */
  void set_nome_batismo(string novo_nome_batismo);

  /**
   * @brief Função responsável po retornar o veterinário do animal.
   * @return Veterinário do animal.
   */
  string get_veterinario();

  /**
   * @brief Função responsável por mudar o veterinário do animal.
   * @param novo_veterinario Variável que armazena o novo veterinário.
   */
  void set_veterinario(string novo_veterinario);

  /**
   * @brief Função responsável por retornar o tratador do animal.
   * @return Tratador do animal.
   */
  string get_tratador();

  /**
   * @brief Função responsável por mudar o tratador.
   * @param novo_tratador Variável que armazena o novo tratador.
   */
  void set_tratador(string novo_tratador);

  // Persistencia

  // id;classe;nome;sexo;tamanho;dieta;m_veterinario;m_tratador;batismo;

  /**
   * @brief Função responsável por armazenar os registros dos animais.
   * @return Dados dos animais.
  */
  virtual vector<string> get_dados();

  /**
   * @brief Função responsável por mudar o valor do total de mudas.
   * @param total_mudas Variável que armazena o total de mudas.
   */
  void cadastrar();
  /**
   * @brief Função responsável por mudar o valor do total de mudas.
   * @param total_mudas Variável que armazena o total de mudas.
   */
  int atualizar();
  /**
   * @brief Função responsável por deletar um animal (registro).
   * @return Registro deletado, retorna 0.
   */
  int deletar();
  /**
   * @brief Função responsável pela consulta.
   * @param id Consulta pelo id do animal.
   * @return Registro do animal.
   */
  string consultar();
  /**
   * @brief Função responsável por retornar o registro do animal, buscando pelo tipo.
   * @param tipo Tipo do animal.
   * @return Registro do animal.
   */
  vector<string> consultarTipo();
  /**
   * @brief Função responsável por retornar o registro do veterinário.
   * @param veterinario Veterinário do animal.
   * @return Registro do veterinário.
   */
  vector<string> consutarVeterinario();
  /**
   * @brief Função responsável por retornar o registro do tratador.
   * @param tratador Tratador do animal.
   * @return Registro do tratador.
   */
  vector<string> consutarTratador();

  /**
   * @brief Construtor da classe Animal.
   * @param novo_id, novo_nome_batismo Responsáveis por armazenar o novo id e o novo nome de batismo do animal.
   */
  Animal(map<string, string> dados);
  Animal();

  ~Animal();
};

#endif
