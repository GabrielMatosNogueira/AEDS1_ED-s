/*
Nome do Programa:   ED06
Data:               31/03/2025
Nome:               Gabriel Matos Nogueira
Codigo de Pessoa:   1563147
Matricula:          870863
Versao:             1.0

---------------------------------------------------------------------------------------------------

Como executar o programa no terminal:
1.0 - Certifique-se que o compilador MINGW esteja instalado e presente nas variaveis de ambiente 
da sua maquina

2.0 - Adentre a pasta para executar o programa:
cd 1563147_Gabriel_Matos_Nogueira (Windows, Linux e macOS)

    2.1 - Compile o programa
    Windows:    gcc -o ED06 ED06.c
    Linux:      gcc -o ED06 ED06.c
    macOS:      gcc -o ED06 ED06.c


    2.2 - Execute o programa
    Windows:     ED06
    Linux:      ./ED06
    macOS:      ./ED06

---------------------------------------------------------------------------------------------------
*/

// Declaracao de biblioteca(s)
#include "io.h"

// Declaracao dos metodos utilizados
void method_00();
void method_01();
void method_02();
void method_03();
void method_04();
void method_05();
void method_06();
void method_07();
void method_08();
void method_09();
void method_10();
void method_11();
void method_12();

// Funcao Principal
int main(void)
{
    // armazenar a opcao do usuario
    int opcao = 0;
    IO_id("\n\tOpcoes de Metodos:");

    // Menu de opcoes do usuario
    do
    {
        IO_print("\n0 - Parar");
        IO_print("\n1 - Metodo 0511");
        IO_print("\n2 - Metodo 0512");
        IO_print("\n3 - Metodo 0513");
        IO_print("\n4 - Metodo 0514");
        IO_print("\n5 - Metodo 0515");
        IO_print("\n6 - Metodo 0516");
        IO_print("\n7 - Metodo 0517");
        IO_print("\n8 - Metodo 0518");
        IO_print("\n9 - Metodo 0519");
        IO_print("\n10 - Metodo 0520");
        IO_print("\n11 - Metodo 05E1");
        IO_print("\n12 - Metodo 05E2");

        opcao = IO_readint("\nDigite uma opcao: ");
        switch(opcao)
        {
            case 0:
                    method_00();
                    break;

                case 1:
                    method_01();
                    break;

                case 2:
                    method_02();
                    break;

                case 3:
                    method_03();
                    break;

                case 4:
                    method_04();
                    break;

                case 5:
                    method_05();
                    break;

                case 6:
                    method_06();
                    break;

                case 7:
                    method_07();
                    break;

                case 8:
                    method_08();
                    break;

                case 9:
                    method_09();
                    break;

                case 10:
                    method_10();
                    break;

                case 11:
                    method_11();
                    break;

                case 12:
                    method_12();
                    break;
        }
    } while (opcao!=0);
}
// Funcoes do programa

/*
---------------------------------------------------------------------------------------------------
METODO 00
- Encerramento do programa
---------------------------------------------------------------------------------------------------
*/
void method_00(void)
{
    // Identificacao
    printf("%s\n", "\nMetodo 00\n");

    // Mensagem de encerramento
    IO_print ("ENCERRANDO O PROGRAMA...\n");

    // Encerramento
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}
/*
---------------------------------------------------------------------------------------------------
RECURSAO | METODO 0611
- Funcao recursiva que exibe os multiplos de 3 em ordem crescente
---------------------------------------------------------------------------------------------------
*/

void method_0611(int n, int quantidade)
{
    if (quantidade <= 0)
    {
        return;
    }

    // Exibe o multiplo de 3 atual
    printf("[%d] ", n);

    // Chama recursivamente para exibir o proximo multiplo de 3
    method_0611(n + 3, quantidade - 1);
}

/*
---------------------------------------------------------------------------------------------------
METODO 01
- 
---------------------------------------------------------------------------------------------------
*/

void method_01(void)
{
    // identificacao
    printf("%s\n", "\nMetodo 01\n");

    // Declaracao de Variaveis
    int quantidade=0;

    // Leitura da variavel quantidade
    quantidade=IO_readint("Digite a quantidade de numeros multiplos de 3 que deseja exibir: ");

    // Chamada da funcao recursiva
    method_0611(3, quantidade);

    // encerramento
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

/*
---------------------------------------------------------------------------------------------------
RECURSAO | METODO 0612
- Funcao recursiva que exibe os multiplos de 3 em ordem decrescente
---------------------------------------------------------------------------------------------------
*/

void method_0612(int n, int quantidade)
{
    // Exibe o multiplo de 3 atual
    printf("[%d] ", n);

    // Chama recursivamente para exibir o proximo multiplo de 3
    if (quantidade > 1) 
    {
        method_0612(n - 3, quantidade - 1);
    }
}

/*
---------------------------------------------------------------------------------------------------
METODO 02
- 
---------------------------------------------------------------------------------------------------
*/

void method_02(void)
{
    // identificacao
    printf("%s\n", "\nMetodo 01\n");

    // Declaracao de Variaveis
    int quantidade=0;
    int n=3;

    // Leitura da variavel quantidade
    quantidade=IO_readint("Digite a quantidade de numeros multiplos de 3 que deseja exibir: ");

    n= 3*quantidade;

    // Chamada da funcao recursiva
    method_0612(n, quantidade);

    // encerramento
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

/*
---------------------------------------------------------------------------------------------------
METODO 613
- 
---------------------------------------------------------------------------------------------------
*/

void method_0613(int n, int quantidade)
{
    if (quantidade <= 0)
    {
        return;
    }
    printf("[1/%d] ", n);
    method_0613(n + 3, quantidade - 1);
}

/*
---------------------------------------------------------------------------------------------------
METODO 03
- 
---------------------------------------------------------------------------------------------------
*/

void method_03(void)
{
    // Identificacao
    printf("%s\n", "\nMetodo 03\n");

    // Declaracao de variaveis
    int quantidade=0;

    // Leitura da variavel quantidade
    quantidade=IO_readint("Digite quantos numeros multiplos de 3: ");


    if (quantidade==0 || quantidade<0)
    {
        printf("\n0");
    }
    else
    {
        printf("[1\1] ");
    }

    // Chamada da funcao com atribuicao de valor
    method_0613(3, quantidade);

    // Encerramento
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

/*
---------------------------------------------------------------------------------------------------
METODO 614
- 
---------------------------------------------------------------------------------------------------
*/

double method_0614(int n, int quantidade)
{
    double soma=0.0;

    if (quantidade <= 0)
    {
        return soma;
    }

    printf("[1/%d] ", n);
    soma = (1.0 / n) + method_0614(n - 3, quantidade - 1);
    return soma;
}

/*
---------------------------------------------------------------------------------------------------
METODO 03
- 
---------------------------------------------------------------------------------------------------
*/

void method_04(void)
{
    // Identificacao
    printf("%s\n", "\nMetodo 04\n");

    // Declaracao de variaveis
    int quantidade=0;
    double soma=0.0;

    // Leitura da variavel quantidade
    quantidade=IO_readint("Digite quantos numeros multiplos de 3: ");

    // Chamada da funcao com atribuicao de valor
    soma=method_0614(3*quantidade, quantidade);

    // Exibicao do valor
    printf("\n\nResultado da soma e: %lf\n", soma);

    // Encerramento
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

/*
---------------------------------------------------------------------------------------------------
METODO 0615

|x  |   y  |  z |
|3  |   1  |  4 |
|4  |   3  |  7 |
|7  |   5  |  12|
|12 |   7  |  19|
---------------------------------------------------------------------------------------------------
*/

int method_0615(int x, int y, int z, int quantidade)
{
    int soma=0;
    if(quantidade<1)
    {
        return 0;
    }
    printf("\t[%d]\t ", x);
    printf("[%d]\t ", y);
    printf("[%d]\n ", z);

    x=z;
    y=y+2;
    z=x+y;
    soma=soma+z;

    method_0615(x, y, z, quantidade-1);
    return soma;
}

/*
---------------------------------------------------------------------------------------------------
METODO 05
- 
---------------------------------------------------------------------------------------------------
*/

void method_05(void)
{
    // Identificacao
    printf("%s\n", "\nMetodo 05\n");

    // Declaracao de variaveis
    int quantidade=0;
    int x=3;
    int y=1;
    int z=4;
    int soma=0;

    // Leitura da variavel quantidade
    quantidade=IO_readint("Digite quantos numeros multiplos de 3: ");

    // Chamada da funcao com atribuicao de valor
    soma=method_0615(x,y,z,quantidade);

    // Exibicao da soma
    printf("\n\tResultado da soma e: %d", soma);
    IO_print("\n");

    // Encerramento
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

/*
---------------------------------------------------------------------------------------------------
METODO 06
- 
---------------------------------------------------------------------------------------------------
*/

void method_06(void)
{
    // Identificacao
    printf("%s\n", "\nMetodo 06\n");

    // Encerramento
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

/*
---------------------------------------------------------------------------------------------------
METODO 07
- 
---------------------------------------------------------------------------------------------------
*/

void method_07(void)
{
    // Identificacao
    printf("%s\n", "\nMetodo 07\n");

    // Encerramento
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

/*
---------------------------------------------------------------------------------------------------
METODO 08
- 
---------------------------------------------------------------------------------------------------
*/

void method_08(void)
{
    // Identificacao
    printf("%s\n", "\nMetodo 08\n");

    // Encerramento
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

/*
---------------------------------------------------------------------------------------------------
METODO 09
- 
---------------------------------------------------------------------------------------------------
*/

void method_09(void)
{
    // Identificacao
    printf("%s\n", "\nMetodo 09\n");

    // Encerramento
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

/*
---------------------------------------------------------------------------------------------------
METODO 10
- 
---------------------------------------------------------------------------------------------------
*/

void method_10(void)
{
    // Identificacao
    printf("%s\n", "\nMetodo 10\n");

    // Encerramento
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

/*
---------------------------------------------------------------------------------------------------
METODO 11
- 
---------------------------------------------------------------------------------------------------
*/

void method_11(void)
{
    // Identificacao
    printf("%s\n", "\nMetodo 11\n");

    // Encerramento
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

/*
---------------------------------------------------------------------------------------------------
METODO 12
- 
---------------------------------------------------------------------------------------------------
*/

void method_12(void)
{
    // Identificacao
    printf("%s\n", "\nMetodo 12\n");

    // Encerramento
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
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
