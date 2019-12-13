#include "Pagamento.h"

Pagamento::Pagamento()
{
    //ctor
}

int Pagamento::getValor()
{
    return valorPagamento;
}

void Pagamento::setValor(int v)
{
    valorPagamento = v;
}

string Pagamento::getNome()
{
    return nomeDoFuncionario;
}

void Pagamento::setNome(string nome)
{
    nomeDoFuncionario = nome;
}

Pagamento::~Pagamento()
{
    //dtor
}
