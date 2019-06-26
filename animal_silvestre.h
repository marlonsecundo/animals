#ifndef ANIMAL_SILVESTRE_H

#define ANIMAL_SILVESTRE_H

#include <string>
#include <vector>
using std::string;

class Animal_Silvestre
{

private:
  string m_autorizacao_ibama;

public:
  Animal_Silvestre(string autorizacao_ibama);
  void set_autorizacao_ibama(string autorizacao_ibama);

  string get_autorizacao_ibama();
};

#endif // ANIMAL_SILVESTRE_H
