#include <iostream>
#include <string>
#include "Horario.h"

using namespace std;

int main()
{
    Horario h1 = Horario(23,59,59);
    Horario h2 = Horario(12,43,11);
    Horario h3 = Horario(12,65,12);

    cout << h1.getHora() << ":" << h1.getMin() << ":" << h1.getSeg() << endl;
    h1.avancarHorario();
    cout << h1.getHora() << ":" << h1.getMin() << ":" << h1.getSeg() << endl;

    cout << h2.getHora() << ":" << h2.getMin() << ":" << h2.getSeg() << endl;

    cout << h3.getHora() << ":" << h3.getMin() << ":" << h3.getSeg() << endl;
    h3.setHorario(12,55,12);
    cout << h3.getHora() << ":" << h3.getMin() << ":" << h3.getSeg() << endl;

    return 0;
}
