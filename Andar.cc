//Programação para engenharia II 2015/2
//////////////////////////////////////// marcelo.navarro@acad.pucrs.br */
//////////////////////////////////////// julio.leal@acad.pucrs.br */
//////////////////////////////////////// gabrielgneuwald@gmail.com */


# include <iostream>
# include <vector>
//# include "Elevador.h"
# include "Card.h"
# include <string>

Andar::Andar(void)
{
    string Permicao = Livre;
    
}

Andar::setPermicao(string s)
{
    string Permicao = s;
    
}

Andar::Liberar(Card c)
{
    //TO DO abrir lista de permições 
        Card aux;
        ifstream entrada;
        entrada.open("cardBD.txt", ios::out );
        entrada>>aux;
        /*if(()>=50)
        {
            Tanque = 50;
            cout<<"Capacidade do tanque maxima de 50l"<<endl<<"...enchendo o tanque"<<endl;
        }
        */
    
}
    
}
