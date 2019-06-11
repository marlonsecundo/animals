#include "Animais.h"

Animais::Animais(unsigned int novoId, string novoNomeBatismo)
{
    this -> id = novoId;
    this -> nomeBatismo = novoNomeBatismo;
}

Animais::~Animais()
{
}

int Animais::getId(){
    return this -> id;
}
void Animais::setId(unsigned int novoId){
    this -> id = novoId;
}
string Animais::getClasse(){
    return this -> classe;
}
void Animais::setClasse(string novaClasse){
    this -> classe = novaClasse;
}
string Animais::getNomeCientifico(){
    return this -> nomeCientifico;
}
void Animais::setNomeCientifico(string novoNomeCientifico){
    this -> nomeCientifico = novoNomeCientifico;
}
char Animais::getSexo(){
    return this -> sexo;
}
void Animais::setSexo(char novoSexo){
    this -> sexo = novoSexo;
}
double Animais::getTamanho(){
    return this -> tamanho;
}
void Animais::setTamanho(double novoTamanho){
    this -> tamanho = novoTamanho;
}
string Animais::getDieta(){
    return this -> dieta;
}
void Animais::setDieta(string novaDieta){
    this -> dieta = novaDieta;
}
string Animais::getNomeBatismo(){
    return this -> nomeBatismo;
}
void Animais::setNomeBatismo(string novoNomeBatismo){
    this -> nomeBatismo = novoNomeBatismo;
}
veterinario Animais::getVeterinario(){
    return this -> Veterinario;
}
void Animais::setVeterinario(veterinario novoVeterinario){
    this -> Veterinario = novoVeterinario;
}
tratador Animais::getTratador(){
    return this -> Tratador;
}
void Animais::setTratador(tratador novoTratador){
    this -> Tratador = novoTratador;
}
