#include "mamifero.h"

Mamifero::Mamifero(map<string, string> dados) : Animal(stoi(dados["id"]), dados["batismo"])
{
  set_classe(dados["classe"]);
  set_nome_cientifico(dados["nome"]);
  set_sexo(dados["sexo"][0]);
  set_tamanho(stod(dados["tamanho"]));
  set_dieta(dados["dieta"]);
  set_cor_pelo(dados["cor_pelo"]);
  set_veterinario(dados["veterinario"]);
  set_tratador(dados["tratador"]);
}

void Mamifero::set_cor_pelo(string cor_pelo)
{
  this->m_cor_pelo = cor_pelo;
}

string Mamifero::get_cor_pelo()
{
  return m_cor_pelo;
}

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
  dados.push_back(m_veterinario);
  dados.push_back(m_tratador);
  dados.push_back(get_nome_batismo());
  dados.push_back(get_cor_pelo());
  return dados;
}

void Mamifero::atualizar()
{
  ifstream arquivo("animal.txt");
  string linha;
  char *linha_aux = new char[linha.length() + 1];
  if (arquivo.is_open())
  {
    while (!arquivo.eof())
    {
      getline(arquivo, linha);
      strcpy(linha_aux, linha.c_str()); //dá pau quando encontra um 23, por exemplo.
      char *token = strtok(linha_aux, ";");
      while (token != 0)
      {
        string x = to_string(get_id());
        if (strcmp(token, "2") == 0)
        { // Nos meus testes, eu colocava "2" para testar e deu certo.
          // Substituir os valores.
        }
        token = strtok(NULL, ";");
      }
    }
    arquivo.close();
  }
  else
  {
    cout << "Erro ao abrir o arquivo. " << endl;
  }
}

Mamifero::~Mamifero()
{
}
