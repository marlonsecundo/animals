#include "funcionario.h"
using namespace std;

void funcionario::setId(int novoId){
    this->id = novoId;
}
void funcionario::setNome(string novoNome){
    this->nome = novoNome;
}
void funcionario::setCPF(string novoCPF){
    this->cpf = novoCPF;
}
void funcionario::setIdade(int novoIdade){
    this->idade = novoIdade;
}
void funcionario::setSangue(string novoSangue){
    this->tipo_sanguineo = novoSangue;
}
void funcionario::setRH(char novoRH){
    this->fator_rh = novoRH;
}
void funcionario::setEspecialidade(string novoEspecialidade){
    this->especialidade = novoEspecialidade;
}
int funcionario::getId(){
    return this->id;
}
string funcionario::getNome(){
    return this->nome;
}
string funcionario::getCPF(){
    return this->cpf;
}
int funcionario::getIdade(){
    return this->idade;
}
string funcionario::getSangue(){
    return this->tipo_sanguineo;
}
char funcionario::getRH(){
    return this->fator_rh;
}
string funcionario::getEspecialidade(){
    return this->especialidade;
}
