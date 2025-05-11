/*
Nome do Programa:   ED
Data:               //2025
Nome:               Gabriel Matos Nogueira
Codigo de Pessoa:   1563147
Matricula:          870863
Versao:             1.0

---------------------------------------------------------------------------------------------------

Como executar o programa no terminal:
1.0 - Certifique-se que o compilador GCC esteja instalado e presente nas variaveis de ambiente
da sua maquina

2.0 - Adentre a pasta para executar o programa:
cd 1563147_Gabriel_Matos_Nogueira (Windows, Linux e macOS)

    2.1 - Compile o programa
    Windows:    gcc -o  .c
    Linux:      gcc -o  .c
    macOS:      gcc -o  .c


    2.2 - Execute o programa
    Windows:     ED
    Linux:      ./ED
    macOS:      ./

---------------------------------------------------------------------------------------------------
*/

// Declaracao de biblioteca(s)
#include "io.h"

// Declaracao dos metodos utilizados
void metodo_0000();
void metodo_0911();
void metodo_0912();
void metodo_0913();
void metodo_0914();
void metodo_0915();
void metodo_0916();
void metodo_0917();
void metodo_0918();
void metodo_0919();
void metodo_0920();
void metodo_09E1();
void metodo_09E2();

// Funcao Principal
int main(void)
{
    // armazenar a opcao do usuario
    int opcao = 0;
    IO_id("\n\nED09");
    IO_print("\n\tOpcoes de Metodos:");

    // Menu de opcoes do usuario
    do
    {
        IO_print("\n0 - Parar");
        IO_print("\n1 - Metodo 0911");
        IO_print("\n2 - Metodo 0912");
        IO_print("\n3 - Metodo 0913");
        IO_print("\n4 - Metodo 0914");
        IO_print("\n5 - Metodo 0915");
        IO_print("\n6 - Metodo 0916");
        IO_print("\n7 - Metodo 0917");
        IO_print("\n8 - Metodo 0918");
        IO_print("\n9 - Metodo 0919");
        IO_print("\n10 - Metodo 0920");
        IO_print("\n11 - Metodo 09E1");
        IO_print("\n12 - Metodo 09E2");

        opcao = IO_readint("\nDigite uma opcao: ");
        switch (opcao)
        {
        case 0:
            metodo_0000();
            break;

        case 1:
            metodo_0911();
            break;

        case 2:
            metodo_0912();
            break;

        case 3:
            metodo_0913();
            break;

        case 4:
            metodo_0914();
            break;

        case 5:
            metodo_0915();
            break;

        case 6:
            metodo_0916();
            break;

        case 7:
            metodo_0917();
            break;

        case 8:
            metodo_0918();
            break;

        case 9:
            metodo_0919();
            break;

        case 10:
            metodo_0920();
            break;

        case 11:
            metodo_09E1();
            break;

        case 12:
            metodo_09E2();
            break;
        }
    } while (opcao != 0);
}
// Funcoes do programa

/*
---------------------------------------------------------------------------------------------------
METODO 00
- Encerramento do programa
---------------------------------------------------------------------------------------------------
*/
void metodo_0000(void)
{
    // Identificacao
    IO_start("Metodo 00");

    // Mensagem de encerramento
    IO_print("ENCERRANDO O PROGRAMA...\n");
}

/*
---------------------------------------------------------------------------------------------------
METODO 01
-
---------------------------------------------------------------------------------------------------
*/

void metodo_0911(void)
{
    IO_start("Metodo_0911");

    const int MAX_LINHAS = 100;
    const int MAX_COLUNAS = 100;

    int linhas = 0;
    int colunas = 0;
    int i = 0;
    int j = 0;

    linhas = IO_readint("\nDigite o numero de linhas (ate 100): ");
    colunas = IO_readint("Digite o numero de colunas (ate 100): ");

    if (linhas > 0 && linhas <= MAX_LINHAS && colunas > 0 && colunas <= MAX_COLUNAS)
    {
        double matriz[MAX_LINHAS][MAX_COLUNAS];

        i = 0;
        while (i < linhas)
        {
            j = 0;
            while (j < colunas)
            {
                matriz[i][j] = IO_readdouble("Digite um valor positivo ou zero: ");

                if (matriz[i][j] < 0.0)
                {
                    IO_println("Valor invalido. Tente novamente.");
                }
                else
                {
                    j = j + 1;
                }
            }
            i = i + 1;
        }

        IO_println("\nMatriz lida:");
        i = 0;
        while (i < linhas)
        {
            j = 0;
            while (j < colunas)
            {
                printf("%.2lf\t", matriz[i][j]);
                j = j + 1;
            }
            printf("\n");
            i = i + 1;
        }
    }
    else
    {
        IO_println("Erro: numero de linhas ou colunas invalido.");
    }

    IO_end();
}



/*
---------------------------------------------------------------------------------------------------
METODO 02
- Gravar uma matriz real em arquivo. 
- A matriz e o nome do arquivo serão dados como parametros para outra funcao
- Para testar, usar a leitura da matriz do problema anterior. 
- Usar outro metodo para ler e recuperar a matriz do arquivo, antes de mostra-la na tela. 
---------------------------------------------------------------------------------------------------
*/

void metodo_0912(void)
{
    // Identificacao
    IO_start("Metodo_0912");

    // Declaracao de variaveis
    int linhas=0;
    int colunas=0;
    char *filename="ED09_metodo_0912.c";
    FILE *arquivo=fopen(filename, "w");

    linhas=IO_readint("\nDigite o numero de linhas: ");
    linhas=IO_readint("\nDigite o numero de colunas: ");

    if(!(linhas<=0 && colunas<=0))
    {

    }

    else
    {
        IO_print("\nMatriz invalida. Tente novamente.");
    }

    // Encerramento
    IO_end();
}

/*
---------------------------------------------------------------------------------------------------
METODO 03
-
---------------------------------------------------------------------------------------------------
*/

void metodo_0913(void)
{
    // Identificacao
    IO_start("Metodo_0913");

    // Encerramento
    IO_end();
}

/*
---------------------------------------------------------------------------------------------------
METODO 04
-
---------------------------------------------------------------------------------------------------
*/

void metodo_0914(void)
{
    // Identificacao
    IO_start("Metodo_0914");

    // Encerramento
    IO_end();
}

/*
---------------------------------------------------------------------------------------------------
METODO 05
-
---------------------------------------------------------------------------------------------------
*/

void metodo_0915(void)
{
    // Identificacao
    IO_start("Metodo_0915");

    // Encerramento
    IO_end();
}

/*
---------------------------------------------------------------------------------------------------
METODO 06
-
---------------------------------------------------------------------------------------------------
*/

void metodo_0916(void)
{
    // Identificacao
    IO_start("Metodo_0916");

    // Encerramento
    IO_end();
}

/*
---------------------------------------------------------------------------------------------------
METODO 07
-
---------------------------------------------------------------------------------------------------
*/

void metodo_0917(void)
{
    // Identificacao
    IO_start("Metodo_0917");

    // Encerramento
    IO_end();
}

/*
---------------------------------------------------------------------------------------------------
METODO 08
-
---------------------------------------------------------------------------------------------------
*/

void metodo_0918(void)
{
    // Identificacao
    IO_start("Metodo_0918");

    // Encerramento
    IO_end();
}

/*
---------------------------------------------------------------------------------------------------
METODO 09
-
---------------------------------------------------------------------------------------------------
*/

void metodo_0919(void)
{
    // Identificacao
    IO_start("Metodo_0919");

    // Encerramento
    IO_end();
}

/*
---------------------------------------------------------------------------------------------------
METODO 10
-
---------------------------------------------------------------------------------------------------
*/

void metodo_0920(void)
{
    // Identificacao
    IO_start("Metodo_0920");

    // Encerramento
    IO_end();
}

/*
---------------------------------------------------------------------------------------------------
METODO 11
-
---------------------------------------------------------------------------------------------------
*/

void metodo_09E1(void)
{
    // Identificacao
    IO_start("Metodo_09E1");

    // Encerramento
    IO_end();
}

/*
---------------------------------------------------------------------------------------------------
METODO 12
-
---------------------------------------------------------------------------------------------------
*/

void metodo_09E2(void)
{
    // Identificacao
    IO_start("Metodo_09E2");

    // Encerramento
    IO_end();
}

/*-------------------------------------------------------------------------------------------------
DOCUMENTACAO
-------------------------------------------------------------------------------------------------

1.0 - DOCUMENTACAO COMPLEMENTAR

- Sem observacoes

---------------------------------------------------------------------------------------------------

2.0 - TESTES

*Method_00: OK
- Sem observacoes

*Method_01:
-

*Method_02:
-

*Method_03:
-

*Method_04:
-

*Method_05:
-

*Method_06:
-

*Method_07:
-

*Method_08:
-

*Method_09:
-

*Method_10:
-

*Method_11:
-

*Method_12:
-
---------------------------------------------------------------------------------------------------
*/
