//Programação para engenharia II 2015/2
//////////////////////////////////////// marcelo.navarro@acad.pucrs.br */
//////////////////////////////////////// julio.leal@acad.pucrs.br */
//////////////////////////////////////// gabrielneuwald@gmail.com */


# include <iostream>
# include <string>

using namespace std;

class Card {

private:
	bool liberado; // false (0) ou true (1)
	int andar;
	int idcard;
       //string nome;
public:
	Card(int a, int id);
	bool getLiberado();
	int getAndar();
	int getIdcard();
	void liberar();
};

Card::Card(int a, int id) 
{
	cout << "Card::Card" << endl;
	liberado = 0;
	andar = a;
	idcard = id;
}

void Card::liberar()
{
	cout << "Card::liberar" << endl;
	liberado = true;
}

bool Card::getLiberado()
{
	return liberado;
}

int Card::getAndar()
{
	return andar;
}

int Card::getIdcard()
{
	return idcard;
}

int main()
{
	Card card1(2, 1), card2(5, 8);

	card1.liberar();

	cout << "Cards" << endl;
	cout << "card1: liberado=" << card1.getLiberado() << endl;
	cout << "   andar=" << card1.getAndar() << endl;

	cout << "card2: liberado=" << card2.getLiberado() << endl;
	cout << "   andar=" << card2.getAndar() << endl;

	return 0;
}



