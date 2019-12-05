#include "Data.h"
#include <string>
Data::Data()
{

}

Data::Data(int d, int m, int a){
    if(d >= 1 && d <= 31){
        setDia(d);
    }else{
        setDia(1);
    }
    if(m >= 1 && m <= 12){
        setMes(m);
    }else{
        setMes(1);
    }
    setAno(a);
}

int Data::compara(Data d){
    if(ano == d.ano){

        if(mes == d.mes){

            if(dia == d.dia){
                return 0;
            }else if(dia > d.dia){
                return 1;
            }else{
                return -1;
            }

        }else if(mes>d.mes){
            return 1;
        }else{
            return -1;
        }

    }else if(ano>d.ano){
        return 1;
    }else{
        return -1;
    }

}

string Data::getMesExtenso()
{
    switch(mes){
    case 1:
        return "Janeiro";
        break;
    case 2:
        return "Fevereiro";
        break;
    case 3:
        return "Marco";
        break;
    case 4:
        return "Abril";
        break;
    case 5:
        return "Maio";
        break;
    case 6:
        return "Junho";
        break;
    case 7:
        return "Julho";
        break;
    case 8:
        return "Agosto";
        break;
    case 9:
        return "Setembro";
        break;
    case 10:
        return "Outubro";
        break;
    case 11:
        return "Novembro";
        break;
    case 12:
        return "Dezembro";
        break;
    default:
        return "Mes invalido";
    }
}

bool Data::isBissexto()
{
    if(ano % 4 == 0){
        return true;
    }else{
        return false;
    }
}

void Data::setDia(int d){
    dia = d;
}
int Data::getDia(){
    return dia;
}
void Data::setMes(int m){
    mes = m;
}
int Data::getMes(){
    return mes;
}
void Data::setAno(int a){
    ano = a;
}
int Data::getAno(){
    return ano;
}

Data::~Data()
{
    //dtor
}
