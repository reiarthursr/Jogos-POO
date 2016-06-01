#include <iostream>//Adicionando biblioteca
#include <ctime>//Adicionando outra biblioteca
using namespace std;//Para não recisar escrever "std"
//Linha vazia para ajudar na organização
void imprimir_espacos(int rodada);//Declarando a função que imprime espaços
int main()//Principal
{//Inicio do principal
	int total_espacos = 50;//Quantidade de espaços até a chegada
	int espacos_a = 0;//Quantidade de espaços que o carrinho A andou
	int espacos_b = 0;//Quantidade de espaços que o carrinho B andou
	while (espacos_a < total_espacos && espacos_b < total_espacos)//Sair do laço ao chegar na chegada (Fim da corrida)
	{//Inicio do laço da corrida
		system("cls");//Limpando a tela
		cout << "Jogo de corrida" << endl;//Imprimindo "Jogo de corrida" para apresentar o jogo
		cout << "                                                Chegada:" << endl;//Imprimindo a chegada
		//linha vazia para melhor compreenção ao dividir as informações (organização)
		srand((int)time(0));//Gerando semente a partir do tempo
		//Carro A//Comentando o bloco de codigos do carro A para melhor compreenção
		espacos_a = rand() % 3 + 1 + espacos_a;//Gerando número aleatório de 1 a 3 para andar o carro A nesta quantidade em espaços
		imprimir_espacos(espacos_a);//Imprimindo espaços
		cout << "  _  " << endl;//Imprimindo parte do carro A
		imprimir_espacos(espacos_a);//Imprimindo espaços
		cout << "-o-o>" << endl;//Imprimindo outra parte do carro A
		//Carro B//Comentando o bloco de codigos do carro B para melhor compreenção
		espacos_b = rand() % 3 + 1 + espacos_b;//Gerando número aleatório de 1 a 3 para andar o carro B nesta quantidade em espaços
		imprimir_espacos(espacos_b);//Imprimindo espaços
		cout << "  _  " << endl;//Imprimindo parte do carro B
		imprimir_espacos(espacos_b);//Imprimindo espaços
		cout << "-o-o>" << endl;//Imprimindo outra parte do carro B
	}//Fim do laço da corrida
	if (espacos_a > espacos_b) cout << "Carro A venceu a corrida!" << endl;//Imprimir na tela "Carro A venceu a corrida!" se o carro A vencer a corrida
	else if (espacos_b > espacos_a) cout << "Carro B venceu a corrida!" << endl;//Imprimir na tela "Carro B venceu a corrida!" se o carro B vencer a corrida
	else cout << "Empate!" << endl;//Imprimir na tela "Empate" se nenhum dos carros vencer
	return 0;//Fechar o jogo
}//Fim do principal
//Outra linha vazia para melhor compreenção ao dividir as informações (organização)
void imprimir_espacos(int rodada)//Função que imprime os espaços
{//Inicio da função que imprime os espaços
	for (int qnt_atual = 0; qnt_atual < rodada; qnt_atual++)//Imprimir os espaços
	{//inicio do laço que imprime os espaços
		cout << " ";//Imprimindo os espaços
	}//Fim do laço que imprime os espaços
}//Fim da função que imprime os espaços
//Linha vazia por falta de organização do aluno