#include <iostream>
#include<string>
#include "Pagamento.h"
#include "ControleDePagamentos.h"

using namespace std;

int main()
{
    ControleDePagamentos controle = ControleDePagamentos();

    Pagamento p1 = Pagamento();
    Pagamento p2 = Pagamento();
    Pagamento p3 = Pagamento();

    p1.setValor(1200);
    p1.setNome("Joao Assis");

    p2.setValor(8300);
    p2.setNome("Jose Machado");

    p3.setValor(3100);
    p3.setNome("Flavia Marinho");

    controle.setPagamentos(p1, 0);
    controle.setPagamentos(p2, 1);
    controle.setPagamentos(p3, 2);

    cout << controle.calculaTotalDePagamentos() << endl;

    if(controle.existePagamentoParaFuncionario("Jose Machado"))
    cout << "Jose Machado trabalha na empresa." << endl;

    return 0;

}
