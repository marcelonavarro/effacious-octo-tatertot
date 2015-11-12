//Programação para engenharia II 2015/2
//////////////////////////////////////// marcelo.navarro@acad.pucrs.br */
//////////////////////////////////////// julio.leal@acad.pucrs.br */
//////////////////////////////////////// gabrielgneuwald@gmail.com */


# include <iostream>
# include <vector>
//# include "Elevador.h"
# include "Card.h"
# include <string>

Class Andar
{
    friend std::ostream& operator<<(std::ostream&,const Andar&);

private:
    vector<Card> Ocupantes;
    string Permicao;

public:
    Andar(void);
    void setPermicao(string s);
    bool Liberar(Card c);
    void Ocupar();
    void Desocupar;

};
