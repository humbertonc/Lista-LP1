#ifndef DATA_H
#define DATA_H
#include <string>

using namespace std;
class Data
{
    private:
    int dia, mes, ano;

    public:

    Data();
    Data(int d, int m, int a);

    int getDia();
    void setDia(int d);

    int getMes();
    void setMes(int d);

    int getAno();
    void setAno(int d);

    int compara(Data d);
    string getMesExtenso();
    bool isBissexto();

    virtual ~Data();

};

#endif // DATA_H
