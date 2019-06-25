#ifndef ANIMAL_SILVESTRE_H

#define ANIMAL_SILVESTRE_H

#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;

class Animal_Selvestre 
{
  
protected:
  string m_autorizacao_ibama;
private:
  Animal_Selvestre(map<string, string> dados);
  void set_autorizacao_ibama(string autorizacao_ibama);
  
  vector<string> get_dados(); 

  string get_autorizacao_ibama();

  ~Animal_Silvestre();
};

#endif // ANIMAL_SILVESTRE_H