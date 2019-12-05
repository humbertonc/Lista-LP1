#include <iostream>
#include <string>
#include "Pessoa.h"

using namespace std;

int main()
{
    Pessoa p1 = Pessoa("Joao da Silva", 23, 999847231);
    Pessoa p2 = Pessoa("Maria Azevedo");

    p2.setIdade(37);
    p2.setTel(988761239);

    cout << p1.getNome() << " tem " << p1.getIdade() << " anos de idade, e seu telefone eh: " << p1.getTel() << endl;
    cout << p2.getNome() << " tem " << p2.getIdade() << " anos de idade, e seu telefone eh: " << p2.getTel() << endl;

    return 0;
}
