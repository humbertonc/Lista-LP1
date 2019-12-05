#include "Horario.h"

Horario::Horario()
{
    //ctor
}

Horario::Horario(int h, int m, int s)
{
    if((s >= 0 && s < 60) && (m >= 0 && m < 60) && (h >= 0 && h < 24)){
        segundo = s;
        minuto = m;
        hora = h;
    }else{
        segundo = 0;
        minuto = 0;
        hora = 0;
    }
}

void Horario::setHorario(int h, int m, int s)
{
    segundo = s;
    minuto = m;
    hora = h;
}

void Horario::avancarHorario()
{
    if(segundo == 59){

        segundo = 0;

        if(minuto == 59){

            minuto = 0;

            if(hora == 23){

                hora = 0;

            }
        }else{
            minuto++;
        }
    }else{
        segundo++;
    }
}

int Horario::getHora()
{
    return hora;
}

int Horario::getMin()
{
    return minuto;
}

int Horario::getSeg()
{
    return segundo;
}

void Horario::setHora(int h)
{
    hora = h;
}

void Horario::setMin(int m)
{
    minuto = m;
}

void Horario::setSeg(int s)
{
    segundo = s;
}


Horario::~Horario()
{
    //dtor
}
