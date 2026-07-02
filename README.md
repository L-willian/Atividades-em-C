# Atividades de Programação em C

<div align="center">

[![Language](https://img.shields.io/badge/Linguagem-C-blue?logo=c&logoColor=white)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Status](https://img.shields.io/badge/Status-Arquivado-lightgrey)](https://github.com/L-willian/Atividades-em-C)
[![Arquivos](https://img.shields.io/badge/Arquivos-.c-555)](.)
[![License](https://img.shields.io/badge/Licen%C3%A7a-MIT-green)](#licença)

**Repositório concluído**

[Visão geral](#visão-geral) · [Estrutura](#estrutura-do-repositório) · [Compilação](#compilação-e-execução) · [Projeto destaque](#projeto-busca-binária) · [Autor](#autor)

</div>

---

## Visão geral

Este repositório reúne **114 programas em C** desenvolvidos ao longo de um curso introdutório de programação. O conteúdo cobre fundamentos da linguagem — tipos, controle de fluxo, funções, ponteiros, estruturas, alocação dinâmica, recursão e manipulação de arquivos — organizados em exercícios progressivos, listas temáticas, revisões e um projeto aplicado de busca binária.

O material foi estruturado para acompanhar uma trilha de aprendizado do básico ao intermediário. **Este diretório encontra-se em estado final:** serve como registro histórico do trabalho realizado e como referência de consulta, sem previsão de manutenção ou expansão.

| Métrica | Valor |
|---------|------:|
| Arquivos `.c` | 114 |
| Módulos de exercícios | 8 |
| Listas temáticas | 3 |
| Baterias de revisão | 2 |
| Projeto aplicado | 1 (3 variações) |
| Atividades extras | 2 |

**Repositório remoto:** [github.com/L-willian/Atividades-em-C](https://github.com/L-willian/Atividades-em-C)

---

## Estrutura do repositório

Cada pasta contém arquivos independentes (`QuesN.c`, `quesN.c` ou equivalentes). Os nomes das pastas refletem a nomenclatura original do curso, incluindo variações de acentuação e capitalização.

```
Aula--Programação/
├── Exercicio 1/              #  5 arquivos — condicionais (if/else)
├── Exercício 2/              # 15 arquivos — switch e condicionais
├── Exercício 3/              # 13 arquivos — laços (for)
├── Exercicío 4/              #  3 arquivos — laços (while)
├── Exercício 5/              #  5 arquivos — funções e while
├── EXercício 6/              #  7 arquivos — funções e ponteiros
├── Exercício 7/              #  9 arquivos — struct, memória dinâmica e recursão
├── Exercício 8/              #  7 arquivos — bibliotecas padrão e arquivos
├── LIsta 1/                  # 10 arquivos — tipos de dados
├── Lista 2/                  #  5 arquivos — condicionais e switch
├── Lista 3/                  #  9 arquivos — estruturas de repetição
├── Revisão 1/                # 15 arquivos — consolidação geral
├── Revisão 2/                #  6 arquivos — segunda bateria de revisão
├── Atividades Extras/        #  2 arquivos — desafios complementares
├── Proj. Busca Binária/      #  3 arquivos — algoritmo aplicado
└── README.md
```

### Mapa curricular

| Módulo | Pasta | Foco principal | Arquivos |
|--------|-------|----------------|----------|
| 1 | `Exercicio 1` | Estruturas condicionais (`if` / `else`) | 5 |
| 2 | `Exercício 2` | `switch` e condicionais compostas | 15 |
| 3 | `Exercício 3` | Estruturas de repetição (`for`) | 13 |
| 4 | `Exercicío 4` | Estruturas de repetição (`while`) | 3 |
| 5 | `Exercício 5` | Funções e `while` | 5 |
| 6 | `EXercício 6` | Funções e ponteiros | 7 |
| 7 | `Exercício 7` | `struct`, alocação dinâmica e recursão | 9 |
| 8 | `Exercício 8` | Bibliotecas padrão e manipulação de arquivos | 7 |
| — | `LIsta 1` | Tipos de dados | 10 |
| — | `Lista 2` | Condicionais e `switch` | 5 |
| — | `Lista 3` | Estruturas de repetição | 9 |
| — | `Revisão 1` | Revisão integrada (15 questões) | 15 |
| — | `Revisão 2` | Revisão complementar | 6 |
| — | `Atividades Extras` | Exercícios adicionais | 2 |

### Trilha sugerida de estudo

```
Exercicio 1 → Exercício 2 → Exercício 3
      ↓              ↓              ↓
   LIsta 1       Lista 2        Lista 3
      ↓              ↓              ↓
Exercicío 4 → Exercício 5 → EXercício 6
      ↓              ↓              ↓
Exercício 7 → Exercício 8 → Revisão 1 → Revisão 2
                                    ↓
                         Atividades Extras → Proj. Busca Binária
```

---

## Compilação e execução

### Pré-requisitos

- Compilador **GCC** (ou compatível com o padrão C99/C11)
- Terminal com suporte a caminhos com espaços e caracteres acentuados

### Comandos básicos

```bash
# Compilar
gcc -Wall -std=c11 "caminho/para/arquivo.c" -o programa

# Executar
./programa
```

### Exemplo com caminho real

```bash
gcc -Wall -std=c11 "Exercicio 1/ques1.c" -o ques1
./ques1
```

### Flags recomendadas

| Flag | Propósito |
|------|-----------|
| `-Wall` | Ativa avisos úteis durante a compilação |
| `-std=c11` | Define o padrão da linguagem |
| `-g` | Inclui símbolos de depuração |
| `-O2` | Aplica otimização moderada |

> **Nota:** cada arquivo é um programa autônomo com função `main()`. Não há sistema de build centralizado; compile individualmente o arquivo desejado.

---

## Projeto: Busca Binária

Localização: `Proj. Busca Binária/`

Implementação iterativa do algoritmo de busca binária em três níveis de complexidade crescente. Todos exigem um **vetor ordenado** e retornam o índice do elemento ou `-1` quando o valor não é encontrado.

| Arquivo | Entrada | Descrição |
|---------|---------|-----------|
| `Busca Binária 1.c` | Teclado | Tamanho e elementos informados pelo usuário |
| `Busca Binária 2.c` | Vetor estático | Busca em sequência ordenada de 1 a 70 |
| `Busca Binária 3.c` | Arquivo CSV | Leitura de até 10.000 inteiros a partir de arquivo |

**Complexidade:** `O(log n)` por comparação.

**Conceitos envolvidos:** divisão e conquista, vetores, funções com retorno, leitura de arquivos e tratamento de datasets maiores.

### Execução da variação com CSV

O arquivo `Busca Binária 3.c` espera um CSV chamado `numeros_1_a_10000_sem_cabecalho.csv` **no diretório de execução**, contendo inteiros de 1 a 10.000 separados por vírgula, sem cabeçalho.

```bash
cd "Proj. Busca Binária"
gcc -Wall -std=c11 "Busca Binária 3.c" -o busca3
./busca3
```

---

## Tópicos abordados

<details>
<summary><strong>Fundamentos</strong></summary>

- Variáveis e tipos primitivos (`int`, `float`, `char`)
- Operadores aritméticos, relacionais e lógicos
- Entrada e saída padrão (`printf`, `scanf`)

</details>

<details>
<summary><strong>Controle de fluxo</strong></summary>

- Condicionais (`if`, `else`, `switch`)
- Laços (`for`, `while`)

</details>

<details>
<summary><strong>Programação procedural</strong></summary>

- Declaração e chamada de funções
- Operações matemáticas (soma, fatorial, tabuada, conversões de unidade)
- Modularização de lógica repetitiva

</details>

<details>
<summary><strong>Conceitos intermediários</strong></summary>

- Ponteiros e aritmética de endereços
- Vetores e matrizes
- Estruturas (`struct`)
- Alocação dinâmica de memória (`malloc` / `free`)
- Recursão

</details>

<details>
<summary><strong>Aplicações práticas</strong></summary>

- Jogos simples (ex.: pedra, papel e tesoura)
- Bibliotecas padrão (`stdio.h`, `stdlib.h`, `string.h`)
- Leitura e escrita de arquivos

</details>

---

## Convenções do código

- Cada questão corresponde a um único arquivo `.c` autocontido.
- Comentários em português explicam a lógica principal quando necessário.
- Entrada via `scanf` e saída via `printf` são o padrão predominante.
- Os executáveis gerados localmente **não** fazem parte do versionamento; apenas os fontes `.c` são mantidos no repositório.

---

## Estado do repositório

| Item | Situação |
|------|----------|
| Desenvolvimento | **Encerrado** |
| Novos exercícios | Não previstos |
| Correções e refatorações | Não previstas |
| Issues e pull requests | Não serão aceitos para alteração de conteúdo |

Este projeto permanece disponível como **portfólio acadêmico** e material de referência. Consultas, forks para estudo pessoal e citação do repositório são bem-vindas.

---

## Autor

**Luiz Willian**

[![GitHub](https://img.shields.io/badge/GitHub-L--willian-181717?logo=github)](https://github.com/L-willian/)
[![LinkedIn](https://img.shields.io/badge/LinkedIn-willian--soares--dev-0A66C2?logo=linkedin)](https://www.linkedin.com/in/willian-soares-dev/)

---

## Licença

Este projeto está licenciado sob a **MIT License**. Você pode usar, copiar, modificar e distribuir o código, desde que mantenha o aviso de copyright e a permissão correspondentes.
