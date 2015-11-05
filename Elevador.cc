//Programação para engenharia II 2015/2
//////////////////////////////////////// marcelo.navarro@acad.pucrs.br */
//////////////////////////////////////// julio.leal@acad.pucrs.br */
//////////////////////////////////////// gabrielgneuwald@gmail.com */


# include <iostream>
# include "Elevador.h"

using namespace std;


Elevador::Elevador(void)
{
    andar = 0;
    ocupacao = 0;
    highest = 5;
    lowest = 0;
    heaviest = 1;
}

void Elevador::subir(int n) {
    andar+= n;
    if(andar+n>highest)
       andar=highest;
}

void Elevador::descer(int n) {
    andar-= n;
    if(andar-n<lowest)
       andar=lowest;
}

void Elevador::carregar(int n) {
    if(ocupacao+n>heaviest)
       cout<<"Perigo elevador superlotado"<<endl;
    else   ocupacao+= n;
}
void Elevador::esvaziar(int n) {
    if(ocupacao-n<0)
       ocupacao=0;
    ocupacao-= n;
}

std::ostream& operator<<(std::ostream& s,const Elevador& e)
{
    s<<"[ Posição = "<<e.andar<<" Ocupação = "<<e.ocupacao<<"]"<<endl;

    return s;
}

///////////////////////////////////////////////////////////////////Teste

int main (void)
{
    Elevador Aufzug;

    Aufzug.carregar(2);
    cout<<Aufzug<<endl;
    Aufzug.subir(10);
    cout<<Aufzug<<endl;
    Aufzug.esvaziar(1);
    cout<<Aufzug<<endl;
    Aufzug.descer(50);
    cout<<Aufzug<<endl;
    return 0;

}

