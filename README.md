# Estruturada

Repositório dedicado à disciplina de **Programação Estruturada**. Aqui estão organizados códigos relacionados a exercícios, listas de atividades e exemplos usados em aula.

---

## Estrutura do Repositório

O repositório está organizado em duas pastas principais:

1. **`codigos-exercicios`**:
   - Contém códigos relacionados a exercícios e listas de atividades.
   - Cada código resolve um problema específico ou implementa uma funcionalidade.

2. **`codigos-aula`** (a ser criada):
   - Contém códigos usados em aulas ou exemplos didáticos.
   - Será organizada conforme os tópicos abordados em sala de aula.

---

## Códigos na Pasta `codigos-exercicios`

Aqui estão os códigos presentes na pasta `codigos-exercicios` e suas funcionalidades, na ordem em que estão organizados:

---

### 1. **`alturaIdadePeso.c`**
   - **Descrição**: Recebe dados de 5 pessoas (idade, peso e altura) e calcula:
     1. A média das idades.
     2. A quantidade de pessoas com peso maior que 80 kg.
     3. A quantidade de pessoas com altura inferior a 1,50 m.
     4. A quantidade de pessoas com idade entre 10 e 30 anos e altura superior a 1,90 m.
   - **Funcionalidades**:
     - Usa loops e condicionais para processar os dados.
     - Exibe os resultados finais.
   - **Como compilar e executar**:
     ```bash
     gcc alturaIdadePeso.c -o alturaIdadePeso
     ./alturaIdadePeso
     ```

---

### 2. **`ConverterHorario.c`**
   - **Descrição**: Converte um horário no formato `HH.MM` para minutos e segundos totais.
   - **Funcionalidades**:
     - Verifica se o horário e os minutos são válidos.
     - Realiza conversões matemáticas para minutos e segundos.
   - **Como compilar e executar**:
     ```bash
     gcc ConverterHorario.c -o ConverterHorario
     ./ConverterHorario
     ```

---

### 3. **`fatorial.c`**
   - **Descrição**: Calcula o fatorial de um número fornecido pelo usuário.
   - **Funcionalidades**:
     - Usa um array para armazenar dígitos do fatorial, permitindo cálculos para números grandes (até 100!).
     - Implementa multiplicação manual para lidar com números grandes.
   - **Como compilar e executar**:
     ```bash
     gcc fatorial.c -o fatorial
     ./fatorial
     ```

---

### 4. **`ordemCrescenteDecrescente.c`**
   - **Descrição**: Recebe 3 números inteiros e permite ao usuário escolher entre:
     1. Ordenar os números em ordem crescente.
     2. Ordenar os números em ordem decrescente.
     3. Encontrar o menor número.
     4. Encontrar o maior número.
   - **Funcionalidades**:
     - Implementa algoritmos simples de ordenação.
     - Verifica a opção escolhida pelo usuário e exibe o resultado correspondente.
   - **Como compilar e executar**:
     ```bash
     gcc ordemCrescenteDecrescente.c -o ordemCrescenteDecrescente
     ./ordemCrescenteDecrescente
     ```

---

### 5. **`raizesDoNumero.c`**
   - **Descrição**: Calcula o quadrado, cubo, raiz quadrada, raiz cúbica e o resto da divisão por 3 de um número positivo fornecido pelo usuário.
   - **Funcionalidades**:
     - Verifica se o número é válido (maior que zero).
     - Realiza cálculos matemáticos usando funções da biblioteca `math.h`.
   - **Como compilar e executar**:
     ```bash
     gcc raizesDoNumero.c -o raizesDoNumero -lm
     ./raizesDoNumero
     ```

---

## Como Contribuir

1. Clone o repositório:
   ```bash
   git clone https://github.com/Gustavo-Nog/Estruturada.git