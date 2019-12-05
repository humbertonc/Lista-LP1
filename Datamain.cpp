#include <iostream>
#include <string>
#include "Data.h"

using namespace std;

int main()
{
    Data d1 = Data(25,12,2019);
    Data d2 = Data(50,42,2019);
    Data d3 = Data();
    Data d4 = Data(30,11,2016);

    if(d1.compara(d4) == 1){
    cout << "d1 maior que d4" << endl;
    }else if(!d1.compara(d4)){
    cout << "d1 eh a mesma data que d4"<<endl;
    }else {
    cout << "d4 maior que d1" << endl;
    }

    if(d4.isBissexto())
    cout << "d4 eh em um ano bissexto" << endl;
    else
    cout << "d4 nao eh um ano bissexto" << endl;

    cout << "O mes de d1 eh " << d1.getMesExtenso() << endl;

    cout <<"d2: "<< d2.getDia() << "/" << d2.getMes() << "/" << d2.getAno() << endl;
    cout <<"d3: "<< d3.getDia() << "/" << d3.getMes() << "/" << d3.getAno() << endl;

    return 0;
}
