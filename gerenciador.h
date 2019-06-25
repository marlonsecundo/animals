#ifndef GERENCIADOR_H
#define GERENCIADOR_H

#include <iostream>
#include <string>
#include <vector>
#include <map>

#include "animal.h"
#include "funcionario.h"

class Gerenciador
{
private:
  vector<Animal> m_animais;
  vector<Funcionario> m_funcionarios;

public:
  void addMamifero(map<string, string> dados);
  void addAve(map<string, string> dados);
  void addAnfibio(map<string, string> dados);
  void addReptil(map<string, string> dados);

  void addTratador(map<string, string> dados);
  void addVeterinario(map<string, string> dados);

  void deletarAnimal(int id);

  string consultar_animal(int id);
  vector<string> consultar_animal_tipo(string tipo);
  vector<string> consultar_animal_vet(string vetId);
  string consultar_funcionario(int id);
  void deletarFuncionario(int id);
};
#endif
