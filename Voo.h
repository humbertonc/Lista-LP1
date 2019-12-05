#ifndef VOO_H
#define VOO_H
#include "Data.h"
#include "Horario.h"

class Voo
{
    public:
        Voo(int num, Data dia, Horario hora);
        virtual ~Voo();

        int getNumVoo();
        Data getData();
        Horario getHorario();

        int proximoLivre();
        bool ocupa(int num);
        bool verifica(int num);
        int vagas();

    protected:

    private:
        Data diaVoo;
        Horario horaVoo;
        int numVoo;
        bool lugares[100];
};

#endif // VOO_H
