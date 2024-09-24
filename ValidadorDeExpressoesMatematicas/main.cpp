//Bibliotecas necess?rias
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Pilha.h"

using namespace std;

// Fun??o para validar express?es com par?nteses e colchetes
int validar_expressao(char e[]) {
    Pilha_Construtor(); //Inicializa a pilha chamando seu construtor

    int tamanho = strlen(e); //Atribui o comprimento da string a vari?vel tamanho
    char topoPilha; //Vari?vel para armazenar o topo da pilha

    //Pecorre cada caractere da express?o
    for (int i = 0; i < tamanho; i++) {
        char c = e[i];

        //Verifica se o caractere na pilha ? um colchete ou par?ntese de abertura
        if (c == '[' || c == '(' || c == '{') {
            //Adiciona o caractere na pilha caso seja de abertura
            Pilha_Empilhar(c);
        } else if (c == ']' || c == ')' || c == '}') {
            // Se for um caractere de fechamento e a pilha estiver vazia, a express?o est? errada
            if (Pilha_Vazia()) {
                cout << "Erro: Fechamento sem abertura correspondente" << endl;
                return 0; // Retorna falha
            }

            // Obt?m o topo da pilha e desempilha
            Pilha_Topo(topoPilha);
            Pilha_Desempilhar(topoPilha);

            // Verifica se o fechamento corresponde ? abertura
            if (c == ']' && topoPilha != '[' || c == ')' && topoPilha != '(' || c == '}' && topoPilha != '{') {
                cout << "Express?o invalida" << endl;
                return 0; // Retorna falha se a correspond?ncia estiver incorreta
            }
        }
    }
    // Verifica se ainda restam elementos na pilha, o que indica falta de fechamento
    if (!Pilha_Vazia()) {
        cout << "Erro: Fechamento sem abertura" << endl;
        return 0;
    }else {
        // Se a pilha est? vazia e tudo foi processado corretamente, a express?o ? v?lida
        cout << "Expressao valida!" << endl;
        return 1; //Retorna sucesso
    }


}


int main() {
    char e[50]; // Vari?vel para armazenar a express?o do usu?rio
    char continuar;  // Vari?vel para decidir se o usu?rio quer continuar


    cout << "Inserir expressao\n" << endl;

    // Loop que permite o usu?rio inserir v?rias express?es at? que ele escolha parar
    do {
        cout << "Digite a expressao: " << endl;
        cin >> e;

        validar_expressao(e);
        cout << "Deseja inserir mais uma formula? (S/N)" << endl;
        setbuf(stdin, NULL); //Limpa o buffer de entrada
        cin >> continuar;
    } while (toupper(continuar) != 'N'); //Continua enquanto o usu?rio n?o escolher N

    Pilha_Destrutor(); //Destroi a pilha, liberando recurso

    return 0;
}
