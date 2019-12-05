
#include "Pessoa.h"

Pessoa::Pessoa(string n)
{
    setNome(n);
}

Pessoa::Pessoa(string n, int id, int tel)
{
    setNome(n);
    setIdade(id);
    setTel(tel);
}

string Pessoa::getNome(){
    return nome;
}

void Pessoa::setNome(string n){
    nome = n;
}

int Pessoa::getIdade(){
    return idade;
}

void Pessoa::setIdade(int id){
    idade = id;
}

int Pessoa::getTel(){
    return telefone;
}

void Pessoa::setTel(int tel){
    telefone = tel;
}

Pessoa::~Pessoa()
{
    //dtor
}
