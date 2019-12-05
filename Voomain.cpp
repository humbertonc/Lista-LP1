#include <iostream>
#include <string>
#include "Voo.h"
#include "Data.h"
#include "Horario.h"

using namespace std;

int main()
{
    int i;

    Horario h1 = Horario(23,50,0);
    Horario h2 = Horario(12,43,11);
    Horario h3 = Horario(8,2,12);

    Data d1 = Data(5,12,2019);
    Data d2 = Data(3,4,2015);
    Data d3 = Data(12,1,2008);

    Voo v1 = Voo(7523, d1, h1);
    Voo v2 = Voo(4328, d2, h2);
    Voo v3 = Voo(1078, d3, h3);

    for(i = 1; i <= 10; i++){
        v1.ocupa(i);
    }

    cout << "O voo " << v1.getNumVoo() << " possui " << v1.vagas() << " locais livres. O proximo local vago eh o " << v1.proximoLivre() << endl;

    return 0;
}
