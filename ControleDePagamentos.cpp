#include "ControleDePagamentos.h"
#include "Pagamento.h"
#include <string>

using namespace std;
ControleDePagamentos::ControleDePagamentos()
{
    //ctor
}

void ControleDePagamentos::setPagamentos(Pagamento p, int pos)
{
    pagamentos[pos] = p;
}

Pagamento ControleDePagamentos::getPagamento(int pos)
{
    return pagamentos[pos];
}

double ControleDePagamentos::calculaTotalDePagamentos()
{
    int i;
    double soma = 0.0;

    for(i = 0; i < 100; i++){
        if(pagamentos[i].getNome()[0] == '\0')
        break;

        soma += pagamentos[i].getValor();

    }

    return soma;
}

bool ControleDePagamentos::existePagamentoParaFuncionario(string nomeFuncionario)
{   int i;
    for(i = 0; i < 100; i++){
        if(pagamentos[i].getNome()[0] == '\0')
        break;

        if(nomeFuncionario == pagamentos[i].getNome())
        return true;
    }

    return false;
}

ControleDePagamentos::~ControleDePagamentos()
{
    //dtor
}
