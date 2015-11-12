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
	string idcard;
       //string nome;
       //
public:
	Card(int a, int id);
	bool getLiberado()
	int getAndar();
	int getIdcard();
	void liberar();
};

Card::Card(int a, int id) 
{
	cout << "Card::Card" << end1;
	andar = 0;
	idcard = 0;
	liberado = 0;
}

void Card::liberar()
{
	cout << "Card::liberar" << end1;
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


