/*
 myarray.hpp - v0.0. - __ / __ / _____
 Author: ______________________
*/
// ----------------------------------------------- definicoes globais
#ifndef _MYARRAY_HPP_
#define _MYARRAY_HPP_
// dependencias
#include <iostream>
using std::cin;  // para entrada
using std::cout; // para saida
using std::endl; // para mudar de linha
#include <iomanip>
using std::setw; // para definir espacamento
#include <string>
using std::string; // para cadeia de caracteres
#include <fstream>
using std::ifstream; // para ler arquivo
using std::ofstream; // para gravar arquivo
template <typename T>
class Array
{
private: // area reservada
    T optional;
    int length;
    T *data;

public: // area aberta
    Array(const Array &other)
    {
        if (other.length <= 0)
        {
            cout << "\nERROR: Missing data.\n"
                 << endl;
        }
        else
        {
            // criar copia
            length = other.length;
            // reservar area
            data = new T[other.length];
            // ler dados
            for (int x = 0; x < length; x = x + 1)
            {
                data[x] = other.data[x];
            } // end for
        } // end if
    } // end constructor ( )

    void free()
    {
        if (data != nullptr)
        {
            delete (data);
            data = nullptr;
        } // end if
    } // end free ( )
    void set(int position, T value)
    {
        if (0 <= position && position < length)
        {
            data[position] = value;
        } // end if
    } // end set ( )
    T get(int position)
    {
        T value = optional;
        if (0 <= position && position < length)
        {
            value = data[position];
        } // end if
        return (value);
    } // end get ( )
    void print()
    {
        cout << endl;
        for (int x = 0; x < length; x = x + 1)
        {
            cout << setw(3) << x << " : "
                 << setw(9) << data[x]
                 << endl;
        } // end for
        cout << endl;
    } // end print ( )
    void read()
    {
        cout << endl;
        for (int x = 0; x < length; x = x + 1)
        {
            cout << setw(3) << x << " : ";
            cin >> data[x];
        } // end for
        cout << endl;
    }; // end read ( )
    void fprint(string fileName)
    {
        ofstream afile; // output file
        afile.open(fileName);
        afile << length << endl;
        for (int x = 0; x < length; x = x + 1)
        {
            afile << data[x] << endl;
        } // end for
        afile.close();
    } // end fprint ( )
    void fread(string fileName)
    {
        ifstream afile; // input file
        int n = 0;
        afile.open(fileName);
        afile >> n;
        if (n <= 0)
        {
            cout << "\nERROR: Invalid length.\n"
                 << endl;
        }
        else
        {
            // guardar a quantidade de dados
            length = n;
            // reservar area
            data = new T[n];
            // ler dados
            for (int x = 0; x < length; x = x + 1)
            {
                afile >> data[x];
            } // end for
        } // end if
        afile.close();
    } // end fread ( )
};

#endif
