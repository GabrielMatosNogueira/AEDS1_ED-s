#include "io.h"

void writeInts ( chars fileName, int x );
void readInts ( chars fileName );
void readDoubles ( chars fileName );
void method_01 ();
void method_02 ();
void method_03 ();

int main(void)
{
    //method_01();
    //method_02();
    method_03();
    return 0;
}

void writeInts ( chars fileName, int x )
{
// definir dados
    FILE* arquivo = fopen ( fileName, "wt" );
    int y = 0;
// repetir para a quantidade de dados
    for ( y = 1; y <= x; y = y + 1 )
    {
    // gravar valor
        fprintf ( arquivo, "%d\n", y );
    } // end for
// fechar arquivo (INDISPENSAVEL para gravacao)
    fclose ( arquivo );
} // end writeInts ( )
/**
 * Method_01 - Mostrar certa quantidade de valores.
 */
void method_01 ( )
{
// identificar
    IO_id ( "Method_01 - v0.0" );
// executar o metodo auxiliar
    writeInts ( "DADOS1.TXT", 10 );
// encerrar
    IO_pause ( "Apertar ENTER para continuar" );
}

void readInts ( chars fileName )
{
// definir dados
 FILE* arquivo = fopen ( fileName, "rt" );
 int x = 0;
// tentar ler o primeiro
 fscanf ( arquivo, "%d", &x );
// repetir enquanto houver dados
 while ( ! feof ( arquivo ) )
 {
 // mostrar valor
 printf ( "%d\n", x );
 // tentar ler o proximo
 fscanf ( arquivo, "%d", &x );
 } // end while
// fechar arquivo (RECOMENDAVEL para leitura)
 fclose ( arquivo );
} // end readInts ( )
/**
 Method_02.
*/
void method_02 ( )
{
// identificar
 IO_id ( "Method_02 - v0.0" );
// executar o metodo auxiliar
 readInts ( "DADOS1.TXT" );
// encerrar
 IO_pause ( "Apertar ENTER para continuar" );
} // end method_02 ( 

void writeDoubles ( chars fileName, int x )
{
// definir dados
 FILE* arquivo = fopen ( fileName, "wt" );
 int y = 0;
// gravar quantidade de valores
 IO_fprintf ( arquivo, "%d\n", x );
// repetir para a quantidade de dados
 for ( y = 1; y <= x; y = y + 1 )
 {
 // gravar valor
 IO_fprintf ( arquivo, "%lf\n", (0.1*y) );
 } // end for
// fechar arquivo (INDISPENSAVEL para gravacao)
 fclose ( arquivo );
} // end writeDoubles ( )
/**
 Method_03.
*/
void method_03 ( )
{
// identificar
 IO_id ( "Method_03 - v0.0" );
// executar o metodo auxiliar
 writeDoubles ( "DADOS2.TXT", 10 );
// encerrar
 IO_pause ( "Apertar ENTER para continuar" );
} // end method_03 ()




/*
---------------------------------------------------------------------------------------------------
RESULTADOS DADOS1.TXT
Programa 01
01- Sem erros de compilação
02- Resultados dentro de DADOS1.TXT: 1 2 3 4 5 6 7 8 9 10

Programa 02
01- Sem erros de compilação
02- Resultados exibidos na tela: 1 2 3 4 5 6 7 8 9 10

Programa 03
01- Sem erros de compilação COM ERRO DE EXECUÇÃO
02- Arquivos gerados no DADOS2.TXT: 10
                                    0.100000
                                    0.200000
                                    0.300000
                                    0.400000
                                    0.500000
                                    0.600000
                                    0.700000
                                    0.800000
                                    0.900000
                                    1.000000
02.1 - Problema com a formatação de dados onde y é inteiro e operado com numero real

CORREÇÃO PROGRAMA 03 [X]
*/
