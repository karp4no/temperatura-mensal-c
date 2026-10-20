# Analisador de Temperatura Mensal em C

Projeto desenvolvido para a disciplina de **Algoritmos e Pensamento Computacional** (Universidade Cruzeiro do Sul). O sistema utiliza vetores unidimensionais para registrar as temperaturas máximas diárias de um mês, calcula estatísticas e gera um gráfico de tendência visual diretamente no terminal.

## 🚀 Funcionalidades
* **Armazenamento Sequencial:** Vetor de 30 posições para gerenciar o escopo temporal mensal.
* **Processamento Analítico:** Cálculo automático da temperatura média, identificação da maior e menor temperatura (junto com seus respectivos dias).
* **Desafio Bônus:** Geração de um gráfico de linhas/barras em modo texto (ASCII) para visualização rápida da variação térmica.

## 🛠️ Como Compilar e Executar
No terminal Linux, execute os comandos abaixo:
```bash
gcc main.c -o temperatura
./temperatura
