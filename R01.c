#include "io.h"

#define MAX 80

void exercicio01();
int soma_divisores_pares(int quantidade, int array[]);
int soma_divisores_impares(int quantidade, int array[]);
void exercicio02();
void exercicio03();
void exercicio04();
void exercicio05();
void exercicio06();
void exercicio07();
void exercicio08();
void exercicio09();
void exercicio10();

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

        case 4:
            exercicio04();

        case 5:
            exercicio05();

        case 6:
            exercicio06();

        case 7:
            exercicio07();

        case 8:
            exercicio08();

        case 9:
            exercicio09();

        case 10:
            exercicio10();
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
    int *array;

    quantidade = IO_readint("Digite a quantidade de numeros inteiros para o arranjo: ");

    array = (int *)malloc(quantidade * sizeof(int));

    for (i = 0; i < quantidade; i = i + 1)
    {
        array[i] = IO_readint("\nDigite o numero desejado: ");
    }

    soma_pares = soma_pares + soma_divisores_pares(quantidade, array);
    soma_impares = soma_impares + soma_divisores_impares(quantidade, array);

    printf("\n%s%d%s%d%s", "Sao ", soma_pares, " divisores pares e ", soma_impares, " divisores impares");

    free(array);

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
        int *array;

        quantidade = IO_readint("Digite a quantidade de numeros inteiros para o arranjo: ");

        array = (int *)malloc(quantidade * sizeof(int));

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

bool testar_simbolo_logico(char frase[], int tamanho)
{
    int i = 0;
    bool teste_simbolo_logico = false;

    for (i = 0; i < tamanho; i = i + 1)
    {
        if (frase[i] == '|' || frase[i] == '&' || frase[i] == '!')
        {
            teste_simbolo_logico = true;
            return teste_simbolo_logico;
        }
    }

    return teste_simbolo_logico;
}

bool testar_simbolo_aritmetico(char frase[], int tamanho)
{
    int i = 0;
    bool teste_simbolo_aritmetico = false;

    for (i = 0; i < tamanho; i = i + 1)
    {
        if (frase[i] == '+' || frase[i] == '-' || frase[i] == '*' || frase[i] == '/' || frase[i] == '%')
        {
            teste_simbolo_aritmetico = true;
            return teste_simbolo_aritmetico;
        }
    }

    return teste_simbolo_aritmetico;
}

bool testar_simbolo_relacional(char frase[], int tamanho)
{
    int i = 0;
    bool teste_simbolo_relacional = false;

    for (i = 0; i < tamanho; i = i + 1)
    {
        if (frase[i] == '>' || frase[i] == '<' || frase[i] == '=')
        {
            teste_simbolo_relacional = true;
            return teste_simbolo_relacional;
        }
    }

    return teste_simbolo_relacional;
}

bool testar_simbolo_separadores(char frase[], int tamanho)
{
    int i = 0;
    bool teste_simbolo_separadores = false;

    for (i = 0; i < tamanho; i = i + 1)
    {
        if (frase[i] == ' ' || frase[i] == '.' || frase[i] == ',' || frase[i] == ';' || frase[i] == ':' || frase[i] == '_')
        {
            teste_simbolo_separadores = true;
            return teste_simbolo_separadores;
        }
    }

    return teste_simbolo_separadores;
}

void exercicio03(void) // Revisar a tres
{
    IO_print("\nExercicio 03\n\n");

    char *frase = " ";
    int tamanho = 0;
    int opcao = 0;
    int resposta = 0;

    frase = IO_readstring("Digite a frase desejada: ");
    tamanho = strlen(frase);

    do
    {
        IO_print("\n01- testar_simbolo_logico\n02- testar_simbolo_aritmetico\n03- testar_simbolo_relacional\n");
        opcao = IO_readint("Digite uma opcao: ");
        switch (opcao)
        {
        case 1:
            resposta = testar_simbolo_logico(frase, tamanho);
            break;

        case 2:
            resposta = testar_simbolo_aritmetico(frase, tamanho);
            break;

        case 3:
            resposta = testar_simbolo_relacional(frase, tamanho);
            break;

        default:
            break;
        }
    } while (opcao != 0);
}

void exercicio04(void)
{
}

void no_intervalo(int n, double limite_inferior, double limite_superior, double *array)
{
    int i = 0;
    double media_inferior = 0.0;
    double media_entre_intervalos = 0.0;
    double media_superior = 0.0;
    double quantidade_inferior = 0.0;
    double quantidade_entre_intervalos = 0.0;
    double quantidade_superior = 0.0;
    double soma_inferior = 0.0;
    double soma_entre_intervalos = 0.0;
    double soma_superior = 0.0;
    double *auxiliar;

    // 32*9=288bytes+4bytes (inteiro) = 292 bytes

    // for para calcular a media
    for (i = 0; i < n; i = i + 1)
    {
        if (array[i] < -21.75)
        {
            soma_inferior = soma_inferior + array[i];
            quantidade_inferior = quantidade_inferior + 1.0;
        }
        if (array[i] >= -21.75 && array[i] <= 71.25)
        {
            soma_entre_intervalos = soma_entre_intervalos + array[i];
            quantidade_entre_intervalos = quantidade_entre_intervalos + 1.0;
        }
        if (array[i] >= 71.25)
        {
            soma_superior = soma_superior + array[i];
            quantidade_superior = quantidade_superior + 1.0;
        }
    }

    // Prevensao do denominador ser igual a zero

    if(quantidade_inferior!=0)
    media_inferior = soma_inferior / quantidade_inferior;

    if(quantidade_entre_intervalos!=0)
    media_entre_intervalos = soma_entre_intervalos / quantidade_entre_intervalos;

    if(quantidade_superior!=0)
    media_superior = soma_superior / quantidade_superior;

    printf("\nMedia dos elementos inferiores a -21.75: %lf", media_inferior);
    printf("\nMedia dos elementos entre -21.75 e 71.25: %lf", media_entre_intervalos);
    printf("\nMedia dos elementos inferiores a 71.25: %lf", media_superior);
}

void exercicio05(void)
{
    IO_print("\nExercicio05");

    int n = 0;
    int i = 0;
    double limite_inferior = -21.75;
    double limite_superior = 71.25;
    double *array;

    n = IO_readint("\nDigite a quantidade de valores para o array de inteiros: ");

    if (n > 0)
    {
        array = (double *)malloc(n * sizeof(double));

        if (array != NULL)
        {
            for (i = 0; i < n; i = i + 1)
            {
                printf("\nDigite o valor da posicao %d: ", i);
                scanf("%lf", &array[i]);
            }
            no_intervalo(n, limite_inferior, limite_superior, array);
        }
    }

    else
    {
        IO_print("\nValor invalido, igual a nulo ou negativo");
    }

    free(array);

    IO_end();
}

void soma_inversos_dos_cubos(int a, int b, int valor)
{
    int i=0;
    double resultado=0.0;

    if (valor>a && valor<b)
    {
        if(!(valor%3==0))
        {
            resultado=pow(valor,3);
            printf("\nO valor de 1/(%d)^3 = %.2lf", valor, resultado);
        }
        else
        {
            printf("\nValor invalido, multiplo de 3.");
        }
    }
    else
    {
        printf("\nO valor %d nao esta no intervalo ]%d,%d[\n", valor, a, b);
    }
    
}

void exercicio06(void)
{
    IO_print("\nExercicio06");

    int a=0;
    int b=0;
    int i=0;
    int *array;

    array=(int *)malloc(sizeof(int));

    a=IO_readint("\nDigite um valor para a: ");
    b=IO_readint("\nDigite um valor para b: ");

    do
    {
        i=i+1;
        array[i]=IO_readint("\nDigite um valor para continuar ou digite -1: ");
        array = realloc(array, (i+i) * sizeof(int));
        soma_inversos_dos_cubos(a,b,array[i]);
    } while (array[i] != -1);
}

void no_intervalo_07(double a, double b, int tamanho, double *array)
{
    IO_print("\nNo_intervalo_07\n");

    int dentro = 0;
    int acima = 0;
    int abaixo = 0;
    int total = tamanho;

    for (int i = 0; i < tamanho; i++)
    {
        if (array[i] > a && array[i] < b)
        {
            dentro=dentro+1;
        }
        else if (array[i] > b)
        {
            acima=acima+1;
        }
        else if (array[i] < a)
        {
            abaixo=abaixo+1;
        }
    }

    if (total > 0)
    {
        double perc_acima = 100.0 * acima / total;
        double perc_abaixo = 100.0 * abaixo / total;

        IO_printf("Valores dentro do intervalo aberto ]%.2lf : %.2lf[: %d\n", a, b, dentro);
        IO_printf("Percentual acima do intervalo: %.2lf%%\n", perc_acima);
        IO_printf("Percentual abaixo do intervalo: %.2lf%%\n", perc_abaixo);
    }
    else
    {
        IO_print("Nenhum valor válido foi informado.\n");
    }
}


void exercicio07(void)
{
    IO_print("\nExercicio07\n");

    double a = 0.0;
    double b = 0.0;
    int i = 0;
    int tamanho = 0;
    double *array = NULL;
    double valor = 0.0;

    a = IO_readdouble("\nDigite o valor real de a: ");
    b = IO_readdouble("\nDigite o valor real de b: ");

    // Garante que a < b
    if (a > b)
    {
        double temp = a;
        a = b;
        b = temp;
    }

    do
    {
        valor = IO_readdouble("\nDigite um valor (0 para terminar): ");
        if (valor != 0.0)
        {
            array = (double *) realloc(array, (i + 1) * sizeof(double));
            if (array == NULL)
            {
                IO_print("Erro de alocação de memória.\n");
                return;
            }
            array[i] = valor;
            i=i+1;
        }
    } while (valor != 0.0);

    tamanho = i;

    no_intervalo_07(a, b, tamanho, array);

    free(array);
}

void maior(int x, int y, int z)
{

}

void menor(int x, int y, int z)
{

}

void crescente(int x, int y, int z)
{

}

void decrescente(int x, int y, int z)
{
    
}

void exercicio08(void)
{
    IO_print("\nexercicio08");

    double x=0.0;
    double y=0.0;
    double z=0.0;

    double a=0.0;                   // Armazena o menor valor
    double b=0.0;                   // Armazena o maior valor
    double variavel_temporaria=0.0; // Permite a troca de dados


    x=IO_readdouble("\nDigite um valor seu primeiro numero: ");
    y=IO_readdouble("\nDigite um valor para seu segundo numero: ");
    z=IO_readdouble("\nDigite um valor para seu terceiro numero: ");

    if(x==y && x==z)
    {
        IO_print("\n\nTodos os numeros sao iguais.\n");
    }

    else
    {
        if(x>y && y>z)
        {
            b=z;
            a=x;
            IO_print("\n\nOs numeroes estao em ordem decrescente.");
            printf("O maior valor e' %.2lf e o menor valor e' %.2lf", b,x);
        }

        if(x<y && y<z)
        {
            b=z;
            a=x;
            IO_print("\n\nOs numeroes estao em ordem crescente.\n");
            printf("O maior valor e' %.2lf e o menor valor e' %.2lf", b,x);
        }
        else
        {
            IO_print("\n\nNumeros nao estao em ordem.\n");
        }
    }

    IO_end();
}

void exercicio09(void)
{
}

void exercicio10(void)
{
}
