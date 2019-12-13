#ifndef CONTROLEDEPAGAMENTOS_H
#define CONTROLEDEPAGAMENTOS_H
#include "Pagamento.h"
#include <string>

using namespace std;
class ControleDePagamentos
{
    public:
        ControleDePagamentos();
        virtual ~ControleDePagamentos();
        double calculaTotalDePagamentos();
        bool existePagamentoParaFuncionario(string nomeFuncionario);
        void setPagamentos(Pagamento p, int pos);
        Pagamento getPagamento(int pos);

    protected:

    private:
        Pagamento pagamentos[100];
};

#endif // CONTROLEDEPAGAMENTOS_H
