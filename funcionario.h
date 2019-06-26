
/**
 * @file funcionario.h
 * @brief Arquivo que faz referência aos métodos do arquivo funcionario.cpp
 * @author Davi César, Emanuel Felipe, João Paulo Carneiro, Lucas Vinicius, Marlon Secundo
 * @since 28/05/2019
 * @date 25/06/2019
 * @version 1.0
 */

#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

class Funcionario
{
private:
  int m_id;                /**< Variável responsável por armazenar o id do funcionário. */
  string m_nome;           /**< Variável responsável por armazenar o nome do funcionário. */
  string m_cpf;            /**< Variável responsável por armazenar o CPF do funcionário. */
  int m_idade;             /**< Variável responsável por armazenar a idade do funcionário. */
  string m_tipo_sanguineo; /**< Variável responsável por armazenar o tipo sanguíneo do funcionário. */
  char m_fator_rh;         /**< Variável responsável por armazenar o fator rh do funcionário. */
  string m_especialidade;  /**< Variável responsável por armazenar a especialidade do funcionário. */
  string m_classe;         /**< Variável responsável por armazenar a classe. */

public:
  /**
   * @brief Construtor da classe Funcionario.
   * @param dados Dicionário que armazena os dados do funcionário.
   */
  Funcionario(map<string, string> dados);
  Funcionario();

  /**
   * @brief Função responsável por mudar o id do Funcionário.
   * @param novoId Variável que armazena o novo id do funcionário.
   */
  void setId(int novoId); /**
   * @brief Função responsável por mudar a classe.
   * @param classe Variável que armazena a nova classe.
   */
  void setClasse(string classe);

  /**
   * @brief Função responsável por mudar o nome do funcionário.
   * @param novoNome Variável que armazena o novo nome do funcionário.
   */
  void setNome(string novoNome);

  /**
   * @brief Função responsável por mudar o CPF do funcionário.
   * @param novoCPF Variável que armazena o novo CPF do funcionário.
   */
  void setCPF(string novoCPF);

  /**
   * @brief Função responsável por mudar a idade do funcionário.
   * @param novoIdade Variável que armazena a nova idade do funcionário.
   */
  void setIdade(int novoIdade);

  /**
   * @brief Função responsável por mudar o tipo sanguíneo do funcionário.
   * @param novoSangue Variável que armazena o novo tipo sanguíneo do funcionário.
   */
  void setSangue(string novoSangue);

  /**
   * @brief Função responsável por mudar o fator rh.
   * @param novoRH Variável que armazena o novo rh.
   */
  void setRH(char novoRH);

  /**
   * @brief Função responsável por mudar a especialidade.
   * @param novoEspecialidade Variável que armazena a nova especialidade.
   */
  void setEspecialidade(string novoEspecialidade);

  /**
   * @brief Função responsável por retornar o id do funcionário.
   * @return Id do funcionário.
   */
  int getId();

  /**
   * @brief Função responsável por retornar a classe.
   * @return Classe.
   */
  string getClasse();

  /**
   * @brief Função responsável por retornar o nome do funcionário.
   * @return Nome do funcionário.
   */
  string getNome();

  /**
   * @brief Função responsável por retornar o CPF do funcionário.
   * @return CPF do funcionário.
   */
  string getCPF();

  /**
   * @brief Função responsável por retornar a idade do funcionário.
   * @return Idade do funcionário.
   */
  int getIdade();

  /**
   * @brief Função responsável por retornar o tipo sanguíneo do funcionário.
   * @return Tipo sanguíneo do funcionário.
   */
  string getSangue();

  /**
   * @brief Função responsável por retornar o fator RH do funcionário.
   * @return Fator RH.
   */
  char getRH();

  /**
   * @brief Função responsável por retornar a especialidade do funcionário.
   * @return Especialidade do funcionário.
   */
  string getEspecialidade();

  // Persistencia

  // id;classe;nome;cpf;idade;sangue;rh;especcialidade;crmv;seguranca;
  virtual vector<string> get_dados();
  /**
   * @brief Função responsável por cadastrar o funcionário.
   */
  void cadastrar();
  /**
   * @brief Função responsável por atualizar o funcionário.
   */
  void atualizar();

  /**
   * @brief Função responsável por deletar um registro de um funcionário.
   */
  void deletar();

  /**
   * @brief Função responsável por consultar um funcionário pelo id.
   * @Param id Id do funcionário.
   * @return Dados do funcionário
   */
  string consultar(string id);
};
#endif
