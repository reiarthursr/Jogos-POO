#include <iostream>//Bibliotecas
#include <string>
#include <ctime>//Para gerar uma semente a partir do tempo
using namespace std;

int main()
{
	bool sair = false;
	string jog1, jog2;
	int vida1 = 20, vida2 = 20;//Vida dos lutadores
	int danoc1 = 0, danoc2 = 0;//Dano causado

	cout << "Digite o nome do jogador 1:" << endl;
	cin >> jog1;//Recebendo nome do jogador 1

	cout << "Digite o nome do jogador 2:" << endl;
	cin >> jog2;//Recebendo nome do jogador 2

	while (sair == false)//Se sair for verdadeiro: o jogo acaba
	{
		cout << "-" << danoc1 << "                           -" << danoc2 << endl;//Imprimindo o dano causado
		cout << " o                             o" << endl;//Imprimindo lutadores
		cout << ".T./                         \\.T. " << endl;
		cout << " ^                             ^" << endl;
		cout << "Atq: 4                        Atq: 4" << endl;//Imprimindo os status dos lutadores
		cout << "Def: 2                        Def: 2" << endl;
		cout << jog1 << "                         " << jog2 << endl;//Imprimindo nome dos lutadores
		cout << "Vida: " << vida1 << "                    " << "Vida: " << vida2 << endl;//Imprimindo vida dos lutadores
		system("pause");//Apertar qual quer tecla para continuar
		int dado6;//Dado de 6 lados
		srand((int)time(0));//Gerando semente aleatória 
		dado6 = rand() % 6 + 1;//Gerando número aleatório
		danoc1 = dado6 - 4;//Calculando dano causado ao lutador 1
		if (danoc1 < 0)//Se o dano causado for menos do que 0:
		{
			danoc1 = 0;//O dano causado será 0
		}
		vida1 = vida1 - danoc1;//Causando dano ao lutador 1
		
		dado6 = rand() % 6 + 1;//Gerando número aleatório
		danoc2 = dado6 - 4;//Calculando dano causado ao lutador 2
		if (danoc2 < 0)//Se o dano causado for menos do que 0:
		{
			danoc2 = 0;//O dano causado será 0
		}
		vida2 = vida2 - danoc2;//Causando dano ao lutador 2

		system("cls");//Limpando a tela

		if (vida1 <= 0 || vida2 <= 0)//Se um dos lutadores ficar com vida menor ou igual a 0:
		{
			sair = true;//O jogo acabará
		}
	}

	if (vida1 < vida2)//Se vida do jogador 2 for menos do que a do jogador 1:
	{
		cout << jog2 << " Venceu!" << endl;//Jogador 2 vence
	}
	else if (vida2 < vida1)//Se vida do jogador 1 for menos do que a do jogador 2:
	{
		cout << jog1 << " Venceu!" << endl;//Jogador 1 vence
	}
	else//Se a vida dos dois lutadores forem iguais
	{
		cout << "Empate!" << endl;//Empate
	}
	return 0;//Fechar jogo
}