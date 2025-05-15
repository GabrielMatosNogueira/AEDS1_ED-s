#include "io.h"
#define MAX 81

void metodo_1011(void);
void metodo_1012(void);

typedef struct array
{
    int *arranjo;
    int n;
}array;


int main (void)
{
    int opcao=0;
    IO_id("ED10");
    do
    {
        opcao=IO_readint("\nDigite a opcao desejada: ");

        switch (opcao)
        {
        case 0:
            break;
        case 1:
            metodo_1011();
            break;
        
        default:
            break;
        }
    } while (opcao!=0);
    
}

int RandomIntGenerate (int limite_Inferior, int limite_Superior)
{
    return (rand() % (limite_Superior - limite_Inferior + 1)) + limite_Inferior;
}

void metodo_1011(void)
{
    IO_start("Metodo_1011");

    int limite_Superior=0;
    int limite_Inferior=0;
    int quantidade_Repeticoes=0;
    int valor=0;
    int i=0;

    limite_Inferior=IO_readint("Digite o valor do limite inferior: ");
    limite_Superior=IO_readint("Digite o valor do limite superior: ");
    quantidade_Repeticoes=IO_readint("Digite a quantidade de numeros pseudo aleatorios dentro do intervalo: ");

    for(i=0; i<quantidade_Repeticoes; i=i+1)
    {
        valor=RandomIntGenerate(limite_Inferior, limite_Superior);
        IO_printf("%d\n", valor);
    }
    
    IO_end();
}

int *readArrayFromFile (char *filename)
{
    int i=0;
    int tamanho=0;
    int *arranjo=NULL;
    FILE *arquivo=fopen(filename, "wt");

    fscanf(arquivo, "%d", &tamanho);
    arquivo=(int*)malloc(tamanho*sizeof(int));

    do
    {
        fscanf(arquivo, "%d", &arranjo[i]);
    } while (!(EOF));
    
    return *arranjo;
}

void arraySearch(int valor, int *arranjo)
{

}

void metodo_1012(void)
{
    int valor=0;
    int n=0;
    int i=0;
    char *filename="metodo_1012.txt";
    FILE *arquivo=fopen(filename,"w");

    n=IO_readint("\nDigite quantos numeros inteiros aleatorios gear: ");
    valor=IO_readint("\nDigite o valor que quer procurar dentro do arranjo de numeros inteiros aleatorios: ");

    array->arranjo=(int*)malloc(n*sizeof(int));

    for(i=0;i<n; i=i+1)
    {

    }

    fclose(arquivo);
    IO_end();
}
