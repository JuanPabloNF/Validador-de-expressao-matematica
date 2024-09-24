<h1>Validador de Expressões com Pilha</h1>
Este projeto implementa um validador de expressões utilizando a estrutura de pilha em C++. O objetivo é validar se as expressões contendo colchetes ([]) e parênteses (()) estão corretamente balanceadas, ou seja, se todas as aberturas possuem seus respectivos fechamentos na ordem correta.

<h2>Funcionalidades</h2>
-Validação de Expressões: O programa valida expressões formadas por colchetes e parênteses, garantindo que cada abertura tenha o fechamento correspondente.
-Estrutura de Pilha: A implementação da pilha é utilizada para armazenar e controlar os caracteres de abertura e verificar se os fechamentos são válidos.
-Interação com o Usuário: O usuário pode inserir várias expressões e receber feedback imediato sobre a validade de cada uma.
-Tratamento de Erros: Se a expressão for inválida (fechamento sem abertura ou abertura sem fechamento), o programa exibe mensagens de erro claras.

<h2>Como Funciona</h2>
1.O usuário insere uma expressão contendo parênteses ou colchetes.
2.O programa verifica se a expressão está correta utilizando uma estrutura de pilha.
-Quando um colchete ou parêntese de abertura é encontrado, ele é empilhado.
-Quando um fechamento é encontrado, o topo da pilha é desempilhado para verificar se corresponde ao fechamento.
3.Se a expressão estiver incorreta (por exemplo, um fechamento sem abertura correspondente ou vice-versa), o programa informa o erro.
4.O programa continua permitindo que o usuário insira expressões até que ele escolha sair.

<h2>Exemplo de uso</h2>
Digite a expressão: ( [ ( ) ] )
Expressão válida!

Digite a expressão: ( [ ( ] ) )
Expressão inválida

<h2>Estrutura do Código</h2>
-main.cpp: Arquivo principal que lida com a entrada do usuário e chama a função de validação.
-Pilha.h: Arquivo de cabeçalho que define as funções da estrutura de pilha.
-Funções principais:
-validar_expressao: Função que verifica se a expressão está correta usando a pilha.
-Pilha_Construtor: Inicializa a pilha.
-Pilha_Empilhar: Adiciona um elemento no topo da pilha.
-Pilha_Desempilhar: Remove o elemento do topo da pilha.
-Pilha_Vazia: Verifica se a pilha está vazia.
-Pilha_Topo: Retorna o elemento do topo da pilha.

<h2>Como Compilar e Executar</h2>
<h3>Requisitos:</h3>
-Compilador C++ (como g++)
-Sistema Linux, Windows ou MacOS

<h2>Compilação:</h2>
Para compilar o projeto, utilize o seguinte comando:
g++ main.cpp -o validador_expressao

<h3>Execução:</h3>
Após a compilação, execute o programa:
./validador_expressao

<h2>Contribuição</h2>
Sinta-se à vontade para contribuir com melhorias no código, novos recursos ou otimizações!
