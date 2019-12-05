#include <iostream>
#include "Invoice.h"

using namespace std;

int main()
{
    Invoice Notebook = Invoice(5213, 100, "Um notebook comum para trabalho", 1500);
    Invoice Calculadora = Invoice(3240, 45, "Calculadora cientifica com diversas funcoes", 99.9);
    Invoice Mouse = Invoice(2809, 12, "Mouse para utilizacao no computador", 70);

    cout << "Foram vendidos " << Notebook.getQtd() << " do produto " << Notebook.getNumero()<< ", cada um custando " << Notebook.getPreco();
    cout << " totalizando a quantia em reais de " << Notebook.getInvoiceAmount(Notebook.getQtd(), Notebook.getPreco()) << endl;
    cout << "Descricao do produto: " << Notebook.getDesc() << "\n" <<endl;

    cout << "Foram vendidos " << Calculadora.getQtd() << " do produto " << Calculadora.getNumero()<< ", cada um custando " << Calculadora.getPreco();
    cout << ", totalizando a quantia em reais de " << Calculadora.getInvoiceAmount(Calculadora.getQtd(), Calculadora.getPreco()) << endl;
    cout << "Descricao do produto: " << Calculadora.getDesc() << "\n" <<endl;

    cout << "Foram vendidos " << Mouse.getQtd() << " do produto " << Mouse.getNumero()<< ", cada um custando " << Mouse.getPreco();
    cout << ", totalizando a quantia em reais de " << Mouse.getInvoiceAmount(Mouse.getQtd(), Mouse.getPreco()) << endl;
    cout << "Descricao do produto: " << Mouse.getDesc() << "\n" <<endl;


}
