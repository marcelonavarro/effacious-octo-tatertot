//Programação para engenharia II 2015/2
//////////////////////////////////////// marcelo.navarro@acad.pucrs.br */
//////////////////////////////////////// julio.leal@acad.pucrs.br */
//////////////////////////////////////// gabrielgneuwald@gmail.com */


# include <iostream>


using namespace std;

class Elevador {

private:
    int andar;
    unsigned int ocupacao;//garante que não teremos um numero negativo de pessoas no elevador
public:
    Elevador(void);
    void subir(int n);
    void descer(int n);
    //void mover(int n);
    void entrar(int n);
    void sair(int n);
};

Elevador::Elevador(void)
{
    andar = 0;
    ocupacao = 0;
}

int main (void)
{
    Elevador Aufzug;

    cout<<"teste"<<endl;
    return 0;

}

