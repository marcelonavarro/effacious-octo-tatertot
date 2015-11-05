//Programação para engenharia II 2015/2
//////////////////////////////////////// marcelo.navarro@acad.pucrs.br */
//////////////////////////////////////// julio.leal@acad.pucrs.br */
//////////////////////////////////////// gabrielgneuwald@gmail.com */

class Elevador {

friend std::ostream& operator<<(std::ostream&,const Elevador&);

private:
    int andar;
    unsigned int ocupacao;//garante que não teremos um numero negativo de pessoas no elevador
public:
    Elevador(void);
    void subir(int n);
    void descer(int n);
    void carregar(int n);
    void esvaziar(int n);
};
