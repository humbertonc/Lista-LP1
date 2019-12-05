#ifndef INVOICE_H
#define INVOICE_H
#include <string>

using namespace std;
class Invoice
{
    public:

        Invoice(int num, int qtd, string desc, double p);

        virtual ~Invoice();

        int getNumero();
        void setNumero(int num);
        string getDesc();
        void setDesc(string des);
        int getQtd();
        void setQtd(int qtd);
        double getPreco();
        void setPreco(double p);

        double getInvoiceAmount(int qtd, double p);

    protected:

    private:
        string descricao;
        int numero, quantidade;
        double preco;
};

#endif
