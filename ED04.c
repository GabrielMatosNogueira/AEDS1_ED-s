/*
Nome do Programa:   ED04
Data:               18/03/2025
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
    Windows:    gcc -o ED04 ED04.c
    Linux:      gcc -o ED04 ED04.c
    macOS:      gcc -o ED04 ED04.c


    2.2 - Execute o programa
    Windows:     ED04
    Linux:      ./ED04
    macOS:      ./ED04

---------------------------------------------------------------------------------------------------
*/

// Declaracao de biblioteca(s)
#include "io.h"

// Declaracao das funcoes
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
    IO_id("\n\t");

    IO_print("\n0 - Parar");
    IO_print("\n1 - Metodo ");
    IO_print("\n2 - Metodo ");
    IO_print("\n3 - Metodo ");
    IO_print("\n4 - Metodo ");
    IO_print("\n5 - Metodo ");
    IO_print("\n6 - Metodo ");
    IO_print("\n7 - Metodo ");
    IO_print("\n8 - Metodo ");
    IO_print("\n9 - Metodo");
    IO_print("\n10 - Metodo ");
    IO_print("\n11 - Metodo ");
    IO_print("\n12 - Metodo ");

    IO_print("\nDigite uma opcao: ");
    opcao = IO_readint("");

    // Menu de opcoes do usuario
    switch (opcao)
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
}
// Funcoes do programa

void method_00(void)
{
    // identificar
    IO_id("Metodo 0411\n");

    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

void method_01(void)
{
    // identificar
    IO_id("\n\tMetodo 0411 - v1.0\n");

    // declaracao de variaveis
    double limite[2];
    limite[1] = 0;
    limite[2] = 0;
    int quantidade = 0;
    int i = 0;
    int count = 0;
    double numeroTemporario = 0.0;

    // perguntar o numero de testes e o limite das funcoes
    IO_print("Digite a quantidade de numeros a testar no intervalo: ");
    quantidade = IO_readint("");
    IO_print("\nDigite o limite inferior: ");
    limite[1] = IO_readdouble("");
    IO_print("\nDigite o limite superior: ");
    limite[2] = IO_readdouble("");

    // atualizar o scan da variaável
    for (i = 0; i < quantidade; i = i + 1)
    {
        numeroTemporario = IO_readdouble("\nDigite um numero a ser testado: ");

        if (numeroTemporario >= limite[1] && numeroTemporario <= limite[2])
        {
            IO_print("Pertence ao intervalo\n");
            count = count + 1; // contar quantos numeros pertencem ao intervalo
        }
        else
        {
            IO_print("Nao pertence ao intervalo\n");
        }
    }
    // mostrar o numero de testes dentro do intervalo digitado
    IO_print("\nA quantidade de numeros que pertencem ao intervalo e: ");
    printf("%d", count);

    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

void method_02(void)
{
    // Identificar
    printf("%s\n", "\nMetodo 0412\n");

    // Declarar variaveis
    char frase[100] = "";
    int contador = 0;

    // Ler uma sequencia de caracteres do teclado
    IO_print("Digite uma sequencia de ate 100 caracteres: ");
    fgets(frase, sizeof(frase), stdin); // Le a string
    frase[strcspn(frase, "\n")] = '\0'; // Remove o caractere de nova linha (\n)

    // Percorrer a sequencia e contar letras minusculas no intervalo ('c', 'p')
    for (int i = 0; i < strlen(frase); i++) {
        // Verificar se o caractere e minusculo
        if (frase[i] >= 'a' && frase[i] <= 'z') {
            // Verificar se esta no intervalo ('c', 'p')
            if (frase[i] > 'c' && frase[i] < 'p') {
                contador++;
                printf("Caractere '%c' esta no intervalo ('c', 'p')\n", frase[i]);
            }
        }
    }

    // Exibir letras maiusculas diretamente
    IO_print("\nLetras maiusculas encontradas na sequencia:\n");
    for (int i = 0; i < strlen(frase); i++) {
        // Verificar se o caractere e maiusculo
        if (frase[i] >= 'A' && frase[i] <= 'Z') {
            printf("Caractere '%c' e uma letra maiuscula\n", frase[i]);
        }
    }

    // Mostrar a quantidade total
    printf("\nTotal de letras minusculas no intervalo ('c', 'p'): %d\n", contador);

    // Encerrar
    printf("\nAperte ENTER para continuar");
    getchar();
}

void receberString(char* frase) 
{
    // Ler uma sequencia de caracteres do teclado
    printf("Digite uma frase: ");
    fgets(frase, 100, stdin);  // Limitar a leitura a 100 caracteres
    frase[strcspn(frase, "\n")] = '\0'; // Remove o caractere de nova linha (\n)
}

void method_03(void) 
{
    // Identificar
    printf("%s\n", "\nMetodo 0413\n");

    // Declarar variaveis
    char frase[100] = "";
    int contador = 0;
    
    // Chamar a funcao para receber a string
    receberString(frase);

    // Percorrer a sequencia e contar letras minusculas no intervalo ('c', 'p')
    for (int i = 0; i < strlen(frase); i++) {
        // Verificar se o caractere e minusculo
        if (frase[i] >= 'a' && frase[i] <= 'z') {
            // Verificar se esta no intervalo ('c', 'p')
            if (frase[i] > 'c' && frase[i] < 'p') {
                contador++;
                printf("Caractere '%c' (posicao %d) esta no intervalo ('c', 'p')\n", frase[i], i+1);
            }
        }
    }

    // Exibir letras maiusculas diretamente
    printf("\nLetras maiusculas encontradas na sequencia:\n");
    for (int i = 0; i < strlen(frase); i++) {
        // Verificar se o caractere e maiusculo
        if (frase[i] >= 'A' && frase[i] <= 'Z') {
            printf("Caractere '%c' (posicao %d) e uma letra maiuscula\n", frase[i], i);
        }
    }

    // Mostrar a quantidade total
    printf("\nTotal de letras minusculas no intervalo ('c', 'p'): %d\n", contador);

    // Encerrar
    printf("\nAperte ENTER para continuar");
    getchar();
}

void caracteresReijeitados(char *frase)
{
    char caracteresNegados[100]="";
    
}

void method_04(void)
{
    // Identificar
    printf("%s\n", "\nMetodo 0414\n");

    // Declarar variaveis
    char frase[100] = "";
    char resultado[100]="";
    int contador = 0;

    // Ler uma sequencia de caracteres do teclado
    IO_print("Digite uma sequencia de ate 100 caracteres: ");
    fgets(frase, sizeof(frase), stdin); // Le a string
    frase[strcspn(frase, "\n")] = '\0'; // Remove o caractere de nova linha (\n)

    // Percorrer a sequencia e contar letras minusculas no intervalo ('c', 'p')
    for (int i = 0; i < strlen(frase); i++) {
        // Verificar se o caractere e minusculo
        if (frase[i] >= 'a' && frase[i] <= 'z') {
            // Verificar se esta no intervalo ('c', 'p')
            if (frase[i] > 'c' && frase[i] < 'p') {
                contador++;
                printf("Caractere '%c' esta no intervalo ('c', 'p')\n", frase[i]);
            }
            else
            {
                caracteresReijeitados(frase[i]);
            }
        }
    }

    // Exibir letras maiusculas diretamente
    IO_print("\nLetras maiusculas encontradas na sequencia:\n");
    for (int i = 0; i < strlen(frase); i++)
    {
        // Verificar se o caractere e maiusculo
        if (frase[i] >= 'A' && frase[i] <= 'Z')
        {
            printf("Caractere '%c' e uma letra maiuscula\n", frase[i]);
        }
        else
        {
            caracteresReijeitados(frase[i]);
        }
    }

    // Mostrar a quantidade total
    printf("\nTotal de letras minusculas no intervalo ('c', 'p'): %d\n", contador);

    // Encerrar
    printf("\nAperte ENTER para continuar");
    getchar();
}

void method_05(void)
{
    // identificar
    printf("%s\n", "\nMetodo 05\n");
    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

void method_06(void)
{
    // identificar
    printf("%s\n", "\nMetodo 06\n");
    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

void method_07(void)
{
    // identificar
    printf("%s\n", "\nMetodo 07\n");
    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

void method_08(void)
{
    // identificar
    printf("%s\n", "\nMetodo 08\n");
    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

void method_09(void)
{
    // identificar
    printf("%s\n", "\nMetodo 09\n");
    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

void method_10(void)
{
    // identificar
    printf("%s\n", "\nMetodo 10\n");
    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

void method_11(void)
{
    // identificar
    printf("%s\n", "\nMetodo 11\n");
    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

void method_12(void)
{
    // identificar
    printf("%s\n", "\nMetodo 12\n");
    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

/*
---------------------------------------------------------------------------------------------------
DOCUMENTACAO
---------------------------------------------------------------------------------------------------

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
