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

// Definicoes
#define MAX 82

// Declaracao dos metodos utilizados
void method_00(void);
void method_1011(void);
void method_1012(void);
void method_1013(void);
void method_1014(void);
void method_1015(void);
void method_1016(void);
void method_1017(void);
void method_1018(void);
void method_1019(void);
void method_1020(void);
void _10E1(void);
void _10E2(void);
int RandomIntGenerate(int limite_Inferior, int limite_Superior);
void readArrayFromFile(int quantidade, char *nome_do_arquivo);
void arraySearch(int quantidade, int valor, char *nome_do_arquivo, int *array);

// Funcao Principal
int main(void)
{
    // armazenar a opcao do usuario
    int opcao = 0;
    IO_id("ED");
    IO_print("\n\tOpcoes de Metodos:");

    // Menu de opcoes do usuario
    do
    {
        IO_print("\n0 - Parar");
        IO_print("\n1 - Metodo 0a11");
        IO_print("\n2 - Metodo 0a12");
        IO_print("\n3 - Metodo 0a13");
        IO_print("\n4 - Metodo 0a14");
        IO_print("\n5 - Metodo 0a15");
        IO_print("\n6 - Metodo 0a16");
        IO_print("\n7 - Metodo 0a17");
        IO_print("\n8 - Metodo 0a18");
        IO_print("\n9 - Metodo 0a19");
        IO_print("\n10 - Metodo 0a20");
        IO_print("\n11 - Metodo 0a21");
        IO_print("\n12 - Metodo 0a22");

        opcao = IO_readint("\nDigite uma opcao: ");
        switch (opcao)
        {
        case 0:
            method_00();
            break;

        case 1:
            method_1011();
            break;

        case 2:
            method_1012();
            break;

        case 3:
            method_1013();
            break;

        case 4:
            method_1014();
            break;

        case 5:
            method_1015();
            break;

        case 6:
            method_1016();
            break;

        case 7:
            method_1017();
            break;

        case 8:
            method_1018();
            break;

        case 9:
            method_1019();
            break;

        case 10:
            method_1020();
            break;

        case 11:
            _10E1();
            break;

        case 12:
            _10E2();
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
void method_00(void)
{
    // Identificacao
    IO_start("\nMetodo 00\n");

    // Mensagem de encerramento
    IO_print("ENCERRANDO O PROGRAMA...\n");
}

/*
---------------------------------------------------------------------------------------------------
METODO RandomIntGenerate

- Faz a divisao por 100 para garantir um numero aleatorio que respeite os limites da declaracao inteira
---------------------------------------------------------------------------------------------------
*/

int RandomIntGenerate(int limite_Inferior, int limite_Superior)
{
    return (rand() % (limite_Superior - limite_Inferior + 1)) + limite_Inferior;
}

/*
---------------------------------------------------------------------------------------------------
METODO 01
---------------------------------------------------------------------------------------------------
gerar um valor inteiro aleatoriamente dentro de um intervalo,
cujos limites de início e de fim serão recebidos como parâmetros.
Para para testar, ler os limites do intervalo do teclado;
ler a quantidade de elementos ( N ) a serem gerados;
gerar essa quantidade ( N ) de valores aleatórios
dentro do intervalo e armazená-los em arranjo;
gravá-los, um por linha, em um arquivo ("DADOS.TXT").
A primeira linha do arquivo deverá informar a quantidade
de números aleatórios ( N ) que serão gravados em seguid
---------------------------------------------------------------------------------------------------
*/

void method_1011(void)
{
    // identificacao
    IO_start("\nMetodo 1011\n");

    // Declaracao de variaveis
    int limite_Inferior = 0;
    int limite_Superior = 0;
    int quantidade_Repeticoes = 0;
    int i = 0;
    int *arranjo_de_Inteiros = NULL;

    char *nome_do_Arquivo = "method_1011.txt";
    FILE *method_1011 = fopen(nome_do_Arquivo, "wt");

    limite_Inferior = IO_readint("\nDigite o valor do limite inferior: ");
    limite_Inferior = IO_readint("\nDigite o valor do limite superior: ");

    quantidade_Repeticoes = IO_readint("\nDigite a quantidade de numeros aleatorios que deseja gerar: ");

    if (method_1011 != NULL)
    {
        // Checagem de pre-condicao de existencia de um intervalo
        if (!(limite_Inferior < limite_Superior))
        {
            // Alocacao na memoria de acordo com a quantidade digitada
            arranjo_de_Inteiros = (int *)malloc(quantidade_Repeticoes * sizeof(int));

            if (arranjo_de_Inteiros != NULL)
            {
                fprintf(method_1011, "Repeticoes requisitadas: %d\n", quantidade_Repeticoes);
                for (i = 0; i < quantidade_Repeticoes; i = i + 1)
                {
                    arranjo_de_Inteiros[i] = RandomIntGenerate(limite_Inferior, limite_Superior);
                    fprintf(method_1011, "%d\n", arranjo_de_Inteiros[i]);
                }
                IO_print("\nGravacao concluida");
            }

            else
            {
                IO_print("Erro ao alocar a memoria");
            }
        }

        else
        {
            IO_print("\nIntervalo invalido, limite inferior e maior que limite superior.");
        }
    }

    else
    {
        IO_print("\nErro ao tentar abrir o arquivo.");
    }

    free(arranjo_de_Inteiros);
    fclose(method_1011);

    // encerramento
    IO_end();
}

/*
---------------------------------------------------------------------------------------------------
METODO readArrayFromFile
---------------------------------------------------------------------------------------------------
*/

void ReadArrayFromFile(int quantidade, int valor, char *nome_do_arquivo)
{
    IO_print("\n\nReadArrayFromFile");

    int i = 0;
    int *array_Int = NULL;
    FILE *method_1012 = NULL;

    if (nome_do_arquivo != NULL)
    {
        method_1012 = fopen(nome_do_arquivo, "r");

        if (method_1012 != NULL)
        {
            array_Int = (int *)malloc(quantidade * sizeof(int));

            if (array_Int != NULL)
            {
                for (i = 0; i < quantidade; i = i + 1)
                {
                    fscanf(method_1012, "%d", &array_Int[i]);
                }

                arraySearch(valor, quantidade, nome_do_arquivo, array_Int);

            }
            else
            {
                IO_print("\nNao foi possivel alocar memoria");
            }

            fclose(method_1012);
        }
        else
        {
            IO_print("\nNao foi possivel abrir o arquivo");
        }
    }
    else
    {
        IO_print("\nNome do arquivo invalido");
    }
}

/*
---------------------------------------------------------------------------------------------------
METODO arraySearch
---------------------------------------------------------------------------------------------------
*/

void arraySearch(int valor, int quantidade, char *nome_do_arquivo, int *array)
{
    int i = 0;
    int encontrou = 0;

    if (array != NULL)
    {
        for (i = 0; i < quantidade; i = i + 1)
        {
            if (array[i] == valor)
            {
                printf("\nValor encontrado na linha/posicao: %d\n", i+1);
                encontrou = 1;
            }
        }

        if (encontrou == 0)
        {
            printf("\nValor nao encontrado no array.");
        }
    }
}

/*
---------------------------------------------------------------------------------------------------
METODO 02
-
---------------------------------------------------------------------------------------------------
*/

void method_1012(void)
{

    IO_print("\nmethod_1012\n");

    int quantidade = 0;
    int valor = 0;
    int i = 0;
    char *nome_do_Arquivo = "method_1012.txt";
    FILE *method_1012 = NULL;

    valor = IO_readint("\nDigite o valor que quer procurar no arquivo: ");
    quantidade = IO_readint("\nDigite a quantidade de numeros aleatorios para preencher o arquivo: ");

    method_1012 = fopen(nome_do_Arquivo, "wt");

    if (method_1012 != NULL)
    {
        if (quantidade > 0)
        {
            for (i = 0; i < quantidade; i = i + 1)
            {
                fprintf(method_1012, "%d\n", rand() % 1000);
            }

            IO_print("\nNumeros aleatorios gerados");
        }
        else
        {
            IO_print("\nQuantidade invalida (menor ou igual a 0)");
        }

        fclose(method_1012);
    }
    else
    {
        IO_print("\nNao foi possivel criar o arquivo");
    }

    if (quantidade > 0)
    {
        ReadArrayFromFile(quantidade, valor, nome_do_Arquivo);
    }

    IO_end();

}

/*
---------------------------------------------------------------------------------------------------
METODO readArrayFromFile
-
---------------------------------------------------------------------------------------------------
*/

char *readArrayFromFile_1013(char *nome_do_arquivo)
{
    // Identificacao
    IO_start("\nMetodo readArrayFromFile_1013\n");

    // Declaracao de variaveis
    char *arranjo=NULL;
    FILE *arquivo=fopen(nome_do_arquivo, "r");

    arranjo=(char*)malloc(MAX*sizeof(char));
    
    if (arquivo!=NULL)
    {
        if(nome_do_arquivo!=NULL)
        {
            fscanf(arquivo, "%s", arranjo);
            printf("\nA frase encontrada dentro do arquivo foi: %s\n\n", arranjo);
        }
        else
        {
            IO_print("\nFalha ao carregar o nome do arquivo");
        }
    }
    else
    {
        IO_print("\nErro ao abrir o arquivo");
    }

    fclose(arquivo);

    return arranjo;
}

/*
---------------------------------------------------------------------------------------------------
METODO arrayCompare
-
---------------------------------------------------------------------------------------------------
*/

int arrayCompare_1013(char *arranjo1, char *arranjo2)
{
    // Identificacao
    IO_start("\nMetodo arrayCompare_1013\n");

    // Declaracao de variaveis
    int verificador=0;

    if(strlen(arranjo1)==strlen(arranjo2))
    {
        IO_print("\nO tamanho das strings sao iguais.");
        verificador=1;
    }
    else
    {
        IO_print("\nO tamanho das strings sao diferentes.");
        verificador=0;
    }
    return verificador;
}

/*
---------------------------------------------------------------------------------------------------
METODO 03

operar a comparação de dois arranjos.
Para testar, receber dados de arquivos e 
aplicar a função sobre os arranjos com os valores lidos.
DICA: Verificar se, e somente se, os tamanhos forem iguais.
---------------------------------------------------------------------------------------------------
*/

void method_1013(void)
{
    // Identificacao
    IO_start("\nMetodo 1013\n");

    // Declaracao de variaveis
    int tamanho_string=0;
    int verificador=0;
    char *nome_do_arquivo="method_1013.txt";
    char *nome_do_arquivo_02="method_1013_02.txt";
    char *arranjo1=NULL;
    char *arranjo2=NULL;
    FILE *method_1013=fopen(nome_do_arquivo, "wt");
    FILE *method_1013_02=fopen(nome_do_arquivo_02, "wt");

    arranjo1=(char*)malloc(MAX*sizeof(char));
    arranjo2=(char*)malloc(MAX*sizeof(char));

    // Procedimento para escrever frases dentro do arquivo
    //{
    IO_print("Digite a primeira frase (tamanho maximo de 80 caracteres): ");
    fgets(arranjo1, MAX, stdin);
    tamanho_string=strlen(arranjo1);

    // Se passar do tamanho limite, a string invade a area de arranjo2

    if (!(tamanho_string > 0 && arranjo1[tamanho_string - 1] != '\n'))
    {
        fprintf(method_1013,"%s", arranjo1);

        IO_print("\nDigite a segunda frase (tamanho maximo de 80 caracteres): ");
        fgets(arranjo2, MAX, stdin);
        tamanho_string=strlen(arranjo2);

        if (!(tamanho_string > 0 && arranjo2[tamanho_string - 1] != '\n'))
        {
            fprintf(method_1013_02,"%s", arranjo2);

            if(arranjo1!=NULL || arranjo1[0]!='\n' && arranjo2!=NULL || arranjo2[0]!='\n')
            {
                fclose(method_1013);
                fclose(method_1013_02);
                arranjo1=readArrayFromFile_1013(nome_do_arquivo);
                arranjo2=readArrayFromFile_1013(nome_do_arquivo_02);
            }
    
            else
            {
                IO_print("\nErro ao alocar arranjos");
            }
        }

        else
        {
            IO_print("\nInvalido, frase/palavra superou o limite. Programa comprometido.");
        }
    }
    
    else
    {
        IO_print("\nInvalido, frase/palavra superou o limite. Programa comprometido.");
    }
    //}fim do procedimento

    verificador=arrayCompare_1013(arranjo1, arranjo2);

    // Procedimentos para encerramento
    free(arranjo1);
    free(arranjo2);

    // Encerramento
    IO_end();
}

/*
---------------------------------------------------------------------------------------------------
METODO 04
-
---------------------------------------------------------------------------------------------------
*/

void method_1014(void)
{
    // Identificacao
    IO_start("\nMetodo 1014\n");

    // Encerramento
    IO_end();
}

/*
---------------------------------------------------------------------------------------------------
METODO 05
-
---------------------------------------------------------------------------------------------------
*/

void method_1015(void)
{
    // Identificacao
    IO_start("\nMetodo 1015\n");

    // Encerramento
    IO_end();
}

/*
---------------------------------------------------------------------------------------------------
METODO 06
-
---------------------------------------------------------------------------------------------------
*/

void method_1016(void)
{
    // Identificacao
    IO_start("\nMetodo 1016\n");

    // Encerramento
    IO_end();
}

/*
---------------------------------------------------------------------------------------------------
METODO 07
-
---------------------------------------------------------------------------------------------------
*/

void method_1017(void)
{
    // Identificacao
    IO_start("\nMetodo 1017\n");

    // Encerramento
    IO_end();
}

/*
---------------------------------------------------------------------------------------------------
METODO 08
-
---------------------------------------------------------------------------------------------------
*/

void method_1018(void)
{
    // Identificacao
    IO_start("\nMetodo 1018\n");

    // Encerramento
    IO_end();
}

/*
---------------------------------------------------------------------------------------------------
METODO 09
-
---------------------------------------------------------------------------------------------------
*/

void method_1019(void)
{
    // Identificacao
    IO_start("\nMetodo 1019\n");

    // Encerramento
    IO_end();
}

/*
---------------------------------------------------------------------------------------------------
METODO 10
-
---------------------------------------------------------------------------------------------------
*/

void method_1020(void)
{
    // Identificacao
    IO_start("\nMetodo 1020\n");

    // Encerramento
    IO_end();
}

/*
---------------------------------------------------------------------------------------------------
METODO 11
-
---------------------------------------------------------------------------------------------------
*/

void _10E1(void)
{
    // Identificacao
    IO_start("\n10E1\n");

    // Encerramento
    IO_end();
}

/*
---------------------------------------------------------------------------------------------------
METODO 12
-
---------------------------------------------------------------------------------------------------
*/

void _10E2(void)
{
    // Identificacao
    IO_start("\n10E2\n");

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
