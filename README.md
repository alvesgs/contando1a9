# Contando 1 a 9 - Display de 7 Segmentos

<img width="1395" height="753" alt="image-1 (1)" src="https://github.com/user-attachments/assets/1a070cb8-fa78-4864-8613-7d5b5c74c70e" />


Um projeto Arduino que controla um **display de 7 segmentos** para contar e exibir números de 0 a 9 sequencialmente.

## 📋 Descrição

Este programa utiliza uma matriz de dados para mapear quais segmentos do display devem ser acionados para formar cada número. O microcontrolador Arduino envia sinais digitais aos pinos correspondentes, acendendo e apagando os LEDs do display em sequência.

## 🛠️ Componentes Necessários

- **1x Arduino** (Uno, Nano, Mega ou compatível)
- **1x Display de 7 Segmentos** (ânodo comum ou cátodo comum)
- **7x Resistores** (220Ω - 330Ω, dependendo do tipo de display)
- **1x Fios jumper** (para conexão)
- **1x Protoboard** (opcional, para facilitar as conexões)
- **1x Fonte de alimentação** (USB ou externa)

## 📍 Mapeamento de Pinos

Os segmentos do display estão conectados aos seguintes pinos do Arduino:

| Segmento | Pino Arduino | Descrição |
|----------|-------------|-----------|
| A | 9 | Topo |
| B | 8 | Lateral direita superior |
| C | 4 | Lateral direita inferior |
| D | 6 | Base |
| E | 7 | Lateral esquerda inferior |
| F | 11 | Lateral esquerda superior |
| G | 12 | Traço central |
| DP | 3 | Ponto decimal (não utilizado neste projeto) |

## 🎯 Funcionamento

### 1. **Declaração de Variáveis**
Define as variáveis que armazenam o número do pino Arduino para cada segmento.

### 2. **Matriz de Estados**
Uma matriz bidimensional de 10 linhas (números 0-9) e 7 colunas (segmentos A-G) que define quais segmentos devem acender para cada número:
- `1` = Segmento aceso
- `0` = Segmento apagado

### 3. **Setup()**
Configura todos os pinos como OUTPUT (saída de energia).

### 4. **Função mostrarNumero()**
Recebe um número (0-9) e ativa os segmentos correspondentes consultando a matriz de estados.

### 5. **Loop()**
Executa continuamente, exibindo os números de 0 a 9 com um intervalo de 1 segundo entre cada número.

## 🚀 Como Usar

1. **Conecte os componentes** conforme o mapeamento de pinos acima
2. **Abra o arquivo** `contando1a9.cpp` na IDE Arduino
3. **Verifique o compilador** (Sketch → Verificar)
4. **Faça o upload** do código para o Arduino (Sketch → Upload)
5. **Observe** o display contando de 0 a 9 repetidamente

## 🔄 Sequência de Funcionamento

```
0 (1s) → 1 (1s) → 2 (1s) → 3 (1s) → 4 (1s) → 
5 (1s) → 6 (1s) → 7 (1s) → 8 (1s) → 9 (1s) → 
[Retorna ao 0 e repete indefinidamente]
```

## ⚙️ Possíveis Modificações

- **Alterar velocidade**: Modifique o valor em `delay(1000)` (em milissegundos)
- **Mudar ordem**: Altere o loop para contar em ordem diferente
- **Adicionar botões**: Implemente controle manual com botões
- **Múltiplos displays**: Expanda para usar mais de um display

## 📝 Notas Importantes

- Certifique-se de usar resistores apropriados para evitar danificar o Arduino
- Se o display tiver cátodo comum, inverta os valores na matriz (0 → 1, 1 → 0)
- O pino DP (Decimal Point) pode ser utilizado para adicionar funcionalidades adicionais

## 📄 Licença

Este projeto é de código aberto e pode ser modificado livremente para fins educacionais.

---

**Desenvolvido com 💡 Arduino**
