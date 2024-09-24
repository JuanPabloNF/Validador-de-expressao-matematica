<h1>Validador de Expressões com Pilha</h1>
<p>Este projeto implementa um validador de expressões utilizando a estrutura de pilha em C++. O objetivo é validar se as expressões contendo colchetes ([]) e parênteses (()) estão corretamente balanceadas, ou seja, se todas as aberturas possuem seus respectivos fechamentos na ordem correta.</p>

<h2>Funcionalidades</h2>
<ul>
  <li><b>Validação de Expressões:</b> O programa valida expressões formadas por colchetes e parênteses, garantindo que cada abertura tenha o fechamento correspondente.</li>
  <li><b>Estrutura de Pilha:</b> A implementação da pilha é utilizada para armazenar e controlar os caracteres de abertura e verificar se os fechamentos são válidos.</li>
  <li><b>Interação com o Usuário:</b> O usuário pode inserir várias expressões e receber feedback imediato sobre a validade de cada uma.</li>
  <li><b>Tratamento de Erros:</b> Se a expressão for inválida (fechamento sem abertura ou abertura sem fechamento), o programa exibe mensagens de erro claras.</li>
</ul>

<h2>Como Funciona</h2>
<ol>
  <li>O usuário insere uma expressão contendo parênteses ou colchetes.</li>
  <li>O programa verifica se a expressão está correta utilizando uma estrutura de pilha.</li>
  <ul>
    <li>Quando um colchete ou parêntese de abertura é encontrado, ele é empilhado.</li>
    <li>Quando um fechamento é encontrado, o topo da pilha é desempilhado para verificar se corresponde ao fechamento.</li>
  </ul>
  <li>Se a expressão estiver incorreta (por exemplo, um fechamento sem abertura correspondente ou vice-versa), o programa informa o erro.</li>
  <li>O programa continua permitindo que o usuário insira expressões até que ele escolha sair.</li>
</ol>

<h2>Exemplo de uso</h2>
<pre>
Digite a expressão: ( [ ( ) ] )
Expressão válida!

Digite a expressão: ( [ ( ] ) )
Expressão inválida
</pre>

<h2>Estrutura do Código</h2>
<ul>
  <li><b>main.cpp:</b> Arquivo principal que lida com a entrada do usuário e chama a função de validação.</li>
  <li><b>Pilha.h:</b> Arquivo de cabeçalho que define as funções da estrutura de pilha.</li>
</ul>
<p>Funções principais:</p>
<ul>
  <li><b>validar_expressao:</b> Função que verifica se a expressão está correta usando a pilha.</li>
  <li><b>Pilha_Construtor:</b> Inicializa a pilha.</li>
  <li><b>Pilha_Empilhar:</b> Adiciona um elemento no topo da pilha.</li>
  <li><b>Pilha_Desempilhar:</b> Remove o elemento do topo da pilha.</li>
  <li><b>Pilha_Vazia:</b> Verifica se a pilha está vazia.</li>
  <li><b>Pilha_Topo:</b> Retorna o elemento do topo da pilha.</li>
</ul>

<h2>Como Compilar e Executar</h2>
<h3>Requisitos:</h3>
<ul>
  <li>Compilador C++ (como g++)</li>
  <li>Sistema Linux, Windows ou MacOS</li>
</ul>

<h3>Compilação:</h3>
<p>Para compilar o projeto, utilize o seguinte comando:</p>
<pre>g++ main.cpp -o validador_expressao</pre>

<h3>Execução:</h3>
<p>Após a compilação, execute o programa:</p>
<pre>./validador_expressao</pre>

<h2>Contribuição</h2>
<p>Sinta-se à vontade para contribuir com melhorias no código, novos recursos ou otimizações!</p>
