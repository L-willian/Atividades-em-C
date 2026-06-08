# 📚 Atividades de Programação em C

<div align="center">

![C](https://img.shields.io/badge/Language-C-blue?logo=c&logoColor=white)
![Status](https://img.shields.io/badge/Status-Ativo-brightgreen)
![License](https://img.shields.io/badge/License-MIT-green)

</div>

## 📋 Sobre o Projeto

Repositório com exercícios, listas e atividades de programação em C, abrangendo desde conceitos básicos até estruturas de dados avançadas. Ideal para aprendizagem progressiva e revisão de fundamentos.

---

## 📖 Índice

- [Estrutura do Repositório](#estrutura-do-repositório)
- [Projeto: Busca Binária](#projeto-busca-binária)
- [Tópicos Abordados](#tópicos-abordados)
- [Quick Start](#quick-start)
- [Como Usar](#como-usar)
- [Autor](#autor)

---

## 📁 Estrutura do Repositório

### 📌 Exercícios Progressivos (8 tópicos)

| # | Exercício | Tópico Principal |
|---|-----------|------------------|
| 1 | Exercício 1 | Estruturas condicionais (if/else) |
| 2 | Exercício 2 | Switch e condicionais |
| 3 | Exercício 3 | Loops (for) |
| 4 | Exercício 4 | While |
| 5 | Exercício 5 | Funções e While |
| 6 | Exercício 6 | Funções e Ponteiros |
| 7 | Exercício 7 | Struct, Alocação Dinâmica e Recursão |
| 8 | Exercício 8 | Bibliotecas Básicas e Arquivos |

### 📋 Listas de Exercícios (3 listas)

| # | Lista | Conteúdo |
|---|-------|----------|
| 1 | Lista 1 | Tipos de dados |
| 2 | Lista 2 | Estruturas condicionais e switch |
| 3 | Lista 3 | Estruturas de repetição |

### 🔄 Revisão (2 baterias)

| # | Revisão | Questões |
|---|---------|----------|
| 1 | Revisão 1 | 15 questões de revisão |
| 2 | Revisão 2 | Segunda bateria de revisão |

### ⭐ Extras

- **Atividades Extras** — Atividades complementares

---

## 🔍 Projeto: Busca Binária

### Descrição
Implementação de algoritmo de busca binária em C com duas variações:

| Arquivo | Descrição |
|---------|-----------|
| **Busca Binária 1.c** | Entrada do usuário — permite inserir tamanho e elementos do vetor |
| **Busca Binária 2.c** | Vetor predefinido — busca em vetor ordenado de 1 a 70 |

### Características
- ✅ Algoritmo eficiente com complexidade O(log n)
- ✅ Requer vetor ordenado
- ✅ Retorna índice do elemento ou -1 se não encontrado
- ✅ Implementação iterativa com cálculo seguro do meio

### Conceitos Aplicados
- Divisão e conquista
- Busca otimizada
- Manipulação de vetores
- Funções com retorno

---

## 📖 Tópicos Abordados

### Fundamentos
- ✅ Variáveis e Tipos de Dados (int, float, char)
- ✅ Operadores (aritméticos, relacionais, lógicos)
- ✅ Entrada e Saída (printf, scanf)

### Controle de Fluxo
- ✅ Estruturas Condicionais (if, else, switch)
- ✅ Estruturas de Repetição (for, while)

### Programação Procedural
- ✅ Funções e Procedimentos
- ✅ Operações Matemáticas (soma, multiplicação, fatorial, tabuada)
- ✅ Conversões de Unidades (cm/m, kg/g)

### Conceitos Avançados
- ✅ Ponteiros (*, &, acesso indireto à memória)
- ✅ Vetores e Matrizes
- ✅ Estruturas (Struct)
- ✅ Alocação Dinâmica de Memória
- ✅ Recursão

### Aplicações Práticas
- ✅ Jogos Simples (Pedra, Papel, Tesoura)
- ✅ Bibliotecas Básicas (stdio.h, stdlib.h, string.h)
- ✅ Manipulação de Arquivos

---

## 🚀 Quick Start

### Pré-requisitos
- GCC ou compilador C compatível
- Terminal/Prompt de comando

### Compilar e Executar

```bash
# Compilar
gcc arquivo.c -o programa

# Executar
./programa
```

### Flags Úteis

```bash
# Com warnings (recomendado)
gcc -Wall arquivo.c -o programa

# Com debug
gcc -g arquivo.c -o programa

# Com otimização
gcc -O2 arquivo.c -o programa
```

---

## 💡 Como Usar

1. **Escolha um exercício** — Comece pelos exercícios progressivos na ordem
2. **Leia o enunciado** — Entenda o que é pedido
3. **Compile** — Use `gcc arquivo.c -o programa`
4. **Execute** — Rode `./programa`
5. **Teste** — Valide com diferentes entradas
6. **Revise** — Use as listas e revisões para consolidar

### Progressão Recomendada

```
Exercício 1-3 → Lista 1-2 → Exercício 4-5 → Lista 3 → 
Exercício 6-8 → Revisão 1-2 → Atividades Extras
```

---

## 📊 Análise do Projeto

### Quantidade de Exercícios
- **Exercícios Progressivos**: 8 (120+ questões no total)
- **Listas de Exercícios**: 3 (22 questões)
- **Revisões**: 2 (30 questões)
- **Atividades Extras**: 2 questões
- **Projeto Especial**: Busca Binária (2 implementações)

### Estrutura de Arquivos
```
├── Exercício 1-7/          # 5 questões cada em média
├── Exercício 8/            # Manipulação de arquivos (7 questões)
├── Lista 1-3/              # Exercícios específicos de tópico
├── Revisão 1-2/            # Consolidação de conhecimento
├── Proj. Busca Binária/    # Algoritmo especializado
├── Atividades Extras/      # Desafios adicionais
└── .gitignore             # Ignora executáveis, mantém .c
```

### Tecnologias e Bibliotecas Utilizadas
- **Compilador**: GCC
- **Bibliotecas**: stdio.h, stdlib.h, string.h
- **Tópicos Avançados**: Arquivo CSV, alocação dinâmica, recursão

### Observações
- ✅ Projeto bem estruturado com progressão clara
- ✅ Cobertura completa de fundamentos de C
- ✅ Foco em resolução de problemas práticos
- ✅ Inclui desafios de manipulação de dados
- ✅ .gitignore configurado corretamente (apenas .c no versionamento)

---

## 🤝 Autor

**Luiz Willian**

[![GitHub](https://img.shields.io/badge/GitHub-L--willian-black?logo=github)](https://github.com/L-willian/)
[![LinkedIn](https://img.shields.io/badge/LinkedIn-willian--soares--dev-blue?logo=linkedin)](https://www.linkedin.com/in/willian-soares-dev/)

---

## 📄 Licença

Este projeto está sob licença MIT.
