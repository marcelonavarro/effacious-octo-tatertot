//Programação para engenharia II 2015/2
//////////////////////////////////////// marcelo.navarro@acad.pucrs.br */
//////////////////////////////////////// julio.leal@acad.pucrs.br */
//////////////////////////////////////// gabrielgneuwald@gmail.com */

class Elevador {

friend std::ostream& operator<<(std::ostream&,const Elevador&);

private:
    int andar;
    int ocupacao;//Do Unsigned
    int highest;
    int lowest;
    int heaviest;
public:
    Elevador(void);
    Elevador(int,int,int);
    void subir(int n);
    void descer(int n);
    void carregar(int n);
    void esvaziar(int n);
    
};
