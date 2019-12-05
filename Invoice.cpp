#include "Invoice.h"

Invoice::Invoice(int num, int qtd, string desc, double p)
{
    setQtd(qtd);
    setDesc(desc);
    setPreco(p);
    setNumero(num);
}

int Invoice::getNumero(){
    return numero;
}

void Invoice::setNumero(int num){
    numero = num;
}

string Invoice::getDesc(){
    return descricao;
}

void Invoice::setDesc(string des){
    descricao = des;
}

int Invoice::getQtd(){
    return quantidade;
}

void Invoice::setQtd(int qtd){
    if(qtd >= 0){
    quantidade = qtd;
    } else {
    quantidade = 0;
    }
}

double Invoice::getPreco(){
    return preco;
}

void Invoice::setPreco(double p){
    if(p > 0){
    preco = p;
    } else {
    preco = 0;
    }
}

double Invoice::getInvoiceAmount(int qtd, double p)
{
    return qtd*p;
}

Invoice::~Invoice()
{
    //dtor
}
