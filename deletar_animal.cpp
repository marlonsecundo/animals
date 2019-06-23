#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

/*
  A função que eu fiz vai abrir a tabela contendo os 
  animais e vai excluir a linha contendo o id do animal 
  desejado.
*/

int deletar_animal(unsigned int m_id){
    ifstream tabela_animais ("animais.txt");
    ofstream nova_tabela ("animais.temp");
    string linha;
    if (tabela_animais.is_open() && nova_tabela.is_open()){
      while (!tabela_animais.eof()){
          getline(tabela_animais, linha); 
        if(to_string(m_id)!=linha.substr(0,linha.find(";")) && !linha.empty()){
          nova_tabela << linha << endl;
        }
      }
      tabela_animais.close();
      nova_tabela.close();
      remove ("animais.txt");
      rename("animais.temp", "animais.txt");
      return 0;   
    }
    tabela_animais.close();
    nova_tabela.close();
    remove ("animais.temp");
    return 1;
}