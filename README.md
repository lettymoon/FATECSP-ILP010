# Linguagem de programação - ILP-010

![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)

Repositório da disciplina ILP-010 Linguagem de Programação. FATEC São Paulo.

Disciplina ministrada usando a linguagem C.

Material utilizado nas aulas: [Material](https://www.ime.usp.br/~slago/main.fatecsp.lp.html)

Professor: [Dr. Silvio do Lago Pereira](https://www.ime.usp.br/~slago/index.html)

## Index

- [Linguagem de programação - ILP-010](#linguagem-de-programação---ilp-010)
  - [Index](#index)
  - [Instalando](#instalando)
  - [Executando](#executando)
  - [Conteúdo](#conteúdo)
    - [Aulas](#aulas)
  - [Links Didáticos](#links-didáticos)

## Instalando

Antes de começar, garanta que você esta utilizando Linux ou o WSL (Windows Subsystem Linux for Windows)

instale o GCC utilizando o comando `sudo apt install gcc`

## Executando

Para executar entre na pasta a qual está o código utilizando o comando `cd <nome_pasta>`

Execute `gcc <arquivo.c> -o saida` para compilar o código

Finalmente execute `./saida` para executar o código compilado e seja Feliz :)

---
Exemplo prático estando na pasta raiz:

```bash
cd 1-introdução/
gcc test.c -o saida
./saida
```

Saida do programa:

```text
hello world
```

## Conteúdo

### Aulas

- [Introdução: Linguagem C](01-introducao)
- [Comandos de Seleção](02-comandos-selecao)
- [Comandos de Repetição](03-comandos-repeticao)
- [Macros e Funções](04-macros-funcoes)
- [Funções Recursivas](05-funcoes-recursivas)
- [Vetores e Matrizes](06-vetores-matrizes)
- [Ordenação e Busca](07-ordenacao-busca)
- [Strings](08-strings)
- [Estruturas](09-estruturas)
- [Ponteiros](10-ponteiros)
- [Alocação dinâmica de memória](11-alocacao-dinamica)
- [Argumentos da linha de comandos](12-linha-comando)
- [Arquivos em modo de texto e binário](13-arquivos-texto-binario)

## Links Didáticos

[Comandos básicos em C](http://albertocn.sytes.net/2010-1/pi/aulas/linguagem_c.htm)

[GDB Compilador de C Online](https://www.onlinegdb.com/)

[Lista de exercícios IME-USP](https://drive.google.com/file/d/1Zyy9MACKkhypQT502B6Ritc9jwLnd0lW/view?usp=sharing)

[Resumo sobre a linguagem C](https://drive.google.com/file/d/1F6M99Q3v5GrqmiGGmfwdTwndtGguLzxF/view?usp=sharing)

[C Handbook article from freecodecamp](https://www.freecodecamp.org/news/the-c-beginners-handbook/#pointers)
