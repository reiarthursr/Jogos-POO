#include <iostream>//Adicionando biblioteca
#include <ctime>//Adicionando outra biblioteca
using namespace std;//Para n�o recisar escrever "std"
//Linha vazia para ajudar na organiza��o
void imprimir_espacos(int rodada);//Declarando a fun��o que imprime espa�os
int main()//Principal
{//Inicio do principal
	int total_espacos = 50;//Quantidade de espa�os at� a chegada
	int espacos_a = 0;//Quantidade de espa�os que o carrinho A andou
	int espacos_b = 0;//Quantidade de espa�os que o carrinho B andou
	while (espacos_a < total_espacos && espacos_b < total_espacos)//Sair do la�o ao chegar na chegada (Fim da corrida)
	{//Inicio do la�o da corrida
		system("cls");//Limpando a tela
		cout << "Jogo de corrida" << endl;//Imprimindo "Jogo de corrida" para apresentar o jogo
		cout << "                                                Chegada:" << endl;//Imprimindo a chegada
		//linha vazia para melhor compreen��o ao dividir as informa��es (organiza��o)
		srand((int)time(0));//Gerando semente a partir do tempo
		//Carro A//Comentando o bloco de codigos do carro A para melhor compreen��o
		espacos_a = rand() % 3 + 1 + espacos_a;//Gerando n�mero aleat�rio de 1 a 3 para andar o carro A nesta quantidade em espa�os
		imprimir_espacos(espacos_a);//Imprimindo espa�os
		cout << "  _  " << endl;//Imprimindo parte do carro A
		imprimir_espacos(espacos_a);//Imprimindo espa�os
		cout << "-o-o>" << endl;//Imprimindo outra parte do carro A
		//Carro B//Comentando o bloco de codigos do carro B para melhor compreen��o
		espacos_b = rand() % 3 + 1 + espacos_b;//Gerando n�mero aleat�rio de 1 a 3 para andar o carro B nesta quantidade em espa�os
		imprimir_espacos(espacos_b);//Imprimindo espa�os
		cout << "  _  " << endl;//Imprimindo parte do carro B
		imprimir_espacos(espacos_b);//Imprimindo espa�os
		cout << "-o-o>" << endl;//Imprimindo outra parte do carro B
	}//Fim do la�o da corrida
	if (espacos_a > espacos_b) cout << "Carro A venceu a corrida!" << endl;//Imprimir na tela "Carro A venceu a corrida!" se o carro A vencer a corrida
	else if (espacos_b > espacos_a) cout << "Carro B venceu a corrida!" << endl;//Imprimir na tela "Carro B venceu a corrida!" se o carro B vencer a corrida
	else cout << "Empate!" << endl;//Imprimir na tela "Empate" se nenhum dos carros vencer
	return 0;//Fechar o jogo
}//Fim do principal
//Outra linha vazia para melhor compreen��o ao dividir as informa��es (organiza��o)
void imprimir_espacos(int rodada)//Fun��o que imprime os espa�os
{//Inicio da fun��o que imprime os espa�os
	for (int qnt_atual = 0; qnt_atual < rodada; qnt_atual++)//Imprimir os espa�os
	{//inicio do la�o que imprime os espa�os
		cout << " ";//Imprimindo os espa�os
	}//Fim do la�o que imprime os espa�os
}//Fim da fun��o que imprime os espa�os
//Linha vazia por falta de organiza��o do aluno