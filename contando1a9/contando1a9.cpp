// =========================================================================
// 1. DECLARAÇÃO DE VARIÁVEIS (SETAR ONDE CADA FIO ESTÁ)
// Criar variáveis do tipo int para mapear os pinos digitais do Arduino.
// =========================================================================

int segA = 9;   // Variável para o segmento do topo
int segB = 8;   // Variável para a lateral direita superior
int segC = 4;   // Variável para a lateral direita inferior
int segD = 6;   // Variável para a base
int segE = 7;   // Variável para a lateral esquerda inferior
int segF = 11;  // Variável para a lateral esquerda superior
int segG = 12;  // Variável para o traço central
int segDP = 3;  // Variável para o ponto decimal (Decimal Point)

// =========================================================================
// 2. MATRIZ/ARRAY (TABELA DE ESTADOS)
// Criar uma variável do tipo byte (matriz bidimensional [10 linhas][7 colunas])
// Cada linha guarda o "estado" (High ou Low) que vamos setar nos pinos.
// =========================================================================

byte numeros[10][7] = {
//   A B C D E F G  <- Colunas (Índices 0 a 6)
  {1,1,1,1,1,1,0}, // Linha [0]: Número 0 (Seta tudo como 1, exceto G)
  {0,1,1,0,0,0,0}, // Linha [1]: Número 1
  {1,1,0,1,1,0,1}, // Linha [2]: Número 2
  {1,1,1,1,0,0,1}, // Linha [3]: Número 3
  {0,1,1,0,0,1,1}, // Linha [4]: Número 4
  {1,0,1,1,0,1,1}, // Linha [5]: Número 5
  {1,0,1,1,1,1,1}, // Linha [6]: Número 6
  {1,1,1,0,0,0,0}, // Linha [7]: Número 7
  {1,1,1,1,1,1,1}, // Linha [8]: Número 8
  {1,1,1,1,0,1,1}  // Linha [9]: Número 9
};

// =========================================================================
// 3. VOID SETUP (CONFIGURAR O HARDWARE)
// Aqui vamos setar o comportamento dos pinos como OUTPUT (Saída de energia).
// =========================================================================

void setup() {
  // O comando pinMode ajusta o pino para enviar sinal
  pinMode(segA, OUTPUT); pinMode(segB, OUTPUT); 
  pinMode(segC, OUTPUT); pinMode(segD, OUTPUT); 
  pinMode(segE, OUTPUT); pinMode(segF, OUTPUT); 
  pinMode(segG, OUTPUT); pinMode(segDP, OUTPUT);
}

// =========================================================================
// 4. FUNÇÃO CUSTOMIZADA (LÓGICA DE EXECUÇÃO)
// Criar uma função para automatizar o acionamento dos pinos.
// =========================================================================

void mostrarNumero(int num) {
  // O comando digitalWrite vai setar o estado do pino (1 ou 0)
  // Ele busca o valor dentro da matriz usando o índice [num] e a coluna [0 a 6]
  
  digitalWrite(segA, numeros[num][0]); // Seta pino A com o valor da coluna 0
  digitalWrite(segB, numeros[num][1]); // Seta pino B com o valor da coluna 1
  digitalWrite(segC, numeros[num][2]); // ... e assim por diante
  digitalWrite(segD, numeros[num][3]);
  digitalWrite(segE, numeros[num][4]);
  digitalWrite(segF, numeros[num][5]);
  digitalWrite(segG, numeros[num][6]);
}

// =========================================================================
// 5. VOID LOOP (EXECUTAR O CICLO)
// Criar uma estrutura de repetição para iterar sobre os números.
// =========================================================================

void loop() {
  // O 'for' vai incrementar a variável 'i' de 0 até 9
  for (int i = 0; i <= 9; i++) { 
    mostrarNumero(i);            // Passa o valor atual de 'i' para a função
    delay(1000);                 // Seta um tempo de espera de 1 segundo
  }
}