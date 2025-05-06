#include "io.h"

#define MAX 80

void exercicio01();
int soma_divisores_pares(int quantidade, int array[]);
int soma_divisores_impares(int quantidade, int array[]);
void exercicio02();
void exercicio03();

int main(void)
{
    IO_id("R01");
    int opcao = 0;

    do
    {
        opcao = IO_readint("\nEscolha o exercicio: ");
        switch (opcao)
        {
        case 1:
            exercicio01();
            break;

        case 2:
            exercicio02();
            break;

        case 3:
            exercicio03();
        default:
            break;
        }
    } while (opcao != 0);
}

int soma_divisores_pares(int quantidade, int array[])
{
    int i = 0;
    int resultado_quantidade_pares = 0;

    for (i = 0; i < quantidade; i = i + 1)
    {
        if (array[i] % 2 == 0)
        {
            resultado_quantidade_pares = resultado_quantidade_pares + 1;
        }
    }

    return (resultado_quantidade_pares);
}

int soma_divisores_impares(int quantidade, int array[])
{
    int i = 0;
    int resultado_quantidade_impares = 0;

    for (i = 0; i < quantidade; i = i + 1)
    {
        if (!(array[i] % 2 == 0))
        {
            resultado_quantidade_impares = resultado_quantidade_impares + 1;
        }
    }

    return (resultado_quantidade_impares);
}

void exercicio01(void)
{
    IO_print("\nExercicio 01\n\n");

    int quantidade = 0;
    int soma_impares = 0;
    int soma_pares = 0;
    int i = 0;

    quantidade = IO_readint("Digite a quantidade de numeros inteiros para o arranjo: ");

    int array[quantidade];

    for (i = 0; i < quantidade; i = i + 1)
    {
        array[i] = IO_readint("\nDigite o numero desejado: ");
    }

    soma_pares = soma_pares + soma_divisores_pares(quantidade, array);
    soma_impares = soma_impares + soma_divisores_impares(quantidade, array);

    printf("\n%s%d%s%d%s", "Sao ", soma_pares, " divisores pares e ", soma_impares, " divisores impares");

    IO_end();
}

bool primo(int valor)
{
    bool resultado = true;
    int i = 0;

    if (valor <= 1)
    {
        resultado = false;
    }
    else
    {
        for (i = 2; i * i <= valor; i = i + 1)
        {
            if (valor % i == 0)
            {
                resultado = false;
                i = valor;
            }
        }
    }

    return resultado;
}

void exercicio02(void)
{
    {
        IO_print("\nExercicio 02\n\n");

        int quantidade = 0;
        int soma_impares = 0;
        int soma_pares = 0;
        int i = 0;

        quantidade = IO_readint("Digite a quantidade de numeros inteiros para o arranjo: ");

        int array[quantidade];

        for (i = 0; i < quantidade; i = i + 1)
        {
            array[i] = IO_readint("\nDigite o numero desejado: ");

            if (primo(array[i]))
            {
                printf("%d e' primo\n", array[i]);
            }
            else
            {
                printf("%d nao e' primo", array[i]);
            }
        }

        IO_end();
    }
}

bool testar_simbolo_logico (char frase[], int tamanho)
{
    int i=0;
    bool teste_simbolo_logico=false;

    for (i=0; i<tamanho; i=i+1)
    {
        if(frase[i]=='|' || frase[i]=='&' || frase[i]==!)
        {
            teste_simbolo_logico=true;
            return teste_simbolo_logico;
        }
    }

    return teste_simbolo_logico;
}

bool testar_simbolo_aritmetico (char frase[], int tamanho)
{
    int i=0;
    bool teste_simbolo_aritmetico=false;

    for (i=0; i<tamanho; i=i+1)
    {
        if(frase[i]=='+' || frase[i]=='-' || frase[i]=='*' || frase[i]=='/' || frase[i]=='%')
        {
            teste_simbolo_aritmetico=true;
            return teste_simbolo_aritmetico;
        }
    }

    return teste_simbolo_aritmetico;
}

bool testar_simbolo_relacional (char frase[], int tamanho)
{
    int i=0;
    bool teste_simbolo_relacional=false;

    for (i=0; i<tamanho; i=i+1)
    {
        if(frase[i]=='>' || frase[i]=='<' || frase[i]=='=')
        {
            teste_simbolo_relacional=true;
            return teste_simbolo_relacional;
        }
    }

    return teste_simbolo_relacional;
}

bool testar_simbolo_separadores (char frase[], int tamanho)
{
    int i=0;
    bool teste_simbolo_separadores=false;

    for (i=0; i<tamanho; i=i+1)
    {
        if(frase[i]==' ' || frase[i]=='.' || frase[i]==',' || frase[i]==';' || frase[i]==':' || frase[i]=='_')
        {
            teste_simbolo_separadores=true;
            return teste_simbolo_separadores;
        }
    }

    return teste_simbolo_separadores;
}

void exercicio03(void)
{
    IO_print("\nExercicio 03\n\n");

    char *frase=" ";
    int tamanho=0;
    int opcao=0;
    int resposta=0;

    frase=IO_readstring("Digite a frase desejada: ");
    tamanho=strlen(frase);

    do
    {
        IO_print("\n01- testar_simbolo_logico\n02- testar_simbolo_aritmetico\n03- testar_simbolo_relacional\n");
        opcao=IO_readint("Digite uma opcao: ");
        switch (opcao)
        {
            case 1:
                resposta=testar_simbolo_logico(frase, tamanho);
                break;
            
            case 2:
                resposta=testar_simbolo_aritmetico(frase, tamanho);
                break;

            case 3: 
                resposta=testar_simbolo_relacional (frase, tamanho);
                break;

            default:
                break;
        }
    } while (opcao!=0);

}

void exercicio04(void)
{
}

void exercicio05(void)
{
}

void exercicio06(void)
{
}

void exercicio07(void)
{
}

void exercicio08(void)
{
}

void exercicio09(void)
{
}

void exercicio10(void)
{
}
