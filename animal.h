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
  unsigned int m_id;
  string m_classe, m_nome_cientifico;
  char m_sexo;
  double m_tamanho;

public:
  string m_dieta, m_nome_batismo;
  string m_veterinario;
  string m_tratador;

  int get_id();
  void set_id(unsigned int novo_id);
  string get_classe();
  void set_classe(string nova_classe);
  string get_nome_cientifico();
  void set_nome_cientifico(string novo_nome_cientifico);
  char get_sexo();
  void set_sexo(char novo_sexo);
  double get_tamanho();
  void set_tamanho(double novo_tamanho);
  string get_dieta();
  void set_dieta(string nova_dieta);
  string get_nome_batismo();
  void set_nome_batismo(string novo_nome_batismo);
  string get_veterinario();
  void set_veterinario(string novo_veterinario);
  string get_tratador();
  void set_tratador(string novo_tratador);

  // Persistencia

  // id;classe;nome;sexo;tamanho;dieta;m_veterinario;m_tratador;batismo;
  virtual vector<string> get_dados();

  void cadastrar();
  int atualizar();
  int deletar();
  string consultar();
  vector<string> consultarTipo();
  vector<string> consutarVeterinario();
  vector<string> consutarTratador();

  Animal(unsigned int novo_id, string novo_nome_batismo);

  ~Animal();
};

#endif
