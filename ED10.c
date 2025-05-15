/*
Nome do Programa:   ED10
Data:               18/03/2025
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
    Windows:    gcc -o ED10 ED10.c
    Linux:      gcc -o ED10 ED10.c
    macOS:      gcc -o ED10 ED10.c


    2.2 - Execute o programa
    Windows:     ED10
    Linux:      ./ED10
    macOS:      ./ED10

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
int readArrayFromFile(char *nome_do_arquivo);
void arraySearch(int valor, int *array);

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
        IO_print("\n1 - Metodo 1011");
        IO_print("\n2 - Metodo 1012");
        IO_print("\n3 - Metodo 1013");
        IO_print("\n4 - Metodo 1014");
        IO_print("\n5 - Metodo 1015");
        IO_print("\n6 - Metodo 1016");
        IO_print("\n7 - Metodo 1017");
        IO_print("\n8 - Metodo 1018");
        IO_print("\n9 - Metodo 1019");
        IO_print("\n10 - Metodo 1020");
        IO_print("\n11 - Metodo 10E01");
        IO_print("\n12 - Metodo 10E02");

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
    limite_Superior = IO_readint("\nDigite o valor do limite superior: ");

    if (method_1011 != NULL)
    {
        // Checagem de pre-condicao de existencia de um intervalo
        if ((limite_Inferior < limite_Superior) && (limite_Inferior!=limite_Superior))
        {
            quantidade_Repeticoes = IO_readint("\nDigite a quantidade de numeros aleatorios que deseja gerar: ");

            // Alocacao na memoria de acordo com a quantidade digitada
            arranjo_de_Inteiros = (int *)malloc(quantidade_Repeticoes * sizeof(int));

            if (arranjo_de_Inteiros != NULL)
            {
                fprintf(method_1011, "%d\n", quantidade_Repeticoes);
                for (i = 0; i < quantidade_Repeticoes; i = i + 1)
                {
                    arranjo_de_Inteiros[i] = RandomIntGenerate(limite_Inferior, limite_Superior);
                    fprintf(method_1011, "%d\n", arranjo_de_Inteiros[i]);
                }
                printf("\nGravacao concluida no arquivo %s", nome_do_Arquivo);
            }

            else
            {
                IO_print("Erro ao alocar a memoria");
            }
        }

        else
        {
            IO_print("\nIntervalo invalido, limite inferior e' maior que limite superior ou o intervalo e' igual.");
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

int * ReadArrayFromFile(char *nome_do_arquivo)
{
    IO_print("\n\nReadArrayFromFile");

    int i=0;
    int tamanho=0;
    int *arranjo;
    FILE *arquivo = fopen(nome_do_arquivo, "r");

    fscanf(arquivo, "%d", &tamanho);
    arranjo = (int *) malloc (tamanho*sizeof(int));

    if (nome_do_arquivo != NULL)
    {
        if (arquivo != NULL)
        {
            arranjo = (int *) malloc (sizeof(int));
            do
            {
                fscanf(arquivo, "%d", &arranjo[i]);
                i=i+1;
            } while (i!=tamanho);
            
            free(arranjo);
            fclose(arquivo);
            printf("\nLeitura concluida.");
        }
        else
        {
            IO_print("\nNao foi possivel abrir o arquivo");
        }
    }
    else
    {
        IO_print("\nNao foi possivel ler o nome do arquivo");
    }

    return arranjo;
}

/*
---------------------------------------------------------------------------------------------------
METODO arraySearch
---------------------------------------------------------------------------------------------------
*/

void arraySearch(int valor, int *array)
{
    int i=0;
    int tamanho=0;
    tamanho=sizeof(array)/sizeof(array[0]);

    if (array != NULL)
    {
        for(i=0; i<tamanho; i=i+1)
        {
            if(array[tamanho]==valor)
            {
                i=tamanho;
                printf("\nValor encontrado na posicao %d", i);
            }
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
    int *arranjo1=NULL;
    char *nome_do_Arquivo = "method_1012.txt";
    FILE *method_1012 = fopen(nome_do_Arquivo, "wt");

    valor = IO_readint("\nDigite o valor que quer procurar no arquivo: ");
    quantidade = IO_readint("\nDigite a quantidade de numeros aleatorios para preencher o arquivo: ");

    if (method_1012 != NULL)
    {
        if (quantidade > 0)
        {
            arranjo1=(int*)malloc(quantidade*sizeof(int));
            fprintf(method_1012, "%d\n", quantidade);
            for (i = 0; i < quantidade; i = i + 1)
            {
                fprintf(method_1012, "%d\n", rand() % 1000);
                
            }
            printf("\nNumeros aleatorios gerados no arquivo %s", nome_do_Arquivo);
            *arranjo1=*ReadArrayFromFile(nome_do_Arquivo);
            arraySearch(valor, arranjo1);
        }
        else
        {
            IO_print("\nQuantidade invalida (menor ou igual a 0)");
        }
    }
    else
    {
        IO_print("\nNao foi possivel criar o arquivo");
    }

    fclose(method_1012);
    free(arranjo1);
    IO_end();

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
    IO_start("\nMetodo arrayCompare_1013");

    // Declaracao de variaveis
    int verificador=0;

    if(strlen(arranjo1)==strlen(arranjo2))
    {
        IO_print("O tamanho das strings sao iguais.\n");
        verificador=1;
    }
    else
    {
        IO_print("O tamanho das strings sao diferentes.\n");
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
                *arranjo1=*ReadArrayFromFile(nome_do_arquivo);
                *arranjo2=*ReadArrayFromFile(nome_do_arquivo_02);
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
METODO arrayAdd
-
---------------------------------------------------------------------------------------------------
*/

int arrayAdd_1014( int constante, int *arranjo1, int *arranjo2 )
{
    int resultado=0;

    *arranjo2= *(arranjo2)*constante;
    
    resultado=*arranjo1+*arranjo2;

    return resultado;
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

    // Declaracao de variaveis

    int constante=0;
    int soma=0;
    int numero=0;
    
    int *arranjo1=NULL;
    int *arranjo2=NULL;

    char *filename="method_1014.txt";
    char *filename2="method_1014_02.txt";

    FILE *arquivo1=fopen(filename, "w");
    FILE *arquivo2=fopen(filename2, "w");


    arranjo1=(int*)malloc(1*sizeof(int));
    arranjo2=(int*)malloc(1*sizeof(int));

    if(arquivo1!=NULL && arquivo2!=NULL)
    {
        if(filename!=NULL && filename2!=NULL)
        {
            numero=rand()%1000;
            fprintf(arquivo1, "%d", numero);
        
            numero=rand()%1000;
            fprintf(arquivo2, "%d", numero);

            constante=IO_readint("\nDigite uma constante para multiplicar os numeros aleatorios lidos de dentro do arquivo: ");

            fclose(arquivo1);
            fclose(arquivo2);
            
            *arranjo1=*ReadArrayFromFile(filename);
            *arranjo2=*ReadArrayFromFile(filename2);
            soma = arrayAdd_1014( constante, arranjo1, arranjo2 );

            printf("\n------------------------------------\nArranjo 1: %d\nArranjo 2: %d\n------------------------------------\nO valor da soma e: %d\n", *arranjo1, *arranjo2, soma);
        }
        else
        {
            IO_print("Falha ao criar o nome dos arquivos");
        }
    }
    else
    {
        IO_print("\nFalha ao tentar abrir os arquivos");
    }

    free(arranjo1);
    free(arranjo2);

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

    // Declaracao de variaveis
    //int arranjo1[]=NULL;
    //int arranjo2[]=NULL;
    char *filename="method_1015.txt";
    FILE *method_1015=fopen(filename, "wt");


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
