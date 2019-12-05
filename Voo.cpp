#include "Voo.h"

Voo::Voo(int num, Data dia, Horario hora)
{
    int i;

    numVoo = num;
    diaVoo = dia;
    horaVoo = hora;

    for(i = 0; i < 100; i++){
        lugares[i] = true;
    }
}

int Voo::getNumVoo()
{
    return numVoo;
}

Data Voo::getData()
{
    return diaVoo;
}

Horario Voo::getHorario()
{
    return horaVoo;
}

int Voo::proximoLivre()
{
    int i;

    for(i = 1; i <= 100; i ++){
        if(verifica(i))
        break;
    }
    return i;
}

int Voo::vagas()
{
    int i, soma = 0;

    for(i = 1; i <= 100; i ++){
        if(verifica(i))
        soma++;
    }
    return soma;
}

bool Voo::ocupa(int num)
{
    if(verifica(num)){
        lugares[num - 1] = false;
        return true;
    }else
    return false;
}

bool Voo::verifica(int num)
{
    return lugares[num - 1];
}

Voo::~Voo()
{
    //dtor
}
