#ifndef PAGAMENTO_H
#define PAGAMENTO_H
#include <string>

using namespace std;
class Pagamento
{
    public:
        Pagamento();
        virtual ~Pagamento();
        int getValor();
        void setValor(int v);
        string getNome();
        void setNome(string nome);

    protected:

    private:
        double valorPagamento;
        string nomeDoFuncionario;
};

#endif // PAGAMENTO_H
