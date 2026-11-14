# caixa-eletronico-c

simulador de caixa eletrônico no terminal, feito para praticar estruturas de decisão, repetição e funções em c.

## funcionalidades:
- consultar saldo
- depositar, com validação de valor
- sacar, com validação de valor e de saldo insuficiente
- menu que se repete até o usuário escolher sair

## como compilar e rodar:
é preciso ter o `gcc` instalado.

```
gcc -Wall main.c -o caixa
./caixa
```
no powershell do windows, use `.\caixa`.

## exemplo de uso:
```
===== caixa eletronico =====
1) ver saldo
2) depositar
3) sacar
4) sair
escolha uma opcao: 2
valor do deposito: r$ 100
deposito realizado! novo saldo: r$ 100.00
```

## o que aprendi:
- dividir o código em funções, algo que me deu trabalho no começo
- foi difícil entender como funciona o `void` e quando uma função precisa devolver um valor (`return`) ou não
- também foi desafiador melhorar o código: transformar um programa que já funcionava em funções menores, sem quebrar nada
- validar a entrada do usuário
- a diferença entre `printf` (mostra na tela) e `scanf` (lê do teclado)
- usar git e github para versionar o projeto, com um commit por etapa

## próximos passos:
- adicionar senha com limite de tentativas
- tratar entradas inválidas, como letras no menu
- registrar o histórico de operações (quando eu aprender arrays e structs)
- refazer o projeto em python e comparar as duas versões