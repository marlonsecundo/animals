#include "mamifero.h"

Mamifero::Mamifero(vector<string> dados) : Animal(stoi(dados[0]), dados[1])
{
}

void Mamifero::set_cor_pelo(string cor_pelo)
{
  this->m_cor_pelo = cor_pelo;
}

string Mamifero::get_cor_pelo()
{
  return m_cor_pelo;
}
<<<<<<< HEAD

vector<string> Mamifero::get_dados()
{
    vector<string> dados;
    //id;classe;nome;sexo;tamanho;dieta;batismo;corDoPelo;
    dados.push_back(to_string(get_id()));
    dados.push_back(get_classe());
    dados.push_back(get_nome_cientifico());
    dados.push_back(to_string(get_sexo()));
    dados.push_back(to_string(get_tamanho()));
    dados.push_back(get_dieta());
    dados.push_back(get_nome_batismo());
    dados.push_back(get_cor_pelo());
    return dados;
}

void Mamifero::atualizar()
{
  ifstream arquivo("animal.txt");
  string linha;
  char *linha_aux = new char[linha.length() + 1];
  if(arquivo.is_open()) {
    while(! arquivo.eof()) {
      getline(arquivo, linha);
      strcpy(linha_aux, linha.c_str()); //dá pau quando encontra um 23, por exemplo.
      char *token = strtok(linha_aux, ";");
      while(token != 0) {
        string x = to_string(get_id());
        if(strcmp(token, "2") == 0) { // Nos meus testes, eu colocava "2" para testar e deu certo.
          // Substituir os valores.
        }
        token = strtok(NULL, ";");
      }
    }
    arquivo.close();
  }else {
    cout << "Erro ao abrir o arquivo. " << endl;
  }

}
=======

vector<string> Mamifero::get_dados()
{
  vector<string> dados;
  //id;classe;nome;sexo;tamanho;dieta;batismo;corPelo (nesse caso)
  dados.push_back(to_string(get_id()));
  dados.push_back(get_classe());
  dados.push_back(get_nome_cientifico());
  dados.push_back(to_string(get_sexo()));
  dados.push_back(to_string(get_tamanho()));
  dados.push_back(get_dieta());
  dados.push_back(get_nome_batismo());
  dados.push_back(get_cor_pelo());
  return dados;
}

>>>>>>> 09db33fe1ad53e94519b7c79dbc68e748aae3691
Mamifero::~Mamifero()
{
}
