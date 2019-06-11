#ifndef _ANIMAIS_H_
#define _ANIMAIS_H_
#include <iostream>
#include <string>

using namespace std;

class Animais{
private:
    unsigned int id;
    string classe, nomeCientifico;
    char sexo;
    double tamanho;

public:
    string dieta, nomeBatismo;
    veterinario Veterinario;
    tratador Tratador;

    int getId();
    void setId(unsigned int novoId);
    string getClasse();
    void setClasse(string novaClasse);
    string getNomeCientifico();
    void setNomeCientifico(string novoNomeCientifico);
    char getSexo();
    void setSexo(char novoSexo);
    double getTamanho();
    void setTamanho(double novoTamanho);
    string getDieta();
    void setDieta(string novaDieta);
    string getNomeBatismo();
    void setNomeBatismo(string novoNomeBatismo);
    veterinario getVeterinario();
    void setVeterinario(veterinario novoVeterinario);
    tratador getTratador();
    void setTratador(tratador novoTratador);

    Animais(unsigned int novoId, string novoNomeBatismo);
    ~Animais();
};
8
#endif
