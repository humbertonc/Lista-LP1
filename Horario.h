#ifndef HORARIO_H
#define HORARIO_H


class Horario
{
    public:
        Horario();
        Horario(int h, int m, int s);
        virtual ~Horario();

        int getHora();
        int getMin();
        int getSeg();

        void setHora(int h);
        void setMin(int m);
        void setSeg(int s);

        void setHorario(int h, int m, int s);

        void avancarHorario();

    protected:

    private:
        int segundo, minuto, hora;
};

#endif // HORARIO_H
