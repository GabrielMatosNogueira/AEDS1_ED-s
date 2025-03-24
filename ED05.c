/*
Nome do Programa:   ED05
Data:               24/03/2025
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
    Windows:    gcc -o ED05 ED05.c
    Linux:      gcc -o ED05 ED05.c
    macOS:      gcc -o ED05 ED05.c


    2.2 - Execute o programa
    Windows:     ED05
    Linux:      ./ED05
    macOS:      ./ED05

---------------------------------------------------------------------------------------------------
*/

// Declaracao de biblioteca(s)
#include "io.h"

// Declaracao dos metodos utilizados
void method_00();
void FUNCAO_0511(int n);
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
    IO_id("\n\t");

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

FUNCAO 0511
- Mostrar 'n' numeros digitados pelo usuario na funcao METODO 01 para gerar valores multiplos de 3

---------------------------------------------------------------------------------------------------
*/

void FUNCAO_0511(int n)
{
    // Declaracao de variaveis
    int i = 0;
    int tamanho = n; // Recebimendo do tamanho do loop pelo tamanho indicado pelo ponteiro

    // Loop sequencial dos multiplos de 3
    for (i = 1; i < tamanho+1; i=i+1)
    {
        printf("[%d] ", i * 3);
    }
    IO_print("\n");
}

/*
---------------------------------------------------------------------------------------------------

METODO 01
- Ler um numero inteiro indicando o numero de repeticoes

---------------------------------------------------------------------------------------------------
*/

void method_01(void)
{
    // Identificacao
    printf("%s\n", "\nMetodo 01\n");

    // Declaracao de variaveis
    int n = 0;

    // Requisicao da quantidade de numeros multiplos de 3
    // que o usuario deseja ver
    n = IO_readint("Digite a quantidade de numeros multiplos de 3 que se deseja ver: ");

    // Chamada da funcao de exibicao dos multiplos de 3
    FUNCAO_0511(n);

    // Encerramento
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

/*
---------------------------------------------------------------------------------------------------
METODO_0512
-
---------------------------------------------------------------------------------------------------
*/

void METODO_0512(int n)
{
    // Identificacao
    printf("%s\n", "\nMetodo 02\n");

    // Declaracao das variaveis
    int i=0;

    IO_print("Os valores multiplos de 3 e 5 sao:\n");

    // Exibicao dos valores inteiros multiplos de 3 E 5
    for(i=1; i<n+1; i=i+1)
    {
        printf("[%d]\n", i*(3*5));
    }
}

/*
---------------------------------------------------------------------------------------------------
METODO 02
- Ler um valor inteiro do teclado
---------------------------------------------------------------------------------------------------
*/

void method_02(void)
{
    // Identificacao
    printf("%s\n", "\nMetodo 02\n");

    // Declaracao das variaveis
    int n=0;

    // Leitura da variavel n
    n=IO_readint("Digite quantos numeros quer exibir dos multiplos de 3 E 5: ");

    // Chamada da funcao para exibir dos multiplos de 3 e 5
    METODO_0512(n);

    // Encerramento
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
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

    // Encerramento
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

/*
---------------------------------------------------------------------------------------------------
METODO 04
-
---------------------------------------------------------------------------------------------------
*/

void method_04(void)
{
    // IdentificacaosequenciaDe3
    printf("%s\n", "\nMetodo 04\n");

    // Encerramento
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
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
