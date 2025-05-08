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
            break;
        case 4:
            exercicio04();
            break;
        case 5:
            exercicio05();
            break;
        case 6:
            exercicio06();
            break;
        case 7:
            exercicio07();
            break;
        case 8:
            exercicio08();
            break;
        case 9:
            exercicio09();
            break;
        case 10:
            exercicio10();
            break;

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

    if (valor <= 1 || valor%2==0)
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

bool testar_simbolo_logico(char simbolo)
{
    return (simbolo == '|' || simbolo == '&' || simbolo == '!');
}

bool testar_simbolo_aritmetico(char simbolo)
{
    return (simbolo == '+' || simbolo == '-' || simbolo == '*' || simbolo == '/' || simbolo == '%');
}

bool testar_simbolo_relacional(char simbolo)
{
    return (simbolo == '>' || simbolo == '<' || simbolo == '=');
}

bool testar_separador(char simbolo)
{
    return (simbolo == ' ' || simbolo == '.' || simbolo == ',' || simbolo == ';' || simbolo == ':' || simbolo == '_');
}

bool testar_letra_maiuscula(char simbolo)
{
    return (simbolo >= 'A' && simbolo <= 'Z');
}

bool testar_letra_minuscula(char simbolo)
{
    return (simbolo >= 'a' && simbolo <= 'z');
}

bool testar_digito(char simbolo)
{
    return (simbolo >= '0' && simbolo <= '9');
}

void exercicio03(void)
{
    IO_print("\nExercicio 03\n\n");

    chars frase = IO_readstring("Digite a cadeia de caracteres desejada: ");
    int tamanho = IO_length(frase);

    for (int i = 0; i < tamanho; i = i + 1)
    {
        char simbolo = IO_charAt(frase, i);
        chars tipo = IO_new_chars(20);

        if (testar_simbolo_logico(simbolo))
        {
            strcpy(tipo, "logico");
        }
        else if (testar_simbolo_aritmetico(simbolo))
        {
            strcpy(tipo, "aritmetico");
        }
        else if (testar_simbolo_relacional(simbolo))
        {
            strcpy(tipo, "relacional");
        }
        else if (testar_separador(simbolo))
        {
            strcpy(tipo, "separador");
        }
        else
        {
            strcpy(tipo, "outro");
        }
        IO_printf("Simbolo: %c, Tipo: %s\n", simbolo, tipo);
        free(tipo);
    }

    free(frase);
    IO_end();
}

void exercicio04()
{
    IO_print("\nExercicio 04\n\n");
    chars cadeia = IO_readln("Digite uma cadeia de caracteres para analise: ");
    int i = 0;
    int maiusculas = 0;
    int minusculas = 0;
    int digitos = 0;
    int operadores = 0;
    int separadores = 0;

    while (IO_charAt(cadeia, i) != EOS)
    {
        char simbolo = IO_charAt(cadeia, i);
        if (testar_letra_maiuscula(simbolo))
            maiusculas++;
        else if (testar_letra_minuscula(simbolo))
            minusculas++;
        else if (testar_digito(simbolo))
            digitos++;
        else if (testar_simbolo_logico(simbolo) || testar_simbolo_aritmetico(simbolo) || testar_simbolo_relacional(simbolo))
            operadores++;
        else if (testar_separador(simbolo))
            separadores++;
        i++;
    }
    free(cadeia);

    printf("\nLetras maiusculas: %d", maiusculas);
    printf("\nLetras minusculas: %d", minusculas);
    printf("\nDigitos numericos: %d", digitos);
    printf("\nOperadores: %d", operadores);
    printf("\nSeparadores: %d", separadores);
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

    if (quantidade_inferior != 0)
        media_inferior = soma_inferior / quantidade_inferior;

    if (quantidade_entre_intervalos != 0)
        media_entre_intervalos = soma_entre_intervalos / quantidade_entre_intervalos;

    if (quantidade_superior != 0)
        media_superior = soma_superior / quantidade_superior;

    printf("\nMedia dos elementos inferiores a -21.75: %lf", media_inferior);
    printf("\nMedia dos elementos entre -21.75 e 71.25: %lf", media_entre_intervalos);
    printf("\nMedia dos elementos inferiores a 71.25: %lf", media_superior);

    IO_end();
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
    int i = 0;
    double resultado = 0.0;

    if (valor > a && valor < b)
    {
        if (!(valor % 3 == 0))
        {
            resultado = pow(valor, 3);
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

    int a = 0;
    int b = 0;
    int i = 0;
    int *array;

    array = (int *)malloc(sizeof(int));

    a = IO_readint("\nDigite um valor para a: ");
    b = IO_readint("\nDigite um valor para b: ");

    do
    {
        i = i + 1;
        array[i] = IO_readint("\nDigite um valor para continuar ou digite -1: ");
        array = realloc(array, (i + i) * sizeof(int));
        soma_inversos_dos_cubos(a, b, array[i]);
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
            dentro = dentro + 1;
        }
        else if (array[i] > b)
        {
            acima = acima + 1;
        }
        else if (array[i] < a)
        {
            abaixo = abaixo + 1;
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
            array = (double *)realloc(array, (i + 1) * sizeof(double));
            if (array == NULL)
            {
                IO_print("Erro de alocação de memória.\n");
                return;
            }
            array[i] = valor;
            i = i + 1;
        }
    } while (valor != 0.0);

    tamanho = i;

    no_intervalo_07(a, b, tamanho, array);

    free(array);
}

void maior(double x, double y, double z)
{
    double max = x;
    if (y > max)
        max = y;
    if (z > max)
        max = z;

    printf("\nO maior valor e: %.2lf\n", max);
}

void menor(double x, double y, double z)
{
    double min = x;
    if (y < min)
        min = y;
    if (z < min)
        min = z;

    printf("O menor valor e: %.2lf\n", min);
}

void crescente(double x, double y, double z)
{
    if (x < y && y < z)
    {
        IO_print("Os numeros estao em ordem crescente.\n");
    }
    else
    {
        IO_print("Os numeros nao estao em ordem crescente.\n");
    }
}

void decrescente(double x, double y, double z)
{
    if (x > y && y > z)
    {
        IO_print("Os numeros estao em ordem decrescente.\n");
    }
    else
    {
        IO_print("Os numeros nao estao em ordem decrescente.\n");
    }
}

void exercicio08(void)
{
    IO_print("\nexercicio08");

    double x = IO_readdouble("\nDigite um valor para o primeiro numero: ");
    double y = IO_readdouble("\nDigite um valor para o segundo numero: ");
    double z = IO_readdouble("\nDigite um valor para o terceiro numero: ");

    if (x == y && y == z)
    {
        IO_print("\nTodos os numeros sao iguais.\n");
    }
    else
    {
        maior(x, y, z);
        menor(x, y, z);
        crescente(x, y, z);
        decrescente(x, y, z);
    }

    IO_end();
}

int sucessor_09(char a, char b)
{
    return (b == a + 1);
}

int crescente_09(char x, char y, char z)
{
    return (x < y && y < z);
}

int decrescente_09(char x, char y, char z)
{
    return (x > y && y > z);
}

char lerCaractereValido_09(char *mensagem)
{
    char c = '\0';

    do
    {
        c = IO_readchar(mensagem);
    } while (c < 32 || c > 126);

    return c;
}

void exercicio09(void)
{
    char x = '\0';
    char y = '\0';
    char z = '\0';

    int r1 = 0;
    int r2 = 0;
    int r3 = 0;

    IO_print("\nexercicio09");

    x = lerCaractereValido_09("\nDigite o primeiro caractere: ");
    y = lerCaractereValido_09("Digite o segundo caractere: ");
    z = lerCaractereValido_09("Digite o terceiro caractere: ");

    r1 = crescente_09(x, y, z);
    r2 = decrescente_09(x, y, z);
    r3 = sucessor_09(x, y);

    if (r1)
    {
        IO_print("\nOs caracteres estao em ordem crescente.\n");
    }
    else if (r2)
    {
        IO_print("\nOs caracteres estao em ordem decrescente.\n");
    }
    else
    {
        IO_print("\nOs caracteres nao estao em ordem crescente nem decrescente.\n");
    }

    if (r3)
    {
        IO_print("O segundo caractere e sucessor direto do primeiro.\n");
    }
    else
    {
        IO_print("O segundo caractere NAO e sucessor direto do primeiro.\n");
    }

    IO_end();
}

int compararCadeias(const char *s1, const char *s2)
{
    return strcmp(s1, s2);
}

void determinarMenorEMaior(char *x, char *y, char *z, char **menor, char **maior)
{
    if (compararCadeias(x, y) < 0 && compararCadeias(x, z) < 0)
    {
        *menor = x;
    }
    else if (compararCadeias(y, x) < 0 && compararCadeias(y, z) < 0)
    {
        *menor = y;
    }
    else
    {
        *menor = z;
    }

    if (compararCadeias(x, y) > 0 && compararCadeias(x, z) > 0)
    {
        *maior = x;
    }
    else if (compararCadeias(y, x) > 0 && compararCadeias(y, z) > 0)
    {
        *maior = y;
    }
    else
    {
        *maior = z;
    }
}

void exercicio10()
{
    char *x = NULL;
    char *y = NULL;
    char *z = NULL;

    int compXY = 0;
    int compXZ = 0;
    int compYZ = 0;

    char *menor = NULL;
    char *maior = NULL;

    x = IO_readstring("Digite a primeira cadeia: ");
    y = IO_readstring("Digite a segunda cadeia: ");
    z = IO_readstring("Digite a terceira cadeia: ");

    compXY = compararCadeias(x, y);
    compXZ = compararCadeias(x, z);
    compYZ = compararCadeias(y, z);

    if (compXY <= 0 && compXZ <= 0 && compYZ <= 0)
    {
        IO_println("As cadeias estao em ordem alfabetica crescente.");
    }
    else if (compXY >= 0 && compXZ >= 0 && compYZ >= 0)
    {
        IO_println("As cadeias estao em ordem alfabetica decrescente.");
    }
    else
    {
        IO_println("As cadeias nao estao em ordem alfabetica.");
        determinarMenorEMaior(x, y, z, &menor, &maior);
        IO_printf("A menor cadeia e: %s\n", menor);
        IO_printf("A maior cadeia e: %s\n", maior);
    }

    free(x);
    free(y);
    free(z);

    IO_end();
}
