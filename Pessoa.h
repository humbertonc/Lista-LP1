
#ifndef PESSOA_H
#define PESSOA_H
#include <string>

using namespace std;

class Pessoa
{
    public:
        Pessoa(string n);
        Pessoa(string n, int id, int tel);
        virtual ~Pessoa();

        string getNome();
        void setNome(string n);
        int getIdade();
        void setIdade(int id);
        int getTel();
        void setTel(int tel);

    protected:

    private:
        string nome;
        int idade, telefone;
};

#endif // PESSOA_H
